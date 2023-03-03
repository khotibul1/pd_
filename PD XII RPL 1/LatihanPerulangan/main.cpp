#include <iostream>

using namespace std;

int main()
{
    string nama,kelas,umur,alamat;
    int umur;
    cout << "====================" << endl;
    cout << "APLIKASI INPUT BIODATA" << endl;
    cout << "====================" << endl;
    cout << " Nama:";
   getline  (cin,nama );
    cout << "kelas:";
   getline (cin,kelas);
    cout << "umur:";
    getline (cin,umur);
    cout << "alamat:";
    getline(cin,alamat);
    cout <<"Nama:"<< nama <<endl;
    cout <<"kelas:"<<kelas<<endl;
    cout <<"umur:"<<umur;<<"tahun"<<endl;
    cout <<"alamat:"<<alamat<<endl;


   }
    return 0;
}
