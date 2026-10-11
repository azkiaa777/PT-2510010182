#include <iostream>
using namespace std;

int main() {
    int bil1 = 0;
    int bil2 = 0;

    cout << "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua   : ";
    cin >> bil2;

    int hasil_bagi = bil1 / bil2;
    int sisa_bagi = bil1 % bil2;

    cout << bil1 << " dibagi " << bil2 << " adalah " 
         << hasil_bagi << " sisa " << sisa_bagi << ".\n";

    return 0;
}