#include <iostream>
using namespace std;

int main() {
    // Cara 1: Lolos tanpa warning, tapi pecahannya hilang diam-diam (hasil: 85)
    int nilai1 = 85.7;
    cout << "Nilai 1 (pakai =): " << nilai1 << "\n";

    // Cara 2: Pakai kurung kurawal {}, compiler bakal menolak (error narrowing conversion)
    // int nilai2{85.7};

    return 0;
}