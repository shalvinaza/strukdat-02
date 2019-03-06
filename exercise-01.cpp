/*
Author    : Shalvina Zahwa Aulia
NPM       : 140810180052
Deskripsi : Memasukan dan mengeluarkan data dengan struct
Tahun     : 2019
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Orang {
    int umur;
    char nama[30];
    char jk;
    char goldar[2];
};

int main()
{
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama, "fahmi"); // untuk meng copy 2 b uah string
    cout << "Goldar : "; cin >> orang.goldar;
    cout << "Jenis Kelamin : "; cin >> orang.jk;

    cout << orang.umur<<endl;
    cout << orang.nama<<endl;
    cout << orang.goldar<<endl;
    cout << orang.jk<<endl;

}
