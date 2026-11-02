#include <iostream>
#include <string>
using namespace std;

struct Tugas {
    string nama;
    string nim;
    string alat;
    Tugas* next;
};

struct Queue {
    Tugas* front;
    Tugas* rear;
};

void buatQueue(Queue &Q) {
    Q.front = nullptr;
    Q.rear = nullptr;
}

bool isEmpty(Queue Q) {
    return Q.front == nullptr;
}

void enqueue(Queue &Q, string nama, string nim, string alat) {
    Tugas* baru = new Tugas;
    baru->nama = nama;
    baru->nim = nim;
    baru->alat = alat;
    baru->next = nullptr;

    if (isEmpty(Q)) {
        Q.front = baru;
        Q.rear = baru;
    } else {
        Q.rear->next = baru;
        Q.rear = baru;
    }

    cout << "Permintaan berhasil ditambahkan.\n";
}

void dequeue(Queue &Q) {
    if (isEmpty(Q)) {
        cout << "Tidak ada permintaan yang menunggu.\n";
        return;
    }

    Tugas* hapus = Q.front;

    cout << "\nPermintaan diproses:\n";
    cout << "Nama      : " << hapus->nama << endl;
    cout << "NIM       : " << hapus->nim << endl;
    cout << "Alat      : " << hapus->alat << endl;

    Q.front = Q.front->next;

    if (Q.front == nullptr) {
        Q.rear = nullptr;
    }

    delete hapus;
    cout << "Permintaan selesai diproses.\n";
}

void tampilkanQueue(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Tidak ada permintaan yang menunggu.\n";
        return;
    }

    Tugas* bantu = Q.front;
    int nomor = 1;

    cout << "\nDaftar permintaan yang menunggu:\n";

    while (bantu != nullptr) {
        cout << nomor << ". "
             << bantu->nama << " | "
             << bantu->nim << " | "
             << bantu->alat << endl;

        bantu = bantu->next;
        nomor++;
    }
}

void hapusSemua(Queue &Q) {
    while (!isEmpty(Q)) {
        Tugas* hapus = Q.front;
        Q.front = Q.front->next;
        delete hapus;
    }
    Q.rear = nullptr;
}

int main() {
    Queue Q;
    buatQueue(Q);

    int pilihan;

    do {
        cout << "\n=== ANTREAN PEMINJAMAN LAB ===\n";
        cout << "1. Tambah permintaan\n";
        cout << "2. Proses permintaan\n";
        cout << "3. Tampilkan antrean\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            string nama, nim, alat;

            cout << "Nama mahasiswa: ";
            getline(cin, nama);

            cout << "NIM: ";
            getline(cin, nim);

            cout << "Nama alat: ";
            getline(cin, alat);

            enqueue(Q, nama, nim, alat);
        }
        else if (pilihan == 2) {
            dequeue(Q);
        }
        else if (pilihan == 3) {
            tampilkanQueue(Q);
        }
        else if (pilihan == 4) {
            cout << "Program selesai.\n";
        }
        else {
            cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 4);

    hapusSemua(Q);
    return 0;
}