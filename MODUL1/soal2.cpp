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