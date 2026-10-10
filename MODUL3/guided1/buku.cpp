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