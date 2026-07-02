# 🎓 Sistem Akademik Sederhana
> Proyek Ujian Akhir Semester (UAS) Praktikum Algoritma dan Struktur Data  
> **Program Studi Teknik Informatika – Universitas Perjuangan Tasikmalaya**

Program ini merupakan aplikasi **Sistem Akademik Sederhana** berbasis **C++** yang dirancang untuk membantu pengelolaan data akademik secara dasar melalui antarmuka menu interaktif di terminal/console.  
Fitur utama yang tersedia meliputi pengelolaan **data siswa**, **mata pelajaran**, **jadwal pelajaran**, serta **nilai siswa**.

---

## 👥 Anggota Kelompok 1

| No | Nama | NIM |
|----|------|-----|
| 1 | **Sulton Nur Arif** | **2503010083** |
| 2 | **Rangga Saputra** | **2503010076** |
| 3 | **Muhamad Khusaeri** | **2503010090** |
| 4 | **Rega Faturrahman** | **2503010088** |
| 5 | **Nurjaqia** | **2503010095** |

---

## 📌 Latar Belakang
Pengelolaan data akademik merupakan salah satu kebutuhan dasar dalam lingkungan pendidikan.  
Melalui proyek ini, kami membuat program sederhana yang dapat digunakan untuk menyimpan dan mengelola data akademik menggunakan konsep-konsep dasar dalam **Algoritma dan Struktur Data**, seperti:

- **Struct**
- **Array**
- **Linked List**
- **Sequential Search**
- **Bubble Sort**
- **Function / Modular Programming**
- **Menu berbasis perulangan**

Program ini dibuat sebagai implementasi materi praktikum ke dalam studi kasus sederhana yang relevan dengan dunia akademik.

---

## 🎯 Tujuan Program
Program ini dibuat dengan tujuan untuk:

1. Mengelola **data siswa** secara sederhana.
2. Mengelola **data mata pelajaran**.
3. Menyimpan dan menampilkan **jadwal pelajaran**.
4. Mengelola **nilai siswa**, termasuk pencarian dan pengurutan data.
5. Mengimplementasikan konsep **Algoritma dan Struktur Data** dalam program nyata berbasis C++.

---

# ✨ Fitur Program

## 1) Modul Data Siswa
Fitur untuk mengelola informasi siswa.

- Tambah Data Siswa
- Tampilkan Data Siswa
- Ubah Data Siswa
- Hapus Data Siswa

### Data yang disimpan:
- NIS
- Nama
- Kelas

---

## 2) Modul Mata Pelajaran
Fitur untuk mengelola data mata pelajaran.

- Tambah Mata Pelajaran
- Tampilkan Mata Pelajaran
- Ubah Mata Pelajaran
- Hapus Mata Pelajaran

### Data yang disimpan:
- Kode Mata Pelajaran
- Nama Mata Pelajaran
- KKM

---

## 3) Modul Jadwal Pelajaran
Fitur untuk mengelola jadwal pelajaran menggunakan **Linked List**.

- Tambah Jadwal Pelajaran
- Tampilkan Jadwal Pelajaran
- Hapus Jadwal Pelajaran

### Data yang disimpan:
- Hari
- Jam
- Mata Pelajaran

---

## 4) Modul Nilai Siswa
Fitur untuk mengelola nilai siswa.

- Input Nilai Siswa
- Tampilkan Nilai Siswa
- Cari Nilai Siswa
- Urutkan Nilai Siswa

### Data yang disimpan:
- NIS
- Nama
- Nilai

### Algoritma yang digunakan:
- **Sequential Search** → untuk mencari data nilai berdasarkan NIS
- **Bubble Sort** → untuk mengurutkan nilai dari tertinggi ke terendah

---

# 🧩 Struktur Data dan Algoritma yang Digunakan

| Konsep | Implementasi |
|--------|--------------|
| **Struct** | Menyimpan data `Siswa`, `MataPelajaran`, `Nilai`, dan `NodeJadwal` |
| **Array** | Digunakan untuk menyimpan kumpulan data siswa, mapel, dan nilai |
| **Linked List** | Digunakan pada modul **Jadwal Pelajaran** |
| **Sequential Search** | Digunakan untuk mencari data nilai siswa |
| **Bubble Sort** | Digunakan untuk mengurutkan nilai siswa |
| **Function** | Program dibagi ke dalam fungsi-fungsi sesuai modul |
| **Menu do-while** | Digunakan untuk menampilkan menu berulang sampai user keluar |

---

# 🏗️ Struktur Program

Secara umum program dibagi menjadi beberapa bagian utama:

1. **Struct**  
   Digunakan untuk mendefinisikan bentuk data:
   - `Siswa`
   - `MataPelajaran`
   - `Nilai`
   - `NodeJadwal`

2. **Variabel Global**  
   Digunakan untuk menyimpan kumpulan data program.

3. **Fungsi per Modul**  
   Setiap anggota mengerjakan modul masing-masing:
   - Data Siswa
   - Mata Pelajaran
   - Jadwal Pelajaran
   - Nilai Siswa

4. **Menu Program**  
   Digunakan sebagai antarmuka utama agar pengguna dapat memilih fitur yang ingin dijalankan.

---

# 👨‍💻 Pembagian Tugas Anggota

| Anggota | Tanggung Jawab |
|---------|----------------|
| **Sulton Nur Arif** | Integrasi program, pembuatan struktur program utama, pengelolaan GitHub, penggabungan modul |
| **Rangga Saputra** | Modul **Data Siswa** |
| **Muhamad Khusaeri** | Modul **Mata Pelajaran** |
| **Rega Faturrahman** | Modul **Nilai Siswa** |
| **Nurjaqia** | Modul **Jadwal Pelajaran (Linked List)** |

---

# ▶️ Cara Menjalankan Program

## Persyaratan
Pastikan komputer memiliki compiler C++, misalnya:
- **Dev-C++**
- **Code::Blocks**
- **g++ / MinGW**
- IDE lain yang mendukung C++

## Langkah Menjalankan
1. **Clone repository** ini atau download project.
2. Buka file **`main.cpp`** menggunakan editor / IDE C++.
3. Compile program.
4. Jalankan program.
5. Pilih menu yang tersedia sesuai kebutuhan.

---

# 📂 Struktur Repository

```text
UAS-PRAKTIKUM-KELOMPOK-1-KELAS-D
│
├── main.cpp
├── README.md
├── LICENSE
└── docs
    ├── Flowchart UAS.drawio
    ├── Flowchart UAS.drawio.png
    ├── Laporan UAS Kelompok 1.docx
    └── Laporan UAS Kelompok 1.pdf
```

> Folder `docs` digunakan untuk menyimpan dokumentasi proyek seperti flowchart, laporan, dan file pendukung lainnya.

---

# 🖼️ Dokumentasi
Dokumentasi proyek, flowchart, dan laporan disimpan di folder **`docs/`**.

Contoh dokumentasi yang dapat disertakan:
- Flowchart program
- Laporan UAS
- Screenshot tampilan program
- Penjelasan fitur dan pengujian

---

# 📚 Mata Kuliah
**Praktikum Algoritma dan Struktur Data**  
Fakultas Teknik – Program Studi Teknik Informatika  
**Universitas Perjuangan Tasikmalaya**

---

# 📅 Tahun Pengerjaan
**2026**

---

# 📝 Catatan
Program ini dibuat untuk keperluan pembelajaran dan penyelesaian tugas **Ujian Akhir Semester (UAS)**.  
Implementasi difokuskan pada penerapan konsep dasar **algoritma dan struktur data** dalam bahasa pemrograman **C++**.

---

# © Lisensi
Repository ini dapat menggunakan **MIT License** apabila diperlukan untuk dokumentasi proyek.  
Hak cipta proyek ini tetap menjadi milik **Kelompok 1 – Teknik Informatika – Universitas Perjuangan Tasikmalaya**.
