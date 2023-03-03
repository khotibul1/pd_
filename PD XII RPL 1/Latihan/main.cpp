#include <iostream>

using namespace std;

int main()
{
    // deklarasi tipe data variabel
    string nama;
    int umur;
    char jenis_kelamin;

    // --- proses input ---
    cout << "Siapakah Namamu?" << endl;
    cout << "Jawab: ";
    //cin >> nama;
    getline(cin,nama);

    cout << "Berapa Umurmu?" << endl;
    cout << "Jawab: ";

    cin >> umur;

    cout << "Jenis Kelamin [L/P] :";
    // menyimpan data ke variabel
    cin >> jenis_kelamin;

    // --- proses output ---
    cout << "Salam Kenal , " << nama << " Anda Berusia ";
    cout << umur << " dan Anda Berjenis Kelamin " << jenis_kelamin;

    return 0;
}
