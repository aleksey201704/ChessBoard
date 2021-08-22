#include <iostream>
#include <Windows.h>
using namespace std;

const int m = 219;

void main() {
//setlocale(LC_ALL, "Russian");
char Ascii[256] ;
boolean li;
int n,v,s;
v = 0;

cout << " input line = "; cin >> n;

// делаем рамку
s = 218;
Ascii[s] = s;
cout << Ascii[s];

for (int i = 0; i < (n*10)+2; i++)
{
	s = 196;
	Ascii[s] = s;
	cout << Ascii[s];
}
s = 191;
Ascii[s] = s;
cout << Ascii[s];

cout << "\n";
//-------------




if (n % 2 == 0)
{
	v = n / 2;
	

	for (int q = 0; q < v; q++)
	{

		for (int l = 0; l < 5; l++)
		{
			s = 179;
			Ascii[s] = s;
			cout << Ascii[s]<< " ";

			for (int j = 0; j < v; j++) // количество квадратов
			{
				for (int i = 0; i < 10; i++)
				{
					Ascii[m] = m;
					cout  << Ascii[m];
				}

				for (int p = 0; p < 10; p++)
				{
					cout << " ";
				}

			}
			s = 179;
			Ascii[s] = s;
			cout << " " << Ascii[s] ;
			cout << "\n";
		}

		for (int l = 0; l < 5; l++)
		{
			s = 179;
			Ascii[s] = s;
			cout << Ascii[s] << " ";

			for (int j = 0; j < v; j++) // количество квадратов
			{
				for (int p = 0; p < 10; p++)
				{
					cout << " ";
				}

				for (int i = 0; i < 10; i++)
				{
					Ascii[m] = m;
					cout << Ascii[m];
				}

			}
			s = 179;
			Ascii[s] = s;
			cout << " " << Ascii[s];
			cout << "\n";
		}

	}

}
else
{
	v = n/2;
	for (int q = 0; q < v+1; q++)
	{

		for (int l = 0; l < 5; l++)
		{
			s = 179;
			Ascii[s] = s;
			cout << Ascii[s] << " ";

			for (int j = 0; j < v+1; j++) // количество квадратов
			{
				for (int i = 0; i < 10; i++)
				{
					Ascii[m] = m;
					cout << Ascii[m];
				}
				if (j != v)
				{
					for (int p = 0; p < 10; p++)
					{
						cout << " ";
					}

				}
				
			}
			s = 179;
			Ascii[s] = s;
			cout << " " << Ascii[s] ;
			cout << "\n";
		}
		if (q != v)
		{
			for (int l = 0; l < 5; l++)
			{
				s = 179;
				Ascii[s] = s;
				cout << Ascii[s] << " ";
				for (int j = 0; j < v; j++) // количество квадратов
				{
					for (int p = 0; p < 10; p++)
					{
						cout << " ";
					}

					for (int i = 0; i < 10; i++)
					{
						Ascii[m] = m;
						cout << Ascii[m];
					}

				}
				for (int p = 0; p < 10; p++)
				{
					cout << " ";
				}
				s = 179;
				Ascii[s] = s;
				cout << " " << Ascii[s] ;
				cout << "\n";
			}
		}
	}
}

// делаем нижнюю рамку
s = 192;
Ascii[s] = s;
cout << Ascii[s];

for (int i = 0; i < (n * 10) + 2; i++)
{
	s = 196;
	Ascii[s] = s;
	cout << Ascii[s];
}

s = 217;
Ascii[s] = s;
cout << Ascii[s];
}