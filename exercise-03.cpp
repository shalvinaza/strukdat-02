/*
Author    : Shalvina Zahwa Aulia
NPM       : 140810180052
Deskripsi : Memasukan dan mengeluarkan data dengan struct
Tahun     : 2019
*/

#include <iostream>
using namespace std;

struct Pegawai {
    char nip [15];
    char nama [30];
    int gol;
};

typedef Pegawai pegawai[10];
int gaji [100];
void inputPegawai (int& n, pegawai& x){
    cout << "Masukan jumlah pegawai : "; cin >> n;
    for (int i=1; i<=n; i++){
            cout << "Data ke-"<<i<< " : \n";
            cout << "NIP    : "; cin >> x[i].nip;
            cout << "Nama   : "; cin >> x[i].nama;
            cout << "Gol    : "; cin >> x[i].gol;
    }
}
void cariGaji (pegawai x,int n, int gaji[]){
    for  (int i=1; i<=n; i++){
        if (x[i].gol==1){
            gaji[i]=2000000;
        }
        else if (x[i].gol==2){
            gaji[i]=3000000;
        }
        else if (x[i.gol==3]){
            gaji[i]=5000000;
        }
        else if (x.gol==4){
            gaji[i]=8000000;
        }
    }
}
void daftarGaji (int n, pegawai x){
    for (int i=1; i<=n; i++){}
    if (x[i].gol==1){
        cout << "Daftar Pegawai Dengan Gaji Rp 2.000.000\n";
        cout << x[i].nama << endl;
    }
    if (x[i].gol==2){
        cout << "Daftar Pegawai Dengan Gaji Rp 3.000.000\n;
        cout << x[i].nama << endl;
    }

}
void cetakDaftar (int n, pegawai  x, int gaji []){
    cout << "Daftar Pegawai\n";
    for (int i=1;i<=n;i++){
        cout << "NIP    : " << x[i].nip;
        cout << "Nama   : " << x[i].nama;
        cout << "Gol    : " << x[i].gol;
        cout << "Gaji   : " << gaji[i];
    }
    cout << endl;
}

void rataGaji (int gaji[]){
    int rata=0;
    for (int i=i; i<=n;i++){
        rata+=gaji[i]
    }
    int rataRata= rata/n;
    cout << "Rata-rata gaji : "<< rataRata;
}


int main (){
    int n, gaji[100];
    pegawai x;

    inputPegawai()
}




















