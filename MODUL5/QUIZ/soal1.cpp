#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Tugas {
    int id;
    string nama;
    int waktu;
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

void tambahTugas(Queue &Q, int id, string nama, int waktu) {
    Tugas* baru = new Tugas;
    baru->id = id;
    baru->nama = nama;
    baru->waktu = waktu;
    baru->next = nullptr;

    if (isEmpty(Q)) {
        Q.front = baru;
        Q.rear = baru;
    } else {
        Q.rear->next = baru;
        Q.rear = baru;
    }

    cout << "Tugas berhasil ditambahkan.\n";
}

void tampilkanTugas(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Tidak ada tugas yang menunggu.\n";
        return;
    }

    Tugas* bantu = Q.front;
    int urutan = 1;

    cout << "\nDaftar Tugas Menunggu:\n";
    cout << left << setw(8) << "Urutan"
         << setw(8) << "ID"
         << setw(25) << "Nama Tugas"
         << "Estimasi (menit)\n";

    while (bantu != nullptr) {
        cout << left << setw(8) << urutan++
             << setw(8) << bantu->id
             << setw(25) << bantu->nama
             << bantu->waktu << '\n';

        bantu = bantu->next;
    }
}

void prosesTugas(Queue &Q) {
    if (isEmpty(Q)) {
        cout << "Tidak ada tugas untuk diproses.\n";
        return;
    }

    Tugas* hapus = Q.front;

    cout << "\nMemproses tugas ID " << hapus->id
         << ": " << hapus->nama << '\n';
    cout << "Estimasi waktu: " << hapus->waktu
         << " menit.\n";

    Q.front = Q.front->next;

    if (Q.front == nullptr) {
        Q.rear = nullptr;
    }

    delete hapus;
    cout << "Tugas selesai diproses.\n";
}

void tampilkanEstimasi(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Tidak ada tugas yang menunggu.\n";
        return;
    }

    int total = 0;
    Tugas* bantu = Q.front;

    cout << "\nEstimasi Waktu Setiap Tugas:\n";

    while (bantu != nullptr) {
        cout << "ID " << bantu->id << " - "
             << bantu->nama << ": "
             << total << " menit sebelum mulai\n";

        total += bantu->waktu;
        bantu = bantu->next;
    }

    cout << "Total estimasi seluruh antrean: "
         << total << " menit.\n";
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
    int idBerikutnya = 1;
    string nama;
    int waktu;

    do {
        cout << "\n=== SISTEM ANTREAN TUGAS ===\n";
        cout << "1. Tambah tugas\n";
        cout << "2. Proses tugas berikutnya\n";
        cout << "3. Tampilkan tugas menunggu\n";
        cout << "4. Tampilkan estimasi waktu\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";

        if (!(cin >> pilihan)) {
            cout << "Input harus berupa angka.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (pilihan) {
            case 1:
                cout << "Nama tugas: ";
                getline(cin >> ws, nama);

                cout << "Estimasi waktu (menit): ";

                if (!(cin >> waktu)) {
                    cout << "Input waktu harus berupa angka.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    break;
                }

                if (waktu <= 0) {
                    cout << "Waktu harus lebih dari 0.\n";
                    break;
                }

                tambahTugas(Q, idBerikutnya++, nama, waktu);
                break;

            case 2:
                prosesTugas(Q);
                break;

            case 3:
                tampilkanTugas(Q);
                break;

            case 4:
                tampilkanEstimasi(Q);
                break;

            case 5:
                hapusSemua(Q);
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

    } while (pilihan != 5);

    return 0;
}