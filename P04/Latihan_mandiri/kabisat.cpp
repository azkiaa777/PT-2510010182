#include <iostream>
using namespace std;

int main() {
    int tahun = 0;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " adalah tahun kabisat.\n";
    } else {
        cout << tahun << " bukan tahun kabisat.\n";
    }

    return 0;
}
