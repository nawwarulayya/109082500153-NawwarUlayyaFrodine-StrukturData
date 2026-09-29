# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Nawwar Ulayya Frodine - 109082500153</p>

## Dasar Teori
Code Blocks adalah IDE free, open-source, dan cross-platform untuk bahasa C/C++. Program dibuat melalui project jenis Console application, lalu dijalankan dengan build (Ctrl+F9), run (Ctrl+F10), atau build and run (F9).

C++ diciptakan oleh Bjarne Stroustrup pada awal 1980-an berdasarkan bahasa C. Program C++ berisi library, konstanta, variabel, fungsi, dan fungsi utama main(), dengan tipe data dasar char, int, long, float, dan double. Masukan dan keluaran menggunakan cin >> dan cout <<.

Operator dalam C++ meliputi aritmatika, penugasan, hubungan, logika, dan unary (pre-increment ++r dan post-increment r++). Pengambilan keputusan memakai if, if-else, dan switch, sedangkan perulangan memakai for, while, dan do...while. Struct mengelompokkan data berbeda tipe dalam satu nama, dan fungsi membuat program lebih modular.


## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b; ";
    cin >> b;

    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;
    cout << "Hasil pembagian: " << a / b << endl;

    return 0;
}
```
### Output Unguided 1 :

##### Output
![Screenshot Output Unguided 1_1](https://github.com/nawwarulayya/109082500153_NawwarUlayyaFrodine_StrukturData/blob/main/Modul1/Screenshot%202026-09-29%20164933.png)/((Output 1).png)

Penjelasan unguided 1:
Program menerima dua bilangan bertipe float, yaitu a dan b, melalui cin. Keduanya kemudian dioperasikan dengan operator aritmatika +, -, *, dan /, dan hasilnya ditampilkan dengan cout. Karena bertipe float, hasil pembagian tetap memiliki bagian desimal, misalnya 7 / 2 menghasilkan 3.5.


### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

```C++
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
```
### Output Unguided 2:

##### Output
![Screenshot Output Unguided 2_1](https://github.com/nawwarulayya/109082500153_NawwarUlayyaFrodine_StrukturData/blob/main/Modul1/Screenshot%202026-09-29%20165010.png)/((Output 2).png)

Penjelasan unguided 2:
Program menerima satu bilangan bulat angka lalu mengubahnya menjadi tulisan. Array satuan digunakan untuk menyimpan kata "nol" sampai "sembilan", sedangkan struktur if-else memisahkan kasus berdasarkan rentang angka. Angka di luar 0 sampai 100 menampilkan pesan "Angka tidak valid", angka 0 sampai 9 diambil langsung dari array, angka 10 menjadi "sepuluh", angka 11 sampai 19 diberi akhiran "belas", dan angka 100 menjadi "seratus". Untuk angka 20 sampai 99, program memecahnya menjadi puluhan dengan angka / 10 dan satuan dengan angka % 10, lalu mencetak kata puluhan diikuti kata satuan apabila satuannya tidak nol.


### 3. Buatlah program yang dapat memberikan input dan output sbb.

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--) {

        for (int k = n; k > i; k--) {
            cout << "  ";
        }

        if (i == 1) {
            cout << "  *";
        } else {
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }

            cout << "* ";

            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
```
### Output Unguided 3 :

##### Output 
![Screenshot Output Unguided 3_1](https://github.com/nawwarulayya/109082500153_NawwarUlayyaFrodine_StrukturData/blob/main/Modul1/Screenshot%202026-09-29%20165027.png)/((Output 3).png)

Penjelasan unguided 3:
Program menerima bilangan n dan mencetak pola mirror menggunakan perulangan bersarang. Perulangan luar dengan variabel i mengatur jumlah baris dan berjalan turun dari n sampai 1. Di dalamnya, perulangan pertama mencetak spasi agar setiap baris bergeser ke kanan, lalu perulangan berikutnya mencetak angka menurun dari i sampai 1, tanda *, dan angka naik dari 1 sampai i. Pada baris terakhir (i == 1), program hanya mencetak tanda *.


## Kesimpulan
Code Blocks memudahkan pembuatan, penjalanan, dan perbaikan program C++. Penulisan program harus mengikuti aturan sintaks yang tepat, dengan pemilihan tipe data dan operator yang sesuai agar hasil akurat. Struktur kondisional, perulangan, struct, dan fungsi menjadi dasar dalam menyusun program yang efisien dan terstruktur, serta fondasi untuk mempelajari materi struktur data selanjutnya.


## Referensi
[1] Laboratorium Informatika. (2024). Modul 1: Code Blocks IDE dan Pengenalan Bahasa C++ (Bagian Pertama), Praktikum Struktur Data. Bandung: Fakultas Informatika, Telkom University.
<br>[2] Gaddis, T. (2018). Starting Out with C++: From Control Structures through Objects (9th ed.). New York: Pearson.