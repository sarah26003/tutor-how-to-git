/*
Nama Program : Tugas Tambahan (2)
Nama         : Sarah Edis Celia
NPM          : 140810260020
Tanggal Buat : 9 September 2026
Deskripsi    : Simulasi mesin minuman (memproses pembelian,
               mengechek kecukupan uang, menghitung pecahan kembalian)
*/
#include <iostream>

using namespace std;
int main(){
    int kode;
    int uang, harga = 0;

    cout << "=====Vending Machine Automat=====";
    cout << "Daftar Minuman: \n";
    cout << "1. Air Mineral = Rp 4000\n";
    cout << "2. Teh Botol   = Rp 6000\n";
    cout << "3. Kopi Susu   = Rp 10000\n";
    cout << "Pilih kode minuman (1-3): "; cin >> kode;

    switch (kode){
        case 1: harga = 4000; break;
        case 2: harga = 6000; break;
        case 3: harga = 10000; break;
        default:
            cout << "ERROR! Masukkan Kode yang Tertera!";
            return 0;
    }

    cout << "Masukkan uang Anda (Rp): "; cin >> uang;
    cout << endl;

    cout << "=====Detail Transaksi=====\n";

    if (uang<harga){
        int kurang_uang = harga-uang;
            cout << "Transaksi gagal! Uang Anda kurang Rp. " << kurang_uang << endl;
        } else {
            int sisa_uang = uang-harga;
            cout << "Transaksi berhasil!\n";
            cout << "Sisa kembalian Rp. " << sisa_uang << endl;

            int lembar_5rb = sisa_uang / 5000;
            int sisa_pecahan = sisa_uang % 5000;
            int lembar_1rb = sisa_pecahan / 1000;

            cout << "Pecahan kembalian\n";
            cout << lembar_5rb << " lembar uang Rp5.000\n";
            cout << lembar_1rb << " lembar uang Rp1.000\n";
        }
    
    
    return 0;
}