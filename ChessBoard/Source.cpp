#include <iostream>
#include <Windows.h>
using namespace std;


void main() {
	//setlocale(LC_ALL, "Russian");

int  m;
char Ascii[256];
//cout << "¬ведите ширину доски"; cin >> n;
 for (int i = 0; i < 256; i++)
{
	Ascii[i] = i;
	cout << i << " - " << Ascii[i];
}

 cout << "\n";
 m=220;
 Ascii[m] = m ;
 cout << Ascii[m];

}