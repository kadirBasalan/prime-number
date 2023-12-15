#include <iostream.h>
#include <conio.h>

main()
{
int sayi;
bool asalMi= true;

	cout << " Lutfen bir sayi giriniz ==> ";
	cin >> sayi;

		for (int i = 2; i < sayi; i++)
		{
			if (sayi%i==0)
			{
			asalMi=false;
            break;
			}

		}

cout << (asalMi ? "Girdiginiz sayi asal" : "Girdiginiz sayi asal degil");
getch();
}
