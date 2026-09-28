# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

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

### 1. ...

```C++
#include <iostream>
using namespace std;
int main(){
int W, X, Y; float Z;
X = 7; Y = 3; W = 1;
Z = (X + Y)/(Y + W);
cout<< "Nilai z = " << Z << endl;
return 0;
}
```

penjelasan singkat guided 1
Program tersebut menggunakan `iostream` untuk menampilkan hasil ke layar. Variabel `W`, `X`, dan `Y` bertipe integer, sedangkan `Z` bertipe float. Nilai `X = 7`, `Y = 3`, dan `W = 1`, kemudian program menghitung `(X + Y) / (Y + W)` sehingga diperoleh nilai `Z = 2.5`. Hasil tersebut kemudian ditampilkan dengan `cout`.

### 2. ...

```C++
#include <iostream>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + ++r;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

penjelasan singkat guided 2
Program tersebut menggunakan variabel `r` dengan nilai awal 10. Pada `s = 10 + ++r`, operator `++r` akan menaikkan nilai `r` terlebih dahulu menjadi 11, kemudian ditambahkan dengan 10 sehingga nilai `s` menjadi 21. Jadi, output akhirnya adalah `r = 11` dan `s = 21`.

### 3. ...

```C++
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + r++;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

penjelasan singkat guided 3
Program tersebut menggunakan `r` dengan nilai awal 10. Pada `s = 10 + r++`, nilai `r` yang digunakan dalam perhitungan masih 10, kemudian `r` baru dinaikkan menjadi 11. Jadi, nilai `s` adalah 20 dan nilai akhir `r` adalah 11.

### 4. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
cout<<"besar diskon = Rp" <<diskon;
}
```

penjelasan singkat guided 3
Program tersebut digunakan untuk menghitung diskon berdasarkan total pembelian. Jika total pembelian mencapai Rp100.000 atau lebih, pelanggan mendapatkan diskon sebesar 5% dari total pembelian. Jika kurang dari Rp100.000, diskonnya tetap 0. Hasil besar diskon kemudian ditampilkan menggunakan `cout`.

### 5. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
else
diskon = 0;
cout<<"besar diskon = Rp" <<diskon;
}
```

penjelasan singkat guided 3
Program tersebut digunakan untuk menghitung besar diskon dari total pembelian. Jika total pembelian Rp100.000 atau lebih, maka mendapat diskon 5%, sedangkan jika kurang dari Rp100.000 maka diskonnya 0. Nilai diskon kemudian ditampilkan menggunakan `cout`.

### 6. ...

```C++
#include <iostream>
using namespace std;
int main(){
int kode_hari;
puts("Menentukan hari kerja/libur\n");
puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
puts("2=Selasa 4=Kamis 6=Sabtu ");
cin>>kode_hari;
switch(kode_hari){
case 1:
case 2:
case 3:
case 4:
case 5:
cout<<"Hari Kerja"<<endl;
break;
case 6:
case 7:
cout<<"Hari Libur"<<endl;
break;
default:
cout<<"Kode masukan salah!!!"<<endl;
}
return 0;
}
```

penjelasan singkat guided 3
Program tersebut digunakan untuk menentukan apakah suatu hari termasuk hari kerja atau hari libur berdasarkan kode hari yang dimasukkan. `switch` digunakan untuk memeriksa kode 1–7, dengan kode 1–5 sebagai hari kerja dan kode 6–7 sebagai hari libur. Jika kode yang dimasukkan tidak sesuai, program akan menampilkan pesan bahwa kode masukan salah.

### 7. ...

```C++
#include <iostream>
using namespace std;
int main(){
int jum;
cout<<"jumlah perulangan: ";
cin>>jum;
for(int i=0; i<jum; i++){
cout<<"saya pintar\n";
}
return 0;
}
```

penjelasan singkat guided 3
Program tersebut digunakan untuk melakukan perulangan menggunakan `for`. Pengguna memasukkan jumlah perulangan melalui variabel `jum`, kemudian program menampilkan tulisan **"saya pintar"** sebanyak jumlah yang dimasukkan. Variabel `i` digunakan sebagai penghitung perulangan dari 0 sampai kurang dari nilai `jum`.

### 8. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i=1;
int jum;
cout<<"masukan banyak baris: ";
cin>>jum;
while(i<=jum){
cout<<"baris ke-"<<i<<endl;
i++; 
}
return 0;
}
```

penjelasan singkat guided 3
Program tersebut menggunakan perulangan `while` untuk menampilkan nomor baris sesuai jumlah yang dimasukkan pengguna. Variabel `i` dimulai dari 1 dan akan terus bertambah satu melalui `i++` selama nilainya masih kurang atau sama dengan `jum`.

### 9. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i = 1;
int jum;
cin >> jum;
do{
cout << "baris ke-" <<(i+1)<<endl;
i++;
} while(i<jum);
return 0;
}
```

penjelasan singkat guided 3
Program tersebut menggunakan perulangan `do-while` untuk menampilkan nomor baris. Perulangan dijalankan terlebih dahulu, kemudian kondisi `i < jum` diperiksa. Nilai `i` bertambah satu setiap perulangan menggunakan `i++`, sedangkan `(i+1)` digunakan untuk menampilkan nomor baris.

### 10. ...

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
int i;
struct data{
char nama[40];
int nilai;
};
data siswa[MAX];
for(i=0; i<MAX; i++){
cout<<"masukkan data ke-"<<i+1<<endl;
cout<<"nama = ";
cin>>siswa[i].nama;
cout<<"nilai = ";
cin>>siswa[i].nilai;
}
cout<<"\ndata siswa\n";
cout<<"=======";
for(i=0; i<MAX; i++){
cout<<"\n\ndata ke-"<<i+1;
cout<<"\n\nnama="<<siswa[i].nama;
cout<<"\n\nnilai="<<siswa[i].nilai;
}
return 0;
}
```

penjelasan singkat guided 3
Program tersebut menggunakan `struct` untuk menyimpan data siswa berupa nama dan nilai. Array `siswa[MAX]` digunakan untuk menyimpan data sebanyak 5 siswa. Program meminta pengguna memasukkan nama dan nilai setiap siswa, kemudian menampilkan kembali seluruh data siswa yang sudah dimasukkan.

### 11. ...

```C++
#include <iostream>
using namespace std;

float ctof(float celcius);
int main() {
float celcius, fahrenheit;
cout <<"nilai Celcius? ";
cin >> celcius;
fahrenheit = ctof(celcius);
cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
return 0;
}

float ctof(float celcius){
return (celcius * 1.8) + 32;
}
```

penjelasan singkat guided 3
Program tersebut digunakan untuk mengubah suhu dari Celcius ke Fahrenheit menggunakan sebuah fungsi `ctof()`. Nilai Celcius dimasukkan oleh pengguna, kemudian dikirim ke fungsi untuk dihitung dengan rumus `(Celcius × 1.8) + 32`. Hasil konversi tersebut kemudian ditampilkan sebagai nilai Fahrenheit.

## Unguided

### 1. (isi dengan soal unguided 1)

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Penjumlahan = " << a + b << endl;
    cout << "Pengurangan = " << a - b << endl;
    cout << "Perkalian = " << a * b << endl;
    cout << "Pembagian = " << a / b << endl;

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL1.1.png)


##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL1.2.png)

penjelasan unguided 1
Program tersebut digunakan untuk melakukan operasi aritmatika pada dua angka yang dimasukkan oleh pengguna. Variabel `a` dan `b` menyimpan kedua angka tersebut, kemudian program menghitung penjumlahan, pengurangan, perkalian, dan pembagian menggunakan operator aritmatika. Hasil dari setiap operasi kemudian ditampilkan menggunakan `cout`.

### 2. (isi dengan soal unguided 2)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    string angka[] = {"nol", "satu", "dua", "tiga", "empat",
                      "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout << "Masukkan angka: ";
    cin >> n;

    if (n < 10)
        cout << angka[n];
    else if (n == 10)
        cout << "sepuluh";
    else if (n == 11)
        cout << "sebelas";
    else if (n < 20)
        cout << angka[n - 10] << " belas";
    else if (n < 100)
        cout << angka[n / 10] << " puluh " << angka[n % 10];
    else
        cout << "seratus";

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL2.1.png)


##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL2.2.png)

penjelasan unguided 2
Program tersebut digunakan untuk mengubah angka menjadi bentuk tulisan dari 0 sampai 100. Pengguna memasukkan sebuah angka, kemudian `if-else` menentukan bentuk tulisan sesuai nilai angka tersebut. Array `angka` digunakan untuk menyimpan nama angka 0 sampai 9, sedangkan angka puluhan dibentuk menggunakan kata “puluh” dan angka satuannya.

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {

        for (int s = n; s > i; s--)
            cout << " ";

        for (int j = i; j >= 1; j--)
            cout << j;

        cout << "*";

        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }

    for (int s = 0; s < n; s++)
        cout << " ";
    cout << "*";

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL3.1.png)

##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL3.2.png)

penjelasan unguided 3
Program tersebut digunakan untuk membuat pola angka berbentuk segitiga terbalik dengan tanda `*` di tengah. Perulangan pertama mengatur jumlah baris, sedangkan perulangan berikutnya digunakan untuk membuat spasi, angka dari besar ke kecil, tanda `*`, lalu angka dari kecil ke besar. Setelah semua baris selesai, program menampilkan satu tanda `*` di bagian paling bawah.

## Kesimpulan

Dari praktikum Modul 1, saya jadi lebih memahami dasar-dasar pemrograman C++ mulai dari penggunaan Code::Blocks, tipe data, variabel, operator, input dan output, sampai struktur kendali seperti `if`, `switch`, `for`, `while`, dan `do-while`. Saya juga belajar menggunakan `struct` untuk menyimpan beberapa data dan fungsi untuk membuat program lebih terstruktur. Dari latihan yang dikerjakan, saya jadi lebih paham bagaimana membuat program sederhana, melakukan perhitungan, percabangan, perulangan, serta membuat pola menggunakan C++.   



## Referensi

[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: Universitas Islam Negeri Sumatera Utara Medan.

<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.

<br>[3] Modul 1. (2024). "CODE BLOCKS IDE & PENGENALAN BAHASA C++ (BAGIAN PERTAMA)". Modul Praktikum.
