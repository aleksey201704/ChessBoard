#include <iostream>
using namespace std;

const int m = 219;

void main() {
//setlocale(LC_ALL, "Russian");
char Ascii[256] ;
int n,s;
cout << " input line = "; cin >> n;

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
cout << Ascii[s] << endl;

Ascii[m] = m;

for (int i1 = 0; i1 < n; i1++)
{
	for (int i = 0; i < 5; i++) // кубик с размером
	{
		s = 179;
		Ascii[s] = s;
		cout << Ascii[s]<< " ";
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0 and j % 2 == 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << Ascii[m];
			if (i % 2 == 0 and j % 2 != 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << " ";
			if (i % 2 != 0 and j % 2 == 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << Ascii[m];
			if (i % 2 != 0 and j % 2 != 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << " ";

			if (i % 2 == 0 and j % 2 == 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << " ";
			if (i % 2 == 0 and j % 2 != 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << Ascii[m];
			if (i % 2 != 0 and j % 2 == 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << " ";
			if (i % 2 != 0 and j % 2 != 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << Ascii[m];
		}
		s = 179;
		Ascii[s] = s;
		cout << " " << Ascii[s] ;
		cout << "\n";
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