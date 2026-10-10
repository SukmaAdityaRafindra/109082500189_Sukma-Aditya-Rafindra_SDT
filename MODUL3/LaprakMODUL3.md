# <h1 align="center">Laporan Praktikum Modul 3 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">  Sukma Aditya Rafindra - 109082500189</p>

## Dasar Teori

C++ merupakan bahasa pemrograman yang dikembangkan dari bahasa C dan digunakan untuk membuat berbagai jenis program. Dalam praktikum ini digunakan Code::Blocks sebagai IDE untuk menulis, melakukan compile, dan menjalankan program C++.

### A. Dasar Pemrograman C++

C++ memiliki beberapa komponen dasar seperti tipe data, variabel, konstanta, operator, input-output, dan fungsi.

#### 1. Tipe Data dan Variabel

Tipe data menentukan jenis data yang dapat disimpan, seperti `int` untuk bilangan bulat, `float` dan `double` untuk bilangan pecahan, serta `char` untuk karakter. Variabel digunakan untuk menyimpan nilai yang dapat berubah selama program berjalan.

#### 2. Input dan Output

Input digunakan untuk menerima data dari pengguna menggunakan `cin`, sedangkan output digunakan untuk menampilkan data menggunakan `cout`. Penggunaan input dan output merupakan bagian dasar dalam interaksi antara program dan pengguna.

#### 3. Operator

Operator digunakan untuk melakukan operasi pada data. C++ memiliki operator aritmatika seperti `+`, `-`, `*`, `/`, operator perbandingan seperti `==`, `!=`, `<`, `>`, serta operator logika seperti `&&`, `||`, dan `!`.

### B. Struktur Kendali Program

Struktur kendali digunakan untuk mengatur jalannya program berdasarkan kondisi atau pengulangan.

#### 1. Kondisional

Kondisional digunakan untuk mengambil keputusan berdasarkan suatu kondisi. C++ menyediakan `if`, `if-else`, dan `switch`.

#### 2. Perulangan

Perulangan digunakan untuk menjalankan perintah secara berulang. Jenis perulangan yang digunakan dalam C++ antara lain `for`, `while`, dan `do-while`.

#### 3. Struktur dan Fungsi

`struct` digunakan untuk menggabungkan beberapa data dengan tipe berbeda dalam satu kesatuan. Sementara itu, fungsi digunakan untuk membagi program menjadi bagian-bagian tertentu agar lebih terstruktur dan dapat digunakan kembali [1].

## Guided

### 1. buku.h

```C++
#ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;
struct Buku {
    string judul;
    int halaman;
    string penulis;
};

void editIsi(string &judul, int &halaman, string &penulis, Buku &buku);
void tampilkanIsiBuku(Buku buku);
bool checkPenulis(Buku buku);

#endif

```

penjelasan singkat guided 1
Kode tersebut memiliki tiga fungsi. `editIsi` digunakan untuk mengubah judul, jumlah halaman, dan penulis buku. `tampilkanIsiBuku` digunakan untuk menampilkan informasi buku ke layar. Sementara itu, `checkPenulis` digunakan untuk memeriksa apakah nama penulis masih kosong. Jika kosong, fungsi mengembalikan nilai `true`, jika tidak maka `false`.


### 2. buku.cpp

```C++
#include "buku.h"

void editIsi(string &judul, int &halaman, string &penulis, Buku &buku) {
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilkanIsiBuku(Buku buku) {
    cout << "Judul Buku: " << buku.judul << endl;
    cout << "Halaman : " << buku.halaman << endl;
    cout << "Penulis Buku: " << buku.penulis << endl;
}

bool checkPenulis(Buku buku) {
    return buku.penulis == "";
}
```

penjelasan singkat guided 2
Kode ini memiliki tiga fungsi. `editIsi` untuk mengubah judul, jumlah halaman, dan nama penulis buku. `tampilkanIsiBuku` untuk menampilkan data buku ke layar. `checkPenulis` untuk mengecek apakah nama penulis kosong atau tidak. Jika kosong, hasilnya `true`, sedangkan jika terisi hasilnya `false`.

### 3. main.cpp

```C++
#include <iostream>
#include "buku.h"

using namespace std;

int main() {
    Buku novel;
    string judul, penulis;
    int halaman;

    cout << "Masukkan Judul Buku: ";
    cin >> judul;
    cout << "Masukkan Jumlah Halaman: ";
    cin >> halaman;
    cout << "Masukkan Nama Penulis: ";
    cin >> penulis;

    editIsi(judul, halaman, penulis, novel);
    tampilkanIsiBuku(novel);

    cout << checkPenulis(novel);

return 0;
}
```

penjelasan singkat guided 3
Kode ini digunakan untuk memasukkan data buku berupa judul, jumlah halaman, dan nama penulis. Data tersebut disimpan ke variabel lalu dimasukkan ke objek `novel` melalui fungsi `editIsi`. Setelah itu, `tampilkanIsiBuku` menampilkan data buku, sedangkan `checkPenulis` memeriksa apakah nama penulis kosong atau tidak.



## Unguided

### 1. (isi dengan soal unguided 1)

```C++
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilai_akhir;
};

float hitungNA(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Jumlah mhs (max 10): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData Mhs " << i + 1 << endl;
        cout << "Nama: "; cin >> mhs[i].nama;
        cout << "NIM: "; cin >> mhs[i].nim;
        cout << "UTS: "; cin >> mhs[i].uts;
        cout << "UAS: "; cin >> mhs[i].uas;
        cout << "Tugas: "; cin >> mhs[i].tugas;

        mhs[i].nilai_akhir = hitungNA(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n--- HASIL ---\n";
    for (int i = 0; i < n; i++) {
        cout << mhs[i].nama << " (" << mhs[i].nim << ") - Nilai Akhir: " << mhs[i].nilai_akhir << endl;
    }

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL3/Output/soal1.1MODUL3SDT.png)


##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL3/Output/soal1.2MODUL3SDT.png)

penjelasan unguided 1
Kode ini digunakan untuk memasukkan data mahasiswa, seperti nama, NIM, nilai UTS, UAS, dan tugas. Fungsi `hitungNA` menghitung nilai akhir dengan bobot UTS 30%, UAS 40%, dan tugas 30%. Data disimpan dalam array `mhs` dengan maksimal 10 mahasiswa, lalu program menampilkan nama, NIM, dan nilai akhir setiap mahasiswa.

### 2. (isi dengan soal unguided 2)

```C++
#include <iostream>
#include <string>

using namespace std;
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";
    
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL3/Output/soal2MODUL3SDT.png)

penjelasan unguided 2
Program ini menerapkan tipe data kustom (ADT) untuk menyimpan data mata pelajaran. Pertama, `struct pelajaran` dibuat untuk menampung data nama dan kode mata pelajaran. Fungsi `create_pelajaran` bertugas membuat serta mengisi variabel struct baru, sedangkan prosedur `tampil_pelajaran` dipakai untuk mencetak data tersebut ke layar. Pada fungsi `main`, program menginisialisasi variabel nama dan kode, memanggil fungsi pembuat data, lalu menampilkan hasilnya.

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void tukar(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "--- Awal Array A ---" << endl;
    tampilArray(A);
    cout << "\n--- Awal Array B ---" << endl;
    tampilArray(B);

    int r = 1, c = 1;
    int* ptrA = &A[r][c];
    int* ptrB = &B[r][c];

    tukar(ptrA, ptrB);
    cout << "\n>>> Setelah ditukar elemen pos (" << r << "," << c << ") <<<\n" << endl;
    cout << "--- Array A Baru ---" << endl;
    tampilArray(A);
    cout << "\n--- Array B Baru ---" << endl;
    tampilArray(B);

return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL3/Output/soal3.1MODUL3SDT.png)

##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL3/Output/soal3.2MODUL3SDT.png)

penjelasan unguided 3
Program ini menukarkan elemen tertentu antara dua matriks (array 2D 3x3) menggunakan pointer. Prosedur `tampilArray` dipakai untuk mencetak elemen array 2D ke layar, sedangkan fungsi `tukar` memanfaatkan pointer untuk saling menukar nilai data yang ditunjuk. Pada fungsi `main`, program menginisialisasi matriks `A` dan `B`, lalu pointer `ptrA` dan `ptrB` diarahkan ke posisi baris dan kolom yang sama (indeks `1,1`) untuk ditukarkan nilainya sebelum akhirnya menampilkan matriks terbaru.

## Kesimpulan

Modul 3 ini membahas tentang konsep Abstract Data Type (ADT) dalam C++, yaitu cara membuat tipe data buatan sendiri (menggunakan `struct`) beserta fungsi/prosedur pendukungnya. Penerapan ADT umumnya dibagi menjadi tiga file terpisah agar kodingan lebih terstruktur dan rapi, yaitu file header (`.h`) untuk deklarasi struct dan fungsi, file `.cpp` untuk isi/realisasi kodingan fungsinya, serta file `main.cpp` untuk menjalankan program utamanya.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: Universitas Islam Negeri Sumatera Utara Medan.

<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.

<br>[3] Modul 3. (2024). "CODE BLOCKS IDE & PENGENALAN BAHASA C++". Modul Praktikum.
