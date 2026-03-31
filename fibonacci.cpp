#include <iostream>
using namespace std;

int angka;
int pilihan;

void tampilkanMenu() {
    cout << "\n=== PROGRAM PENGECEKAN BILANGAN ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
}


int main() {
    pilihan = -1;
    
    while (pilihan != 0) {
        tampilkanMenu();
        cin >> pilihan;
       
        switch (pilihan) {
        }
    return 0;
}