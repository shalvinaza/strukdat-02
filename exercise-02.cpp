/*
Author    : Shalvina Zahwa Aulia
NPM       : 140810180052
Deskripsi : Memasukan dan mengeluarkan data dengan struct theater
Tahun     : 2019
*/

#include <iostream>
using namespace std;

struct Theater {
    int room;
    char seat[3];
    char movieTitle[30];
};

int main() {
   Theater x;
   cout << "\tInput Data\n";
   cout << "Room : "; cin >> x.room;
   cout << "Seat : "; cin >> x.seat;
   cout << "Movie Title : ";
   cin.ignore();
   cin.getline(x.movieTitle,30);

   cout << endl;
   cout << x.room << endl;
   cout << x.seat << endl;
   cout << x.movieTitle << endl;
}
