#include <iostream>
using namespace std;

int main() {
    int angka;
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout<< "Masukkan angka: ";
    cin >> angka;

    if (angka < 0 || angka > 100)
        cout << "Angka tidak valid";
    else if (angka < 10)
        cout << satuan[angka];
     else if (angka == 10)
        cout << "sepuluh";
    else if (angka < 20)
        cout << satuan[angka - 10] << " belas";
    else if (angka == 100)
        cout << "seratus";
    else {
        int puluhan = angka / 10;
        int angkaSatuan = angka % 10;

        if (puluhan == 2) cout << "dua puluh";
        else if (puluhan == 3) cout << "tiga puluh";
        else if (puluhan == 4) cout << "empat puluh";
        else if (puluhan == 5) cout << "lima puluh";
        else if (puluhan == 6) cout << "enam puluh";
        else if (puluhan == 7) cout << "tujuh puluh";
        else if (puluhan == 8) cout << "delapan puluh";
        else if (puluhan == 9) cout << "sembilan puluh";

        if (angkaSatuan != 0) 
            cout << " " << satuan[angkaSatuan];
    }

    return 0; 
}