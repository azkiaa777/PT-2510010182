#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    int terbesar = a;

    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << "\n";

    return 0;
}