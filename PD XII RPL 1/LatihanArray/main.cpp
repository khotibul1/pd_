#include <iostream>

using namespace std;

int main()
{
    cout << "##  Data Kelas XII RPL 1  ##" << endl;
    cout << "============================" << endl;
    cout << endl;
    int i;
    string XIIRPL1[5] = {"Rega", "Saiful", "Hendra", "Fajar", "Wahyu"};
    cout << "Yang Paling Cakep di XII RPL 1 Adalah :" <<XIIRPL1[4] << endl;
    cout << "Di Antara : ";
    for(i=0; i<5; i++) {
        cout <<XIIRPL1[i] << endl;
    }
 cout << "" << endl;
    return 0;
}
