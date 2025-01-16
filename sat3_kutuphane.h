#include <iostream>
#include <iomanip>

class _veriler {
public:
	int deger;
	_veriler* sonraki_ptr;
};

class veri_dizisi {
private:
	_veriler* sonuncu;
	int toplam_veri_sayisi = 0;
public:
	veri_dizisi()
	{
		sonuncu = nullptr;
	}
	~veri_dizisi()
	{
		delete sonuncu;
	}
	int buyukluk()
	{
		return toplam_veri_sayisi;
	}
	void ekle(const int& sayi)
	{
		_veriler* yeni_veri = new _veriler;
		yeni_veri->deger = sayi;

		if (sonuncu == nullptr)
		{
			yeni_veri->sonraki_ptr = nullptr;
			sonuncu = yeni_veri;
			toplam_veri_sayisi++;
			return;
		}
		yeni_veri->sonraki_ptr = sonuncu;
		sonuncu = yeni_veri;
		toplam_veri_sayisi++;
	}
	void sil(const int& sayi)
	{
		// Liste bo�sa direkt ��k
		if (sonuncu == nullptr)
			return;

		// �lk eleman e�le�iyorsa onu sil
		while (sonuncu != nullptr && sonuncu->deger == sayi)
		{
			_veriler* temp = sonuncu;
			sonuncu = sonuncu->sonraki_ptr;
			delete temp;
			toplam_veri_sayisi--;
		}

		// Di�er elemanlar� kontrol et
		_veriler* temp = sonuncu;
		while (temp != nullptr && temp->sonraki_ptr != nullptr)
		{
			if (temp->sonraki_ptr->deger == sayi)
			{
				_veriler* silinecek = temp->sonraki_ptr;
				temp->sonraki_ptr = silinecek->sonraki_ptr;
				delete silinecek;
				toplam_veri_sayisi--;
			}
			else
			{
				temp = temp->sonraki_ptr; // Sadece silme i�lemi yap�lmad���nda ilerle
			}
		}
	}
	int operator[] (int ind)
	{
		int count = toplam_veri_sayisi - 1;
		if (sonuncu == nullptr)
			return -999;

		_veriler* temp = sonuncu;
		while (temp != nullptr)
		{
			if (count == ind)
				return temp->deger;

			temp = temp->sonraki_ptr;
			count--;
		}
		return -999;
	}
	int eleman(int ind)
	{
		int count = toplam_veri_sayisi - 1;
		if (sonuncu == nullptr)
			return -999;

		_veriler* temp = sonuncu;
		while (temp != nullptr)
		{
			if (count == ind)
				return temp->deger;

			temp = temp->sonraki_ptr;
			count--;
		}
		return -999;
	}
	void operator=(veri_dizisi& v1)
	{
		for (int i = 0; i < v1.toplam_veri_sayisi; i++)
		{
			ekle(v1[i]);
		}
	}
	int iceriyormu(const int& sayi)
	{
		if (sonuncu == nullptr)
			return 0;

		_veriler* temp = sonuncu;
		while (temp != nullptr)
		{
			if (temp->deger == sayi)
				return 1; //iceriyor.
			temp = temp->sonraki_ptr;
		}
		return 0;

	}
};

struct mutlakparantez {
	int degisken;
	int state;
	int mutlakpar;
};


public ref class SAT3_matris {
public:



	veri_dizisi *silinen_parantezler;
	veri_dizisi *silinen_degiskenler;

	veri_dizisi *bulunacak_parantezler;

	veri_dizisi *harf_state;

	int** matris;
	int eklenen = 0;
	int parantez_sayisi;
	int degisken_sayisi;
	int* cozum;

private:
	System::Windows::Forms::RichTextBox^ output;
	int tersal(const int& sayi) //cozum kontrol yaparken kullaniyoruz
	{
		if (sayi == 1)
			return 0;
		return 1;
	}
public:
	SAT3_matris(int degisken_sayi, int parantez_sayi, System::Windows::Forms::RichTextBox^ rb)
	{
		output = rb;
		silinen_degiskenler = new veri_dizisi;
		silinen_parantezler = new veri_dizisi;
		bulunacak_parantezler = new veri_dizisi;
		harf_state = new veri_dizisi;

		parantez_sayisi = parantez_sayi;
		degisken_sayisi = degisken_sayi;

		matris = new int* [degisken_sayisi];
		for (int i = 0; i < degisken_sayisi; i++)
		{
			matris[i] = new int[parantez_sayisi];
		}

		cozum = new int[degisken_sayi];

		for (int i = 0; i < degisken_sayi; i++)
			cozum[i] = 2;

		for (int i = 0; i < degisken_sayisi; i++) {
			for (int a = 0; a < parantez_sayisi; a++)
			{
				matris[i][a] = 2; //bos matris yapiruz
			}
		}
	}
	~SAT3_matris()
	{
		delete[] cozum;
		for (int i = 0; i < degisken_sayisi; ++i)
		{
			delete[] matris[i];
		}
		delete[] matris;
	}

	void sezgiselmat_yazdir()
	{
		output->AppendText("\n      ");
		for (int i = 0; i < parantez_sayisi; i++)
		{
			if (silinen_parantezler->iceriyormu(i)) // E�er parantez silinmi�se, atla
				continue;

			// C++/CLI'ye uygun �ekilde say�y� String'e d�n��t�r
			System::String^ str = System::Convert::ToString(i + 1);
			while (str->Length < 4) str = " " + str; // 4 karakterlik hizalama
			output->AppendText(str); // C++/CLI'ye uygun formatta yazd�r
		}
		output->AppendText("\n");

		for (int a = 0; a < degisken_sayisi; a++)
		{
			if (silinen_degiskenler->iceriyormu(a)) // E�er de�i�ken silinmi�se, atla
				continue;

			// C++/CLI'ye uygun �ekilde say�y� String'e d�n��t�r
			System::String^ str = "x" + System::Convert::ToString(a);
			while (str->Length < 4) str = " " + str; // 4 karakterlik hizalama
			output->AppendText(str); // C++/CLI'ye uygun formatta yazd�r

			for (int i = 0; i < parantez_sayisi; i++)
			{
				if (silinen_parantezler->iceriyormu(i)) // E�er parantez silinmi�se, atla
					continue;

				System::String^ val = "";
				if (matris[a][i] == 1)
					val = " 1";
				else if (matris[a][i] == 0)
					val = " 0";
				else if (matris[a][i] == 2)
					val = "     "; // Bo�luk b�rak

				// 4 karakterlik hizalama
				while (val->Length < 4) val = " " + val; // 4 karakterlik hizalama
				output->AppendText(val); // C++/CLI'ye uygun formatta yazd�r
			}
			output->AppendText("\n");
		}

		output->AppendText("\n---------------------\n");
	}



	void parantez_ekle(int x, int y, int z, int d1, int d2, int d3)
	{
		matris[x][eklenen] = d1;
		matris[y][eklenen] = d2;
		matris[z][eklenen] = d3;
		eklenen++;
	}
	void parantez_ekle(int x, int y, int z)
	{
		int d1 = 1; int d2 = 1; int d3 = 1;

		if (x < 0)
		{
			x *= -1;
			d1 = 0;
		}
		if (y < 0)
		{
			y *= -1;
			d2 = 0;
		}
		if (z < 0)
		{
			z *= -1;
			d3 = 0;
		}
		matris[x - 1][eklenen] = d1;
		matris[y - 1][eklenen] = d2;
		matris[z - 1][eklenen] = d3;
		eklenen++;
	}
	int cozum_kontrol() //hata varsa 1 yoksa 0,  deneme_cozum'u kontrol eder
	{
		int toplam; //toplam en az 1 olmal�.

		for (int a = 0; a < parantez_sayisi; a++)
		{
			toplam = 0;
			for (int i = 0; i < degisken_sayisi; i++)
			{
				if (matris[i][a] == 1) //1 ise ��z�m�n kendisini degilse tam tersini al
				{
					toplam += cozum[i];
				}
				if (matris[i][a] == 0)
				{
					toplam += tersal(cozum[i]);
				}
			}
			if (toplam == 0) //minterm 0 cikti...
			{
				return 1;
			}
		}
		return 0;
	}
	void problemi_yazdir()
	{
		std::cout << "Problem: ";
		int cnt;
		for (int a = 0; a < parantez_sayisi; a++)
		{
			cnt = 0;
			std::cout << "(";
			for (int i = 0; i < degisken_sayisi; i++)
			{
				if (matris[i][a] != 2)
				{
					std::cout << "x" << i;
					if (matris[i][a] == 0)
						std::cout << "'";
					cnt++;
					if (cnt != 3)
						std::cout << "+";
				}

			}
			std::cout << ").";
		}
	}
	void cozumyazdir()
	{
		std::cout << "Cozum: ";
		for (int i = 0; i < degisken_sayisi; i++)
			std::cout << cozum[i];
	}

	mutlakparantez mutlak_parantez_kontrol()
	{
		mutlakparantez mp;
		mp.mutlakpar = -1;
		for (int i = 0; i < parantez_sayisi; i++)
		{
			if (silinen_parantezler->iceriyormu(i)) //eger degisken silinmis ise bosver
				continue;

			int agirlik = 0;
			for (int a = 0; a < degisken_sayisi; a++)
			{
				if (silinen_degiskenler->iceriyormu(a)) //eger parantez silinmis ise bosver
					continue;

				if (matris[a][i] != 2)
				{
					agirlik++;
					mp.degisken = a;
					mp.state = matris[a][i];
				}

			}
			if (agirlik == 1)
			{
				mp.mutlakpar = i;
				return mp;
			}
		}
		return mp; //mutlak parantez yok
	}
	void karsilik_gelen_parantez_sil(int degisken, int state)
	{
		for (int i = 0; i < parantez_sayisi; i++)
		{
			if (silinen_parantezler->iceriyormu(i)) //eger parantez silinmis ise bosver
				continue;

			if (matris[degisken][i] == state)
			{
				silinen_parantezler->ekle(i);
				//std::cout << i+1 << ". parantez silindi\n";
			}
		}
	}

	int parantez_agirligi(int p)
	{
		int agr = 0;
		for (int h = 0; h < degisken_sayisi;h++)
		{
			if (silinen_degiskenler->iceriyormu(h))
				continue;

			if (matris[h][p] != 2)
				agr++;
		}
		return agr;
	}
	void parantezleri_bul() //en az agir parantezlerden buluncak harfleri secer,,, hatal� �al���yor
	{
		while (bulunacak_parantezler->buyukluk() != 0)
		{
			bulunacak_parantezler->sil(bulunacak_parantezler->eleman(0));
		}

		int en_kucuk_agirlik = 100000;
		for (int p = 0; p < parantez_sayisi; p++)
		{
			if (silinen_parantezler->iceriyormu(p))
				continue;

			int agirlik = parantez_agirligi(p);
			if (agirlik == en_kucuk_agirlik)
			{
				bulunacak_parantezler->ekle(p);
			}
			if (agirlik < en_kucuk_agirlik)
			{
				en_kucuk_agirlik = agirlik;
				while (bulunacak_parantezler->buyukluk() != 0)
				{
					bulunacak_parantezler->sil(bulunacak_parantezler->eleman(0));
				}
				bulunacak_parantezler->ekle(p);
			}
		}
	}


	float sigma_hesapla(int harf, int state)
	{
		float sayi_0 = 1;
		float sayi_1 = 1;

		for (int i = 0; i < parantez_sayisi;i++)
		{
			if (silinen_parantezler->iceriyormu(i))
				continue;

			switch (matris[harf][i])
			{
			case 0:
				sayi_0++;
				break;
			case 1:
				sayi_1++;
				break;
			}
		}

		int etki = parantez_sayisi - silinen_parantezler->buyukluk();
		if (state == 1)
		{
			//return (sayi_1 / sayi_0 ) *0.025; //??????
			if (sayi_1 > sayi_0)
			{
				return 0.154;
			}
			return 0;
		}
		else
		{
			if (sayi_0 > sayi_1)
			{
				return 0.154;
			}
			return 0;
			//return (sayi_0 / sayi_1) * 0.025; //0.4, 0.2
		}
	}


	void kont()
	{
		parantezleri_bul();
		int enbuyuk = -99999;
		int degisken, state;
		output->AppendText("--------------------\n");
		for (int a = 0; a < degisken_sayisi; a++)
		{
			if (silinen_degiskenler->iceriyormu(a)) //eger degisken silinmis ise bosver
				continue;

			float agir_0 = 0;
			float agir_1 = 0;
			bool eklendi = 1;
			for (int i = 0; i < parantez_sayisi; i++)
			{
				if (silinen_parantezler->iceriyormu(i)) //eger parantez silinmis ise bosver
					continue;
				if (matris[a][i] == 1)
				{
					if (parantez_agirligi(i) == 2) //eger agirligi 2 ise'de yapilabilir
					{
						if (eklendi)
							agir_1 += parantez_sayisi * 10;
						eklendi = false;
					}

					agir_1++;
					for (int d = 0; d < degisken_sayisi; d++)
					{
						if (d == a) //mevcut degisken icin sigma hesaplanmaz
							continue;
						if (matris[d][i] == 1)
						{
							agir_1 -= sigma_hesapla(d, 1);
						}
					}
				}
				if (matris[a][i] == 0)
				{
					if (parantez_agirligi(i) == 2)
					{
						if (eklendi)
							parantez_sayisi * 10;
						eklendi = false;
					}
					agir_0++;
					for (int d = 0; d < degisken_sayisi; d++)
					{
						if (d == a) //mevcut degisken icin sigma hesaplanmaz
							continue;
						if (matris[d][i] == 0)
						{
							agir_0 -= sigma_hesapla(d, 0);
						}
					}
				}
			}
			//std::cout << karsilik_gelen_harf(a) << " icin agirliklar: " << agir_0 << "  " << agir_1 << "\n";
			int say = a + 1;
			output->AppendText("x" + say + " icin agirliklar: " + agir_0 + "  " + agir_1 + "\n");
			if (agir_0 > agir_1)
			{
				if (agir_0 > enbuyuk)
				{
					enbuyuk = agir_0;
					degisken = a;
					state = 0;
				}
			}
			else
			{
				if (agir_1 > enbuyuk)
				{
					enbuyuk = agir_1;
					degisken = a;
					state = 1;
				}
			}
		}
		int deg = degisken + 1;
		output->AppendText("--------------------\nx" + deg + " = " + state + " de�eri atand�.\n");
		cozum[degisken] = state;
		silinen_degiskenler->ekle(degisken);
		karsilik_gelen_parantez_sil(degisken, state);
	}

	void kont_nodebug()
	{
		//parantezleri_bul();
		int enbuyuk = -99999;
		int degisken, state;
		//std::cout << "\n";
		for (int a = 0; a < degisken_sayisi; a++)
		{
			if (silinen_degiskenler->iceriyormu(a)) //eger degisken silinmis ise bosver
				continue;

			float agir_0 = 0;
			float agir_1 = 0;
			bool eklendi = true;
			for (int i = 0; i < parantez_sayisi; i++)
			{
				if (silinen_parantezler->iceriyormu(i)) //eger parantez silinmis ise bosver
					continue;
				if (matris[a][i] == 1)
				{
					if (parantez_agirligi(i) == 2) //eger agirligi 2 ise'de yapilabilir
					{
						if (eklendi)
							agir_1 += parantez_sayisi * 10;
						eklendi = false;
					}

					agir_1++;
					for (int d = 0; d < degisken_sayisi; d++)
					{
						if (d == a) //mevcut degisken icin sigma hesaplanmaz
							continue;
						if (matris[d][i] == 1)
						{
							agir_1 -= sigma_hesapla(d, 1);
						}
					}
				}
				if (matris[a][i] == 0)
				{
					if (parantez_agirligi(i) == 2)
					{
						if (eklendi)
							agir_0 += parantez_sayisi * 10;
						eklendi = false;
					}

					agir_0++;
					for (int d = 0; d < degisken_sayisi; d++)
					{
						if (d == a) //mevcut degisken icin sigma hesaplanmaz
							continue;
						if (matris[d][i] == 0)
						{
							agir_0 -= sigma_hesapla(d, 0);
						}
					}
				}
			}

			if (agir_0 > agir_1)
			{
				if (agir_0 > enbuyuk)
				{
					enbuyuk = agir_0;
					degisken = a;
					state = 0;
				}
			}
			else
			{
				if (agir_1 > enbuyuk)
				{
					enbuyuk = agir_1;
					degisken = a;
					state = 1;
				}
			}
		}

		cozum[degisken] = state;
		silinen_degiskenler->ekle(degisken);
		karsilik_gelen_parantez_sil(degisken, state);
	}


	void degisken_sil(int degisken, int state)
	{
		silinen_degiskenler->ekle(degisken);
		cozum[degisken] = state;
		karsilik_gelen_parantez_sil(degisken, state);
	}

	int bitti_mi()
	{
		return silinen_parantezler->buyukluk() == parantez_sayisi ? 1 : 0;
	}

	int cozum_var_mi()
	{
		if (bitti_mi())
			return 1;

		for (int a = 0; a < parantez_sayisi; a++)
		{
			if (silinen_parantezler->iceriyormu(a))
				continue;

			for (int i = 0; i < degisken_sayisi; i++)
			{
				if (silinen_degiskenler->iceriyormu(i))
					continue;

				if (matris[i][a] != 2)
					return 1;
			}
		}
		return 0;
	}
};