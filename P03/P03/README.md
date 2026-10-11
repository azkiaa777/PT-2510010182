# P03 Ekspresi dan Operator: Menghitung Nilai Akhir

Folder kode Pertemuan 3 Pemrograman Terstruktur. Buka folder ini di Visual Studio Code
(File, Open Folder) supaya pengaturan di `.vscode` ikut terpakai.

## Isi

| Berkas | Kegunaan |
|---|---|
| `operator.cpp` | Lima operator aritmetika pada int dan double; pembagian bilangan bulat dan bedanya dengan Python |
| `prioritas.cpp` | Prioritas dan asosiativitas operator, operator gabungan `+=` dan `++`. Tebak dulu, baru jalankan |
| `campuran.cpp` | Ekspresi campuran int dan double: tiga cara menghitung rata-rata, hanya satu yang benar |
| `sinilai_v02_awal.cpp` | Starter SiNilai v0.2: bagian input dari v0.1 sudah jadi, lengkapi perhitungan nilai akhir |
| `contoh_masukan.txt` | Masukan uji yang sama dengan Pertemuan 2: `./sinilai_v02 < contoh_masukan.txt` |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |
| `_kunci/` | Kunci SiNilai v0.2, hanya untuk dosen |

## Keluaran SiNilai v0.2 yang diharapkan (bagian akhir)

```
--- Kartu Nilai Mahasiswa ---
Nama        : Siti Aminah
NPM         : 2024010101
Nilai akhir : 83.975
Rerata polos: 85.875
```

Nilai akhir = 100 x 0,10 + 85,5 x 0,45 + 78 x 0,25 + 80 x 0,20 = 10 + 38,475 + 19,5 + 16 = 83,975.

## Yang dikumpulkan mahasiswa

Folder `p03` di repository `pt-NPM` berisi `sinilai_v02.cpp` dan  `README.md`. Lihat Modul Pertemuan 3 bagian E.

## Catatan Nomor 3 dan 4

### Nomor 3

Pada SiNilai v0.2 ditambahkan perhitungan **rerata polos** dan **selisih**.

Rerata polos dihitung dengan rumus:

Rerata polos = (Kehadiran + Mingguan + UTS + UAS) / 4

Selisih dihitung dengan rumus:

Selisih = Nilai akhir - Rerata polos

Nilai akhir dan rerata polos sama apabila nilai selisihnya adalah 0.

### Nomor 4

Tiga ekspresi dari program operator dibandingkan dengan hasil di Python.

1. Penjumlahan
   - C++: `a + b` → 9
   - Python: `a + b` → 9
   - Hasilnya sama.

2. Pembagian bilangan bulat
   - C++: `a / b` dengan `a = 7` dan `b = 2` → 3
   - Python: `a / b` → 3.5
   - Hasilnya berbeda karena pada C++ kedua operand bertipe `int`, sehingga hasil pembagian berupa bilangan bulat.

3. Pembagian bilangan negatif
   - C++: `-7 / 2` → -3
   - Python: `-7 / 2` → -3.5
   - Hasilnya berbeda karena `/` di Python menghasilkan bilangan pecahan, sedangkan C++ melakukan pembagian integer jika kedua operand bertipe integer.

Catatan: Python `-7 // 2` menghasilkan `-4` karena operator `//` melakukan floor division atau pembulatan ke bawah.

## Deklarasi AI

## Deklarasi AI

AI yang digunakan: ChatGPT.

### Prompt
Membantu memahami perhitungan nilai akhir, rerata polos, dan perbedaan operator C++ dengan Python.

### Umpan Balik AI
AI digunakan sebagai bantuan untuk memahami materi dan mengecek hasil pengerjaan.
