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

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
    if (n < 0) {
        return false;
    }
    int a = 0;
    int b = 1;
    
    // Cek dengan menjumlahkan deret hingga mencapai atau melebihi n
    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    // Jika a sama dengan n, maka n adalah bilangan Fibonacci
    return (a == n);
}

int main() {
    pilihan = -1;
    
    while (pilihan != 0) {
        tampilkanMenu();
        cin >> pilihan;
       
        switch (pilihan) {
            case 0:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    return 0;
}