/*
NAMA : MUHAMMAD JAMALUDIN NUR
NIM  : A11.2022.14616
DASAR PEMOGRAMAN 3
*/

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    cout << "Hello GUYS" << endl;

  int u = 18;
  float t = 171.5;
  char ub = 'XL';
  string ubs = "Extralarge";

  cout << "Umur saya: " << u;
  cout << endl;
  cout << "Tinggi badan: " << t;
  cout << endl;
  cout << "Ukuran baju : " << ub;
  cout << endl;
  cout << "Detail ukuran: " << ubs;
  cout << endl;

  int a;
  cout << "\nMasukan angka: ";
  cin >> a;
  cout << "\nPenjumlahan: " << a + u;
  cout << "\nPengurangan: " << a - u;
  cout << "\nPerkalian: " << a * u;

    return 0;
}
