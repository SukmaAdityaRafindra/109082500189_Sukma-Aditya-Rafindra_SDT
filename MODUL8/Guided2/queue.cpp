#include "queue_array.h"
#include <iostream>

using namespace std;

// NOTE : 
// Implementasi 1 = head diam, tail bergerak (Queue Linear Statis, kerana head nya tetap diam)
// Implementasi 2 = head bergerak, tail bergerak (Queue Linear Dinamis, karena head & tail nya sama-sama bergerak)
// Implementasi 3 = head dan tail berputar (Queue Circular, karena jika udh mentok tapi masih ada space, diputar sehingga tail bisa ada didepan head)

bool isEmpty(q q){
    return (q.head == -1 && q.tail == -1)
}

//isFull implmenetasi 1 & 2
bool isFull(Q q){
    return (q.tail == MAKSIMAL - 1)
}

// //isFull implementasi 3
// bool isFull(Q q){
//     return ((q.tail + 1) % MAKSIMAL == q.head)

void CreateQueue(Q &q){ //terbentuk queue dengan head = -1 dan tail = -1 
    q.head = -1;
    q.tail = -1;
}
 

//enqueue implementasi 1 & 2
void enQueue(Q &q, string nama){
    if(isFull(q) == true){
        cout << "Queue sudah penuh!" << endl;
    } else {
        if(isEmpty(q) == true){
            q.head = q.tail = 0;
        } else {
            q.tail++;
        }
        q.nama[q.tail] = nama;
        cout << "nama " << nama << " berhasil ditambahkan kedalam queue!" << endl;
    }
}

// //enQueue implementasi 3
// void enQueue(queue &q, string nama){
//     if(isFull(q) == true){
//         cout << "Queue sudah penuh!" << endl;
//     } else {
//         if(isEmpty(q) == true){
//             q.head = q.tail = 0;
//         } else {
//             q.tail = (q.tail + 1) % MAKSIMAL; // bergerak melingkar
//         }
//         q.nama[q.tail] = nama;
//         cout << "nama " << nama << " berhasil ditambahkan kedalam queue!" << endl;
//     }
// }

//dequeue implementasi 1
void deQueue(Q &q){
    if(isEmpty(q) == true){
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Mengahapus data " << q.nama[q.head] << "..." << endl;
        for(int i = 0; i < q.tail; i++){
            q.nama[i] =  q.nama[i+1];
        }
        q.tail--;
        if(q.tail < 0){ //kalo semua isi queue nya udh dikeluarin, set head & tail ke -1
            q.head = -1;
            q.tail = -1;
        }
    }
}

// //dequeue implementasi 2
// void deQueue(queue &q){
//     if(isEmpty(q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         cout << "Mengahapus data " << q.nama[q.head] << "..." << endl;
//         q.head++;
//         if(q.head > q.tail){ //kalo elemennya udh abis (head akan lebih 1 dari tail), maka reset ulang head & tail ke -1
//             q.head = -1;
//             q.tail = -1;
//         }
//     }
// }

// //deQueue implementasi 3
// void deQueue(queue &q){
//     if(isEmpty(q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         cout << "Mengahapus data " << q.nama[q.head] << "..." << endl;
//         if(q.head == q.tail){ //kalo elemennya tinggal 1, langsungkan saja head & tail nya reset ke -1
//             q.head = -1;
//             q.tail = -1;
//         } else {
//             q.head = (q.head + 1) % MAKSIMAL; // bergerak melingkar
//         }
//     }
// }

//viewQueue implementasi 1 & 2
void viewQueue(Q q){
    if(isEmpty(q) == true){
        cout << "Queue kosong!" << endl;
    } else {
        for(int i = q.head; i <= q.tail; i++){
            cout << i -  q.head + 1 << ". " << q.nama[i] << endl;
        }
    }
    cout << endl;
}

// //viewQueue implementasi 3
// void viewQueue(queue q){
//     if(isEmpty(q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         int i = q.head;
//         int count = 1;
//         while(true){
//             cout << count << ". " << q.nama[i] << endl;
//             if(i == q.tail){
//                 break;
//             }
//             i = (i + 1) % MAKSIMAL;
//             count++;
//         }   
//     }
// }