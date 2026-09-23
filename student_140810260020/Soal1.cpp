/*
Nama Program : Tugas Tambahan (1)
Nama         : Sarah Edis Celia
NPM          : 140810260020
Tanggal Buat : 9 September 2026
Deskripsi    : Program kasir untuk menghitung diskon dan total bayar
               berdasarkan jumlah belanjaan pembeli.
*/
#include <iostream>
#include <string>

using namespace std;
int main(){
    float belanja, diskon;
    string diskon_k;
    cout << endl;
    cout << "=====Kalkulator Kasir Toko Buku=====\n";
    cout << "Masukkan total belanja (Rp): ";
    cin >> belanja;
    cout << endl;
    if (belanja>=300000){
        diskon_k = "20%";
        diskon = belanja*0.2;
    } else if (belanja>=100000){
        diskon_k = "10%";
        diskon = belanja*0.1;
    } else {
        diskon_k = "0%";
        diskon = belanja*0;
    }
    cout << "=====Ringkasan Pembayaran=====\n";
    cout << "Diskon " << "(" << diskon_k << "): Rp" << diskon << endl;
    cout << "Total Bayar: Rp" << belanja-diskon; 
    return 0;
}