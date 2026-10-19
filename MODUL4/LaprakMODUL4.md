# <h1 align="center">Laporan Praktikum Modul 4 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

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

### 1. List.h

```C++
#ifndef List_h
#define List_h 
#define Nil NULL

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
typedef struct node *address;

struct node
{
    dataMahasiswa isidata;
    address next;
};

struct linkedList
{
    address first;
};

bool isEmpty(linkedList List);
void createList(linkedList &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(linkedList List);
void insertFirst(linkedList &List, address nodeBaru);
void insertLast(linkedList &List, address nodeBaru, address prev);
void insertAfter(linkedList &List, address nodeBaru);
void delFirst(linkedList &List);
void delLast(linkedList &List);
void delAfter(linkedList &List, address nodeHapus, address nodePrev);
int nbList(linkedList List);
void deleteList(linkedList &List);
#endif
```

penjelasan singkat guided 1
kode di atas merupakan header file C++ berbasis Linked List yang dirancang untuk mengorganisasi data mahasiswa secara dinamis menggunakan pointer. Kode ini menyiapkan komponen dasar berupa struct data dan node, sekaligus mendeklarasikan berbagai fungsi standar—seperti pembuatan list baru, cek status kosong (isEmpty), alokasi-dealokasi memori, penambahan dan penghapusan node di berbagai posisi (insert & delete), hingga pencetakan (printList) dan penghitungan jumlah data mahasiswa.


### 2. List.cpp

```C++
#include "List.h"
#include <iostream>
using namespace std;

bool isEmpty(linkedList List)
{
    if (List.first == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void createList(linkedList &List)
{
    List.first = Nil;
}

address alokasi(string nama, string nim, int umur)
{
    address nodeBaru = new node;
        nodeBaru->isidata.nama = nama;
        nodeBaru->isidata.nim = nim;
        nodeBaru->isidata.umur = umur;
        nodeBaru->next = Nil;
        return nodeBaru;
}
void dealokasi(address &node)
{
    delete node;
    node = Nil;
}

void dealokasi(address &node)
{
    node ->next = Nil;
delete node;
}

void insertFirst(linkedList &List, address nodeBaru)
{
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(linkedlist &List, address nodeBaru, address prev)
{
    if (prev != Nil)
    {
        nodeBaru->next = prev->next;
        prev->next = nodeBaru;
    }
    else
    {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(linkedList &List, address nodeBaru)
{
    if (isEmpty(List))
    {
        List.first = nodeBaru;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil)
        {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
} 

void delFirst(linkedlist &list)
{
        address nodeHapus;
        if (!isEmpty(list)==false)
        {
            nodeHapus = list.first;
            list.first = list.first->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            cout << "List kosong" << endl;
        }
}

void delLast(linkedlist &list)
{
    address nodeHapus, nodePrev;
    if (!isEmpty(list)==false)
    {
        nodeHapus = list.first;
        if (nodeHapus->next == Nil)
        {
            list.first->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            while (nodeHapus->next != Nil)
            {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    }
    else
    {
        cout << "List kosong" << endl;
    }
}

void deleteAfter(linkedlist &list, address nodeHapus, address nodePrev)
{
   if (isEmpty(list) == true)
   {
    cout << "List kosong" << endl;
   }
   else
   {
    if (nodePrev != Nil && nodePrev->next != Nil)
    {
        nodeHapus = nodePrev->next;
        nodePrev->next = nodeHapus->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    }
    else
    {
        cout << "Node sebelumnya (prev ) tidak valid!" << endl;
    }
   }
}

void printList(linkedList List)
{
    if (isEmpty(List))
    {
        cout << "List kosong" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama: " << nodeBantu->isidata.nama << ", NIM: " << nodeBantu->isidata.nim << ", Usia: " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

int nbList(linkedList List)
{
    int count = 0;
    address nodeBantu = List.first;
    while (nodeBantu != Nil)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

```

penjelasan singkat guided 2
File implementasi .cpp ini berisi penjabaran lengkap dari header Linked List sebelumnya untuk mengelola data mahasiswa secara dinamis, yang mencakup fungsi dasar seperti pengecekan status list (isEmpty) dan pembuatan list (createList), manajemen memori (alokasi dan dealokasi), berbagai operasi penambahan data (insertFirst, insertLast, insertAfter), penghapusan elemen (delFirst, delLast, deleteAfter), hingga fitur untuk menampilkan data (printList) dan menghitung jumlah total mahasiswa di dalam list (nbList).

### 3. main.cpp

```C++
#include <iostream>
#include "List.h"
using namespace std;

int main(){
    linkedlist List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);
    
}
```

penjelasan singkat guided 3
kode fungsi main() ini adalah titik awal eksekusi program untuk menguji Linked List yang sudah dibuat, di mana program baru sebatas menyiapkan wadah utama (List), mendeklarasikan lima variabel pointer (nodeA sampai nodeE) dengan nilai awal kosong (Nil), serta memanggil fungsi createList(List) untuk menginisialisasi list tersebut agar siap digunakan.


## Unguided

### 1. Singlylist.h

```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);

address alokasi(infotype x);
void dealokasi(address &P);

void printInfo(List L);
void insertFirst(List &L, address P);

#endif
```

penjelasan unguided 1
kode ini adalah header file C++ untuk struktur data Singly Linked List tipe dasar yang menyiapkan kerangka dasar seperti struct untuk elemen list (ElmList) dan kepala list (List), serta mendeklarasikan fungsi-fungsi penting untuk membuat list baru (createList), mengatur alokasi dan dealokasi memori (alokasi & dealokasi), menyisipkan elemen di awal list (insertFirst), hingga menampilkan isi datanya (printInfo).

### 2. Singlylist.cpp

```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

void createList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}
```

penjelasan unguided 2
file implementasi C++ ini berisi realisasi dari header Singly Linked List sebelumnya yang berfungsi untuk mengeksekusi operasi dasar seperti menginisialisasi list kosong (createList), memesan memori untuk node baru beserta isinya (alokasi), menghapus dan membersihkan memori node (dealokasi), menyisipkan elemen baru di posisi paling depan (insertFirst), serta menampilkan seluruh isi data yang ada di dalam list ke layar (printInfo).


### 3. main.cpp

```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    printInfo(L);
    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/SukmaAdityaRafindra/109082500189_Sukma-Aditya-Rafindra_SDT/blob/main/MODUL2/Output/soal3.1MODUL2.png)

penjelasan unguided 3
fungsi main() ini adalah program utama untuk menjalankan Singly Linked List di mana program mendeklarasikan list L beserta lima pointer (P1 hingga P5), menginisialisasi list agar kosong, lalu memasukkan nilai-nilai integer (2, 0, 8, 12, dan 9) satu per satu ke awal list menggunakan metode insertFirst, sehingga saat dicetak lewat printInfo, urutan akhirnya akan terbalik menjadi 9 12 8 0 2.


## Kesimpulan
kode di atas adalah satu paket program Singly Linked List lengkap yang biasa dipakai buat tugas atau praktikum Struktur Data. Alurnya dimulai dari file header (Singlylist.h) buat nyiapin kerangka struktur data dan fungsi, dilanjut file implementasi (.cpp) buat nulis logika kodenya—seperti bikin list kosong, alokasi memori, nambahin data di depan (insertFirst), sampai nampilin data—dan ditutup sama fungsi main() buat mengeksekusi programnya. Lewat fungsi main tersebut, program dimasukin angka-angka (2, 0, 8, 12, 9) satu per satu ke bagian depan list, sehingga pas di-run atau diprint, hasil akhirnya bakal tampil berurutan secara reverse (terbalik) jadi 9 12 8 0 2.




## Referensi
[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: Universitas Islam Negeri Sumatera Utara Medan.

<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.

<br>[3] Modul 4. (2024). "CODE BLOCKS IDE & PENGENALAN BAHASA C++ (BAGIAN PERTAMA)". Modul Praktikum.
