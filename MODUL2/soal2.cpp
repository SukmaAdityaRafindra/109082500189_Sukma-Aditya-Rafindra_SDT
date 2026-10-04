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