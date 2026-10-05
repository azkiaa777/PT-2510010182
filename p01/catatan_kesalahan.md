# Catatan Kesalahan Praktikum 5

| Berkas | Jenis kesalahan | Pesan yang muncul (salin baris pertamanya) | Cara kamu mengetahuinya |
|---|---|---|---|
| k1_sintak.cpp | Sintaks | `k1_sintak.cpp:6:1: error: expected ',' or ';' before 'std'` | Diketahui dari pesan error compiler saat proses build. |
| k2_nama.cpp | Nama | `k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?` | Diketahui dari pesan error compiler saat proses build bahwa nama `Nilai` tidak dikenali. |
| k3_runtime.cpp | Runtime | Tidak ada pesan error; program langsung berhenti setelah input `0`. | Program berhasil di-build, tetapi saat dijalankan dengan input `0`, program berhenti sebelum menampilkan hasil rata-rata. |
| k4_logika.cpp | Logika | Tidak ada pesan error; program berjalan tetapi menghasilkan `Rata-rata: 81`. | Diketahui dengan membandingkan hasil program dengan hasil perhitungan yang seharusnya, yaitu 81,67. |

## Kesimpulan

Menurut saya, kesalahan logika paling berbahaya karena program dapat berjalan tanpa menampilkan pesan error, tetapi menghasilkan hasil yang salah.