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
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int B[3][3] = {
        {90, 80, 70},
        {60, 50, 40},
        {30, 20, 10}
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