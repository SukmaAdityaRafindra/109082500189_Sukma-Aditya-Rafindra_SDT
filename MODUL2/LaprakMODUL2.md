# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

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

### 1. ...

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
   int i,j;
   float nilai_total, rata_rata;
   float nilai[MAX];
   static int nilai_tahun[MAX][MAX]=
{  {0,2,2,0,0},
   {0,1,1,1,0},
   {0,3,3,3,0},
   {4,4,0,0,4},
   {5,0,0,0,5}
};

for (i=0; i<MAX; i++){
  cout<<"masukkan nilai ke-"<<i+1<<endl;
  cin>>nilai[i];
}
  cout<<"\ndata nilai siswa :\n";

for (i=0; i<MAX; i++)
  cout<<"nilai k-"<<i+1<<"=" <<nilai[i]<<endl;
  cout<<"\n nilai tahunan : \n";

for(i=0; i<MAX; i++){
  for(j=0; j<MAX; j++)
  cout<<nilai_tahun[i][j];
  cout<<"\n";
}
return 0;
}

```

penjelasan singkat guided 1
Program ini digunakan untuk memasukkan 5 nilai siswa, kemudian menampilkan kembali nilai tersebut. `MAX` digunakan untuk menentukan ukuran array sebanyak 5. Array `nilai` menyimpan nilai yang dimasukkan oleh pengguna, sedangkan `nilai_tahun` merupakan array 2 dimensi berukuran 5×5 yang sudah memiliki data. Perulangan `for` digunakan untuk proses input, menampilkan nilai, dan menampilkan isi array `nilai_tahun`. Program diakhiri dengan `return 0` yang menandakan program selesai dijalankan.


### 2. ...

```C++
#include <iostream>
using namespace std;
int main(){
    int x, y; 
    int *px; 
    
    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
return 0;
}
```

penjelasan singkat guided 2
Program ini menunjukkan penggunaan pointer dalam C++. Variabel `x` diberi nilai 87, kemudian `px` digunakan untuk menyimpan alamat dari `x` dengan `px = &x`. Setelah itu, `y = *px` mengambil nilai yang ditunjuk oleh `px`, yaitu 87. Program kemudian menampilkan alamat `x`, isi pointer `px`, nilai `x`, nilai yang ditunjuk `px`, dan nilai `y`.


### 3. ...

```C++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"masukkan nilai bilangan ke-1 =";
    cin>>x;
    cout<<"masukkan nilai bilangan ke-2 =";
    cin>>y;
    cout<<"masukkan nilai bilangan ke-3 =";
    cin>>z;
    cout<<"nilai maksimumnya adalah ="
    <<maks3(x,y,z);
 return 0;
}

int maks3(int a, int b, int c){
    int temp_max =a;
    if(b>temp_max)
    temp_max=b;
    if(c>temp_max)
    temp_max=c;
    return (temp_max);
}
```

penjelasan singkat guided 3
Program ini digunakan untuk mencari nilai terbesar dari 3 bilangan yang dimasukkan oleh pengguna. Fungsi `maks3()` membandingkan ketiga nilai menggunakan `if`, lalu menyimpan nilai terbesar di `temp_max` dan mengembalikannya. Hasil nilai terbesar kemudian ditampilkan pada `main()`.


### 4. ...

```C++
#include <iostream>
using namespace std;

void tulis(int x);
int main(){
    int jum;
    cout << "jumlah baris kata= ";
    cin >> jum;
    tulis(jum);
  return 0;
}

void tulis(int x){
    for (int i=0;i<x;i++)
       cout<< "baris ke- " << i+1 << endl;
}
```

penjelasan singkat guided 3
Program ini digunakan untuk menampilkan beberapa baris tulisan sesuai jumlah yang dimasukkan pengguna. Fungsi `tulis()` menggunakan perulangan `for` untuk mencetak tulisan “baris ke-” mulai dari 1 sampai jumlah yang dimasukkan. Fungsi tersebut dipanggil dari `main()` setelah pengguna memasukkan jumlah baris.


### 5. ...

```C++
#include <iostream>
using namespace std;

void tukarValue(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}   

int main() {
    int a = 5, b = 10;

    cout << "Sebelum tukarValue: a = " << a << ", b = " << b << endl;
    tukarValue(a, b);
    cout << "Setelah tukarValue: a = " << a << ", b = " << b << endl;

    cout << "Sebelum tukarPointer: a = " << a << ", b = " << b << endl;
    tukarPointer(&a, &b);
    cout << "Setelah tukarPointer: a = " << a << ", b = " << b << endl;

    cout << "Sebelum tukarReference: a = " << a << ", b = " << b << endl;
    tukarReference(a, b);
    cout << "Setelah tukarReference: a = " << a << ", b = " << b << endl;

    return 0;
}
```

penjelasan singkat guided 3
Program ini digunakan untuk menukar nilai antara variabel `a` dan `b` dengan tiga cara, yaitu menggunakan reference, pointer, dan reference kembali. Fungsi `tukarValue()` menukar nilai menggunakan reference, `tukarPointer()` menggunakan alamat memori melalui pointer, sedangkan `tukarReference()` juga menggunakan reference. Setiap fungsi dipanggil secara bergantian dan hasil nilai `a` serta `b` ditampilkan sebelum dan sesudah ditukar.


## Unguided

### 1. (isi dengan soal unguided 1)

```C++
#include <iostream>
using namespace std;

const int N = 3;

void inputMatriks(int M[N][N], char nama) {
    cout << "Masukkan elemen matriks " << nama << " (3x3):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << nama << "[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
}

void cetakMatriks(const int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

void tambahMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void kurangMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void kaliMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[N][N], B[N][N], Hasil[N][N];

    inputMatriks(A, 'A');
    cout << endl;
    inputMatriks(B, 'B');

    cout << "\n--- Hasil Penjumlahan (A + B) ---\n";
    tambahMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    cout << "\n--- Hasil Pengurangan (A - B) ---\n";
    kurangMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    cout << "\n--- Hasil Perkalian (A * B) ---\n";
    kaliMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL1.1.png)


##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL1.2.png)

penjelasan unguided 1


### 2. (isi dengan soal unguided 2)

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Awal: " << a << " " << b << " " << c << endl;

    tukarPointer(&a, &b, &c);
    cout << "Pointer: " << a << " " << b << " " << c << endl;

    tukarReference(a, b, c);
    cout << "Reference: " << a << " " << b << " " << c << endl;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL2.1.png)


##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL2.2.png)

penjelasan unguided 2


### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int cariMaksimum(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int cariMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int n, float &rata) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    rata = total / n;
}

void tampilkanArray(int arr[], int n) {
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL3.1.png)

##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/Output/outputSOAL3.2.png)

penjelasan unguided 3


## Kesimpulan
  



## Referensi
[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: Universitas Islam Negeri Sumatera Utara Medan.

<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.

<br>[3] Modul 2. (2024). "CODE BLOCKS IDE & PENGENALAN BAHASA C++ (BAGIAN PERTAMA)". Modul Praktikum.
