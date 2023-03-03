#include <iostream>
#include <time.h>
using namespace std;


   void header(){
    cout << "#===========================#" << endl;
    cout << "#======= RENTAL PS 3 =======#" << endl;
    cout << "#===========================#" << endl;
    cout << "" << endl;
    }

int main()
{
    string nama[10], tanggal[10];
    int jml, jam, th, menu;
    int lama[10], i, j;

    header ();
    cout << "Masukan Jumlah Perental : " << endl;
    cin >> jml;

    cout << "" << endl;

    for (i=0; i<jml; i++) {
    cout << "<===========================>" << endl;
    cout << "Masukan Nama : ";
    cin >> nama[i];
    cout << "Masukan Lama Rental : ";
    cin >> lama[i];
    cout << "Masukan Tanggal Rental (dd/mm/yy): ";
    cin >> tanggal[i];
    cout << "<===========================>" << endl;
    cout << "" << endl;

    }

    header();
    cout << "# 1 Lihat Daftar Rental " << endl;
    cout << "# 2 Keluar " << endl;
    cout << "Pilih Menu : " << endl;
    cin >> menu;

    if (menu == 1) {
            cout << "<===========================>" << endl;
        for ( j=0; j<jml; j++) {
            cout << "Nama Perental : "<<nama[j] <<endl;
            cout << "Lama Rental : "<<lama[j]<<" jam"<<endl;
            cout << "Tanggal Rental : "<<tanggal[j] <<endl;
            th= 10000*lama[j];
            cout << "Total Bayar : "<<th<<endl;
            cout << "<===========================>" << endl;
            }
    }

    else if (menu == 2) {
        exit(0);
    }
    else {
        cout << "Menu Tidak Ada" << endl;
    }

    return 0;
}
