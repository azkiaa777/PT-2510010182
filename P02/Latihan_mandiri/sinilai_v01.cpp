#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "";
    string npm = "";
    string prodi = ""; // Data baru sesuai Soal 1 Latihan Mandiri
    double kehadiran = 0;
    double mingguan = 0;
    double uts = 0;
    double uas = 0;

    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama        : ";
    getline(cin, nama);
    cout << "NPM         : ";
    cin >> npm;
    cout << "Program Studi : ";
    cin >> ws;
    getline(cin, prodi);
    
    cout << "Kehadiran   : ";
    cin >> kehadiran;
    cout << "Mingguan    : ";
    cin >> mingguan;
    cout << "UTS         : ";
    cin >> uts;
    cout << "UAS         : ";
    cin >> uas;

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Program Studi : " << prodi << "\n";
    cout << "Kehadiran   : " << kehadiran << "\n";
    cout << "Mingguan    : " << mingguan << "\n";
    cout << "UTS         : " << uts << "\n";
    cout << "UAS         : " << uas << "\n";

    return 0;
}