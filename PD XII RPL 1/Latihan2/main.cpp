#include <iostream>

using namespace std;

int main(){
    int km;
    int nilai;
     cout << "##  Aplikasi Menghitung Nilai  ##" << endl;
     cout << "=================================" << endl;
     cout << endl;

    cout<<"Masukan Nilai Anda: ";
    cin>>nilai;
    if ((nilai >=0)&&(nilai <=60)){
        cout<<"Nilai Anda E";
    }
     else if ((nilai >=61)&&(nilai <=70)){
        cout<<"Nilai Anda D";
    }
     else if ((nilai >=71)&&(nilai <=80)){
        cout<<"Nilai Anda C";
    }
     else if ((nilai >=81)&&(nilai <=90)){
        cout<<"Nilai Anda B";
    }
     else if ((nilai >=91)&&(nilai <=100)){
        cout<<"Nilai Anda A";
    }
    else {
        cout<<"Nilai Tidak Valid";
        cin >> km;
    }

    return 0;
}
