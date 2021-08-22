#include <iostream>
#include <Windows.h>
using namespace std;

const int m = 219;

void main() {
//setlocale(LC_ALL, "Russian");
char Ascii[256] ;

//cout << " "; cin >> n;
for (int l = 0; l < 5; l++)
{

	for (int j = 0; j < 5; j++) // количество квадратов
	{
		for (int i = 0; i < 10; i++)
		{
			Ascii[m] = m;
			cout << Ascii[m];
		}

		for (int p = 0; p < 10; p++)
		{
			cout << " ";
		}

	}
	cout << "\n";
}

}