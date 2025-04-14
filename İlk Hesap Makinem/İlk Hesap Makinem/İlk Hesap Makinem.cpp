#include <iostream>
#include <cmath>
#include <conio.h>
int main()
{
	constexpr auto pi = 3.14159265358979323846;;
	double sayi1, sayi2, sonuc;
	sayi1 = 0; sayi2 = 0; sonuc = 0;
	using namespace std;
	char yn;
	cout << "\033[36;5m" << "HESAP MAKINESINE HOSGELDINIZ\n\n" << "\033[0m";
	do
	{
		cout << "\033[96m" << "Toplama +           Cikarma -\n" << "\033[0m";
		cout << "\033[96m" << "Carpma *            Bolme /\n" << "\033[0m";
		cout << "\033[96m" << "Yuzdelik %          Kok Alma #\n" << "\033[0m";
		cout << "\033[96m" << "Kuvvet ^            Faktoriyel !\n" << "\33[0m";
		cout << "\033[96m" << "Sinus 1             Cosinus 2\n" << "\033[0m";
		cout << "\033[96m" << "Tangant 3           Cotangant 4\n" << "\033[0m";
		cout << "\033[96m" << "Hipotenus 5         Logaritma 6\n\n" << "\033[0m";
		char islem;  //Value
		cout << "\nIslemi giriniz "; islem = _getche();
		if (islem == '+')
		{
			if (sayi1 != sonuc)
			{
				cout << "\nIlk sayiyi giriniz: "; cin >> sayi1;
				cout << "Ikinci sayiyi giriniz:"; cin >> sayi2;
				sonuc = sayi1 + sayi2;
				cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc:" << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nIkinci sayiyi giriniz: "; cin >> sayi2;
				sonuc = sayi1 + sayi2;
				cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
		}
		else if (islem == '-')   // Cıkarma
		{
			if (sayi1 != sonuc)
			{
				cout << "\nIlk sayiyi giriniz: "; cin >> sayi1;
				cout << "\nIkinci sayiyi giriniz: "; cin >> sayi2;
				sonuc = sayi1 - sayi2;
				cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nIkinci sayiyi giriniz :"; cin >> sayi2;
				sonuc = sayi1 - sayi2;
				cout << "\033[35m" << "\nIlk sayi : " << sayi1 << "\nIkinci sayi : " << sayi2 << "\nSonuc : " << sonuc << "\033[0m";
			}
		}
		else if (islem == '*')   // Carpma
		{
			if (sayi1 != sonuc)
			{
				cout << "\nIlk sayiyi giriniz : "; cin >> sayi1;
				cout << "\nIkinci sayiyi giriniz :"; cin >> sayi2;
				sonuc = sayi1 * sayi2;
				cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nIkinci sayiyi giriniz :"; cin >> sayi2;
				sonuc = sayi1 * sayi2;
				cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
		}
		else if (islem == '/')  // Bolme
		{
			if (sayi1 != sonuc)
			{
				do
				{
					cout << "\nIlk sayiyi giriniz: "; cin >> sayi1;
					cout << "\nIkinci sayiyi giriniz: "; cin >> sayi2;
					if (sayi2 == 0)
					{
						cout << "\033[31m" << " \nEger boyle yaparsan sonuc tanimsiz olur!\n" << "\033[0m";
					}
				} while (sayi2 == 0);
				sonuc = sayi1 / sayi2;
			}
			else
			{
				do {
					cout << "\nIkinci sayiyi giriniz: "; cin >> sayi2;
					if (sayi2 == 0)

						cout << "\033[31m" << " \nEger boyle yaparsan sonuc tanimsiz olur!\n" << "\033[0m";
				} while (sayi2 == 0);
			}
			sonuc = sayi1 / sayi2;
			cout << "\033[35m" << "\nIlk sayi: " << sayi1 << "\nIkinci sayi: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
		}

		else if (islem == '^')  // Kuvvet alma
		{
			if (sayi1 != sonuc)
			{
				cout << "\nSayiyi giriniz: "; cin >> sayi1;
				cout << "\nUssu giriniz:"; cin >> sayi2;
				sonuc = pow(sayi1, sayi2);
				cout << "\033[35m" << "\nTaban: " << sayi1 << "\nUs: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nUssu giriniz: "; cin >> sayi2;
				sonuc = pow(sayi1, sayi2);
				cout << "\033[35m" << "\nTaban: " << sayi1 << "\nUs: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
		}
		else if (islem == '%') // Yuzde alma
		{
			if (sayi1 != sonuc)
			{
				cout << "\nSayiyi giriniz: "; cin >> sayi1;
				cout << "\nYuzde kacini almak istediginizi giriniz: "; cin >> sayi2;
				sonuc = (sayi1 * sayi2) / 100;
				cout << "\033[35m" << "\nSayi: " << sayi1 << "\n%" << "'si: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nYuzde kacini almak istediginizi giriniz: "; cin >> sayi2;
				sonuc = (sayi1 * sayi2) / 100;
				cout << "\033[35m" << "\nSayi: " << sayi1 << "\n%" << "'si: " << sayi2 << "\nSonuc: " << sonuc << "\033[0m";
			}
		}
		else if (islem == '#') // Kök
		{
			if (sayi1 != sonuc)
			{
				cout << "\nSayiyi giriniz : "; cin >> sayi1;
				cout << "Mertebeyi giriniz : "; cin >> sayi2;
				sonuc = pow(sayi1, (1 / sayi2));
				cout << "\033[35m" << "\nSayi: " << sayi1 << "\nSonuc: " << sonuc << "\033[0m";
			}
			else
			{
				cout << "\nMertebeyi giriniz : "; cin >> sayi2;
				sonuc = pow(sayi1, (1 / sayi2));
				cout << "\033[35m" << "\nSayi: " << sayi1 << "\nSonuc: " << sonuc << "\033[0m";
			}
		}
		else if (islem == '1')  /// sin
		{
			if (sayi1 != sonuc)
			{
				cout << "\nDereceyi giriniz: "; cin >> sayi1;
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = sin(sayi1);
				cout << "\033[35m" << "\nSinus" << sayi2 << ": " << sonuc << "\033[0m";
			}
			else
			{
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = sin(sayi1);
				cout << "\033[35m" << "\nSinus" << sayi1 << ": " << sonuc << "\033[0m";
			}
		}
		else if (islem == '2')  // cos
		{
			if (sayi1 != sonuc)
			{
				cout << "\nDereceyi giriniz: "; cin >> sayi1;
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = cos(sayi1);
				cout << "\033[35m" << "\nCosinus" << sayi1 << ": " << sonuc << "\033[0m";
			}
			else
			{
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = cos(sayi1);
				cout << "\033[35m" << "\nCosinus" << sayi1 << ": " << sonuc << "\033[0m";
			}
		}
		else if (islem == '3')  // tan
		{
			if (sayi1 != sonuc)
			{
				cout << "\nDereceyi giriniz: "; cin >> sayi1;
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = tan(sayi1);
				cout << "\033[35m" << "\nTangant" << sayi1 << ": " << sonuc << "\033[0m";
			}
			else
			{
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = tan(sayi1);
				cout << "\033[35m" << "\nTangant" << sayi1 << ": " << sonuc << "\033[0m";
			}
		}
		else if (islem == '4')   // cot
		{
			if (sayi1 != sonuc)
			{
				cout << "\nDereceyi giriniz : "; cin >> sayi1;
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180.0;
				sonuc = 1 / tan(sayi1);
				cout << "\033[35m" << "\nCotangant" << sayi1 << ": " << sonuc << "\033[0m";
			}
			else
			{
				sayi2 = sayi1;
				sayi1 = sayi1 * pi / 180;
				sonuc = 1 / tan(sayi1);
				cout << "\033[35m" << "\nCotangant" << sayi1 << ": " << sonuc << "\033[0m";
			}
		}
		else if (islem == '5')  // hipotenus
		{
			if (sayi1 != sonuc)
			{
				cout << "\nIlk sayiyi giriniz : "; cin >> sayi1;
				cout << "\nIkinci sayiyi giriniz :"; cin >> sayi2;
				sonuc = hypot(sayi1, sayi2);
				cout << "\033[35m" << "\nDik kenarlari " << sayi1 << " ve " << sayi2 << " olan ucgenin hipotenusu: " << sonuc;
			}
			else
			{
				cout << "\nIkinci sayiyi giriniz :"; cin >> sayi2;
				sonuc = hypot(sayi1, sayi2);
				cout << "\033[35m" << "\nDik kenarlari " << sayi1 << " ve " << sayi2 << " olan ucgenin hipotenusu: " << sonuc;
			}
		}
		else if (islem == '6')  // logaritma
		{
			if (sayi1 != sonuc)
			{
				cout << "\nUssu giriniz: "; cin >> sayi2;
				sonuc = log10(sayi2);
				cout << "\033[35m" << "\nlog" << sayi2 << ": " << sonuc;
			}
			else
			{
				sonuc = log10(sayi1);
				cout << "\033[35m" << "\nlog" << sayi1 << ": " << sonuc;
			}
		}
		else if (islem == '!') // faktoriyel
		{
			if (sayi1 != sonuc)
			{
				long int bas;
				bas = 1;
				cout << "\nSayiyi giriniz: "; cin >> sayi1;
				for (long int faktoriyel = 1; faktoriyel <= sayi1; faktoriyel++)
				{
					bas *= faktoriyel;
				}
				cout << "\033[35m" << "\nSonuc: " << bas << "\033[0m";
				sonuc = bas;
				sayi1 = sonuc;
			}
			else
			{
				int bas;
				bas = 1;
				for (int faktoriyel = 1; faktoriyel <= sayi1; faktoriyel++)
				{
					bas *= faktoriyel;
				}
				cout << "\033[35m" << "Sonuc: " << bas << "\033[0m";
				sonuc = bas;
			}
		}
		else
		{
			cout << "\033[1;31m" "\n\aGecersiz islem girdiniz" << "\033[0m";
		}
		cout << "\033[33;5m" << "\n\nDevam etmek icin (y)    Basa donmek icin (n)   Cikmak icin herhangi bir tusa bas\n " << "\033[0m"; yn = _getch();
		if (yn == 'y')
		{
			sayi1 = sonuc;
			system("cls");
			cout << "\033[36m" << "SONUCUNUZ:" << sayi1 << "\033[0m\n" << endl;
		}
		if (yn == 'n')
		{
			cout << "\033[36m" << "\nBasa donduk\n" << "\033[0m";
			system("cls");
			cout << "\033[36;5m" << "HESAP MAKINESINE HOSGELDINIZ\n\n" << "\033[0m";
		}

	} while (yn == 'y' || yn == 'n');
}


