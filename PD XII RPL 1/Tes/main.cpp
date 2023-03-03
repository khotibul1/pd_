#include <iostream>

using namespace std;

int main()
{

struct booking {
    char nama, tangal;
    int j, jam, th, menu;
} book;

void header(){
    cout << "#===========================#" << endl;
    cout << "#===== Daftar Perental =====#" << endl;
    cout << "#===========================#" << endl;
    }

int main()
{
    cout << "#===========================#" << endl;
    cout << "#======= RENTAL PS 3 =======#" << endl;
    cout << "#===========================#" << endl;
    cout << "" << endl;

    cout << "Masukan Jumlah Perental : " << endl;
    cin >> book.j;

    cout << "" << endl;

    for (int i=0; i book<j; i++) {
    cout << "<===========================>" << endl;
    cout << "Masukan Nama : ";
    cin >> book.nama[i];
    cout << "Lama Rental : ";
    cin >>  book.jam[i];
    cout << "Tanggal Rental (dd/mm/yy): ";
    cin >> book.tanggal[i];
    cout << "<===========================>" << endl;
    cout << "" << endl;
    }
    cout << "" << endl;
    header();
    cout << "# 1 Lihat Daftar Rental " << endl;
    cout << "# 2 Keluar " << endl;
    cout << "Pilih Menu : " << endl;
    cin >> book.menu;

    if (book.menu == 1) {
        for(int j=0; j<book.jh; j++){
            cout << "Nama Perental : "<<book.nama[j] <<endl;
            cout << "Lama Rental : "<<book.jam[j] <<endl;
            cout << "Tanggal Rental : "<<book.tanggal[j] <<endl;
            menu.th.10000*menu.jam[j];
            cout << "Total Bayar : "<< book.th << endl;
            }
    }

    else if (book.menu == 2) {
        exit(0);
    }
    else {
        cout << "Menu Tidak Ada"
    }
    return 0;
}
