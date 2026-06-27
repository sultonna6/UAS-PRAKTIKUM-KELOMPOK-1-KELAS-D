/*
====================================================
PROJECT UAS PRAKTIKUM ALGORITMA DAN STRUKTUR DATA

Judul :
Sistem Akademik Sederhana

Kelompok 1
1. Sulton Nur Arif
2. Rangga Saputra
3. Muhamad Khusaeri
4. Rega Faturrahman
5. Nurjaqia

Universitas Perjuangan Tasikmalaya
2026
====================================================
*/

#include <iostream>
#include <string>

using namespace std;

//====================================================
// 1. STRUCT
//====================================================

// Data Siswa
struct Siswa {
	string nis;
	string nama;
	string kelas;
};

// Data Mata Pelajaran
struct MataPelajaran {
	string kodeMapel;
	string namaMapel;
	int kkm;
};

// Data Nilai
struct Nilai {
	string nis;
	string nama;
	int nilai;
};

// Node Linked List Jadwal
struct NodeJadwal {
	string hari;
	string jam;
	string mataPelajaran;

	NodeJadwal* next;
};

//====================================================
// 2. VARIABEL GLOBAL
//====================================================

// Data siswa
Siswa daftarSiswa[100];
int jumlahSiswa = 0;

// Data Mata Pelajaran
MataPelajaran daftarMapel[50];
int jumlahMapel = 0;

// Data Nilai
Nilai daftarNilai[100];
int jumlahNilai = 0;

// Linked List Jadwal
NodeJadwal* head = NULL;

//====================================================
// 3. FUNGSI DATA SISWA (Rangga Saputra)
//====================================================

void tambahSiswa();
void tampilSiswa();
void ubahSiswa();
void hapusSiswa();


//====================================================
// 4. FUNGSI MATA PELAJARAN (Muhamad Khusaeri)
//====================================================

void tambahMapel();
void tampilMapel();
void ubahMapel();
void hapusMapel();


//====================================================
// 5. FUNGSI JADWAL PELAJARAN (Nurjaqia)
//====================================================

void tambahJadwal();
void tampilJadwal();
void hapusJadwal();


//====================================================
// 6. FUNGSI NILAI SISWA (Rega Faturrahman)
//====================================================

void tambahNilai();
void tampilNilai();
void cariNilai();
void urutkanNilai();


//====================================================
// 7. MENU (Sulton Nur Arif)
//====================================================

void menuDataSiswa();
void menuMapel();
void menuJadwal();
void menuNilai();


//====================================================
// 8. MAIN PROGRAM
//====================================================

int main(){
	int pilihan;
	
	do{
		cout << "\n=========================================\n";
        cout << "      SISTEM AKADEMIK SEDERHANA\n";
        cout << "=========================================\n";
        cout << "1. Data Siswa\n";
        cout << "2. Mata Pelajaran\n";
        cout << "3. Jadwal Pelajaran\n";
        cout << "4. Nilai Siswa\n";
        cout << "5. Keluar\n";
        cout << "=========================================\n";
        cout << "Pilih Menu : ";
        cin >> pilihan;
        
        switch(pilihan){
        	case 1:
                menuDataSiswa();
                break;

            case 2:
                menuMapel();
                break;

            case 3:
                menuJadwal();
                break;

            case 4:
                menuNilai();
                break;

            case 5:
                cout << "\nTerima kasih telah menggunakan program.\n";
                break;

            default:
                cout << "\nPilihan tidak valid!\n";
		}
	} while (pilihan != 5);

    return 0;

}


//====================================================
// 9. IMPLEMENTASI FUNGSI
//====================================================

//=====================
// DATA SISWA
//=====================

void tambahSiswa()
{

}

void tampilSiswa()
{

}

void ubahSiswa()
{

}

void hapusSiswa()
{

}


//=====================
// MATA PELAJARAN
//=====================

void tambahMapel()
{

}

void tampilMapel()
{

}

void ubahMapel()
{

}

void hapusMapel()
{

}


//=====================
// JADWAL PELAJARAN
//=====================

void tambahJadwal()
{

}

void tampilJadwal()
{

}

void hapusJadwal()
{

}


//=====================
// NILAI SISWA
//=====================

void tambahNilai()
{

}

void tampilNilai()
{

}

void cariNilai()
{

}

void urutkanNilai()
{

}


//=====================
// MENU
//=====================

void menuDataSiswa()
{

}

void menuMapel()
{

}

void menuJadwal()
{

}

void menuNilai()
{

}
