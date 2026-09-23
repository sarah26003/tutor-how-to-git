#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void InputAngka(){
    srand(time(0));
    int min = 0;
    int max = 10;
    
    int angka_kunci = min + rand() % (max - min + 1);
    int angka_tebak;
    int nyawa = 5;

    cout << "=================================\n";
    cout << "        Game Tebak Angka        \n";
    cout << "=================================\n";
    cout << "Selamat datang di game tebak angka (0-10)!\n";

    do {
        cout << "Masukkan angka tebakanmu: ";
        cin >> angka_tebak;

        if (cin.fail()){
            cin.clear();
            cin.ignore(1000,'n');
        } 

        if (angka_tebak==angka_kunci) {
            cout << "Selamat! angka tebakanmu benar.";
            break;
        } else {
            nyawa -= 1;
            if (nyawa>0){
                if (angka_tebak < angka_kunci){
                    cout << "Yahh! angka tebakanmu kekecilan\n\n";
                } else {
                    cout << "Yahh! angka tebakanmu kebesaran\n\n";
                }
            } else {
                cout << "Yahh! kesempatanmu udah habis\n";
                cout << "Angka kuncinya: " << angka_kunci << endl;
            }
        } 
    } while (nyawa>0);
}

int main (){
    InputAngka();
    return 0;
}