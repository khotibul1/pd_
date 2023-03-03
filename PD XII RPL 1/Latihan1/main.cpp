#include <iostream>

using namespace std;

int main()
{
  cout << "##  Aplikasi Menghitung Luas Segitiga  ##" << endl;
  cout << "=========================================" << endl;
  cout << endl;

  int kh;
  int a, t, r;
  float ls, ll;
  float phi = 22/7;

  cout << "Input alas segitiga: ";
  cin >> a;
  cout << "Input tinggi segitiga: ";
  cin >> t;
  cout << endl;

  ls = 0.5 * a * t;

  cout << "Luas segitiga = "<< ls << endl;
  cout << "" << endl;

  cout << "##  Aplikasi Menghitung Luas Lingkaran  ##" << endl;
  cout << "==========================================" << endl;
  cout << endl;

  cout << "Input jari-jari lingkaran: ";
  cin >> r;
  ll = phi * r * r;

  cout << "Luas lingkaran = "<< ll << endl;
  cout << "" << endl;

  cin >> kh;
  return 0;
}
