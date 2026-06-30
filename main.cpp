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

int main()
	{
	int pilihan;
	
	do
	{
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
        
        switch(pilihan)
        {
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
	if (jumlahSiswa >= 100)
    {
        cout << "\nData siswa sudah penuh!\n";
        return;
    }

    cout << "\n=================================\n";
    cout << "       TAMBAH DATA SISWA\n";
    cout << "=================================\n";

    cout << "Masukkan NIS   : ";
    cin >> daftarSiswa[jumlahSiswa].nis;

    cin.ignore();

    cout << "Masukkan Nama  : ";
    getline(cin, daftarSiswa[jumlahSiswa].nama);

    cout << "Masukkan Kelas : ";
    getline(cin, daftarSiswa[jumlahSiswa].kelas);

    jumlahSiswa++;

    cout << "\nData siswa berhasil ditambahkan!\n";
}

void tampilSiswa()
{
	cout << "\n=================================\n";
    cout << "          DATA SISWA\n";
    cout << "=================================\n";

    if (jumlahSiswa == 0)
    {
        cout << "Data siswa masih kosong!\n";
        return;
    }

    for (int i = 0; i < jumlahSiswa; i++)
    {
        cout << "\nData Ke-" << i + 1 << endl;
        cout << "NIS   : " << daftarSiswa[i].nis << endl;
        cout << "Nama  : " << daftarSiswa[i].nama << endl;
        cout << "Kelas : " << daftarSiswa[i].kelas << endl;
    }
}

void ubahSiswa()
{
	string cariNIS;
    bool ditemukan = false;

    cout << "\nMasukkan NIS yang akan diubah : ";
    cin >> cariNIS;
    cin.ignore();

    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (daftarSiswa[i].nis == cariNIS)
        {
            cout << "Masukkan Nama Baru  : ";
            getline(cin, daftarSiswa[i].nama);

            cout << "Masukkan Kelas Baru : ";
            getline(cin, daftarSiswa[i].kelas);

            cout << "\nData berhasil diubah!\n";

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "\nData siswa tidak ditemukan!\n";
    }
}

void hapusSiswa()
{
	string cariNIS;
    bool ditemukan = false;

    cout << "\nMasukkan NIS yang akan dihapus : ";
    cin >> cariNIS;

    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (daftarSiswa[i].nis == cariNIS)
        {
            for (int j = i; j < jumlahSiswa - 1; j++)
            {
                daftarSiswa[j] = daftarSiswa[j + 1];
            }

            jumlahSiswa--;

            cout << "\nData berhasil dihapus!\n";

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "\nData siswa tidak ditemukan!\n";
    }
}


//=====================
// MATA PELAJARAN
//=====================

void tambahMapel()
{
	if (jumlahMapel >= 100)
    {
        cout << "\nData mata pelajaran sudah penuh!\n";
        return;
    }

    cout << "\n=================================\n";
    cout << "     TAMBAH MATA PELAJARAN\n";
    cout << "=================================\n";

    cout << "Masukkan Kode Mapel : ";
    cin >> daftarMapel[jumlahMapel].kodeMapel;

    cin.ignore();

    cout << "Masukkan Nama Mapel : ";
    getline(cin, daftarMapel[jumlahMapel].namaMapel);

    cout << "Masukkan KKM        : ";
    cin >> daftarMapel[jumlahMapel].kkm;

    jumlahMapel++;

    cout << "\nData mata pelajaran berhasil ditambahkan!\n";
}

void tampilMapel()
{
	cout << "\n=================================\n";
    cout << "      DATA MATA PELAJARAN\n";
    cout << "=================================\n";

    if (jumlahMapel == 0)
    {
        cout << "Data mata pelajaran masih kosong!\n";
        return;
    }

    for (int i = 0; i < jumlahMapel; i++)
    {
        cout << "\nData Ke-" << i + 1 << endl;
        cout << "Kode Mapel : " << daftarMapel[i].kodeMapel << endl;
        cout << "Nama Mapel : " << daftarMapel[i].namaMapel << endl;
        cout << "KKM        : " << daftarMapel[i].kkm << endl;
    }
}

void ubahMapel()
{
	string kode;
    bool ditemukan = false;

    cout << "\nMasukkan Kode Mapel yang akan diubah : ";
    cin >> kode;

    cin.ignore();

    for (int i = 0; i < jumlahMapel; i++)
    {
        if (daftarMapel[i].kodeMapel == kode)
        {
            cout << "Masukkan Nama Mapel Baru : ";
            getline(cin, daftarMapel[i].namaMapel);

            cout << "Masukkan KKM Baru : ";
            cin >> daftarMapel[i].kkm;

            cout << "\nData berhasil diubah!\n";

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "\nData mata pelajaran tidak ditemukan!\n";
    }

}

void hapusMapel()
{
	string kode;
    bool ditemukan = false;

    cout << "\nMasukkan Kode Mapel yang akan dihapus : ";
    cin >> kode;

    for (int i = 0; i < jumlahMapel; i++)
    {
        if (daftarMapel[i].kodeMapel == kode)
        {
            for (int j = i; j < jumlahMapel - 1; j++)
            {
                daftarMapel[j] = daftarMapel[j + 1];
            }

            jumlahMapel--;

            cout << "\nData berhasil dihapus!\n";

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "\nData mata pelajaran tidak ditemukan!\n";
    }
}


//=====================
// JADWAL PELAJARAN
//=====================

void tambahJadwal()
{
	NodeJadwal* baru = new NodeJadwal;

    cout << "\n=================================\n";
    cout << "      TAMBAH JADWAL\n";
    cout << "=================================\n";

    cin.ignore();

    cout << "Masukkan Hari            : ";
    getline(cin, baru->hari);

    cout << "Masukkan Jam             : ";
    getline(cin, baru->jam);

    cout << "Masukkan Mata Pelajaran  : ";
    getline(cin, baru->mataPelajaran);

    baru->next = NULL;

    if(head == NULL)
    {
        head = baru;
    }
    else
    {
        NodeJadwal* bantu = head;

        while(bantu->next != NULL)
        {
            bantu = bantu->next;
        }

        bantu->next = baru;
    }

    cout << "\nJadwal berhasil ditambahkan!\n";
}

void tampilJadwal()
{
    cout << "\n=================================\n";
    cout << "      DATA JADWAL\n";
    cout << "=================================\n";

    if(head == NULL)
    {
        cout << "Data jadwal masih kosong!\n";
        return;
    }

    NodeJadwal* bantu = head;
    int no = 1;

    while(bantu != NULL)
    {
        cout << "\nData Ke-" << no++ << endl;
        cout << "Hari            : " << bantu->hari << endl;
        cout << "Jam             : " << bantu->jam << endl;
        cout << "Mata Pelajaran  : " << bantu->mataPelajaran << endl;

        bantu = bantu->next;
    }
}

void hapusJadwal()
{
    if(head == NULL)
    {
        cout << "\nData jadwal masih kosong!\n";
        return;
    }

    string hari;

    cout << "\nMasukkan Hari yang akan dihapus : ";
    cin.ignore();
    getline(cin, hari);

    NodeJadwal* bantu = head;
    NodeJadwal* hapus = NULL;

    if(head->hari == hari)
    {
        hapus = head;
        head = head->next;

        delete hapus;

        cout << "\nJadwal berhasil dihapus!\n";
        return;
    }

    while(bantu->next != NULL && bantu->next->hari != hari)
    {
        bantu = bantu->next;
    }

    if(bantu->next == NULL)
    {
        cout << "\nJadwal tidak ditemukan!\n";
        return;
    }

    hapus = bantu->next;
    bantu->next = hapus->next;

    delete hapus;

    cout << "\nJadwal berhasil dihapus!\n";
}


//=====================
// NILAI SISWA
//=====================

void tambahNilai()
{
	if (jumlahNilai >= 100)
    {
        cout << "\nData nilai sudah penuh!\n";
        return;
    }

    cout << "\n=================================\n";
    cout << "        INPUT NILAI SISWA\n";
    cout << "=================================\n";

    cout << "Masukkan NIS   : ";
    cin >> daftarNilai[jumlahNilai].nis;

    cin.ignore();

    cout << "Masukkan Nama  : ";
    getline(cin, daftarNilai[jumlahNilai].nama);

    cout << "Masukkan Nilai : ";
    cin >> daftarNilai[jumlahNilai].nilai;

    jumlahNilai++;

    cout << "\nData nilai berhasil ditambahkan!\n";
}

void tampilNilai()
{
	cout << "\n=================================\n";
    cout << "         DATA NILAI\n";
    cout << "=================================\n";

    if (jumlahNilai == 0)
    {
        cout << "Data nilai masih kosong!\n";
        return;
    }

    for (int i = 0; i < jumlahNilai; i++)
    {
        cout << "\nData Ke-" << i + 1 << endl;
        cout << "NIS    : " << daftarNilai[i].nis << endl;
        cout << "Nama   : " << daftarNilai[i].nama << endl;
        cout << "Nilai  : " << daftarNilai[i].nilai << endl;
    }
}

void cariNilai()
{
	string cariNIS;
    bool ditemukan = false;

    cout << "\nMasukkan NIS yang dicari : ";
    cin >> cariNIS;

    for (int i = 0; i < jumlahNilai; i++)
    {
        if (daftarNilai[i].nis == cariNIS)
        {
            cout << "\nData ditemukan!\n";
            cout << "NIS    : " << daftarNilai[i].nis << endl;
            cout << "Nama   : " << daftarNilai[i].nama << endl;
            cout << "Nilai  : " << daftarNilai[i].nilai << endl;

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "\nData tidak ditemukan!\n";
    }
}

void urutkanNilai()
{
	Nilai temp;

    for (int i = 0; i < jumlahNilai - 1; i++)
    {
        for (int j = 0; j < jumlahNilai - i - 1; j++)
        {
            if (daftarNilai[j].nilai < daftarNilai[j + 1].nilai)
            {
                temp = daftarNilai[j];
                daftarNilai[j] = daftarNilai[j + 1];
                daftarNilai[j + 1] = temp;
            }
        }
    }

    cout << "\nData berhasil diurutkan dari nilai tertinggi.\n";
}


//=====================
// MENU
//=====================

void menuDataSiswa()
{
	int pilih;
	
	do
	{
		cout << "\n=================================\n";
        cout << "         DATA SISWA\n";
        cout << "=================================\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampilkan Data\n";
        cout << "3. Ubah Data\n";
        cout << "4. Hapus Data\n";
        cout << "5. Kembali\n";
        cout << "=================================\n";
        cout << "Pilih Menu : ";
        cin >> pilih;
        
        switch(pilih)
        {
        	case 1:
        		tambahSiswa();
        		break;
        		
        	case 2:
        		tampilSiswa();
        		break;
        		
        	case 3:
        		ubahSiswa();
        		break;
        		
        	case 4:
        		hapusSiswa();
        		break;
        		
        	case 5:
        		break;
        		
        	default:
        		cout << "\nPilihan tidak valid!\n";
		}
	}while(pilih != 5);
}

void menuMapel()
{
	int pilih;
	
	do
	{
		cout << "\n=================================\n";
        cout << "       MATA PELAJARAN\n";
        cout << "=================================\n";
        cout << "1. Tambah Mata Pelajaran\n";
        cout << "2. Tampilkan Mata Pelajaran\n";
        cout << "3. Ubah Mata Pelajaran\n";
        cout << "4. Hapus Mata Pelajaran\n";
        cout << "5. Kembali\n";
        cout << "=================================\n";
        cout << "Pilih Menu : ";
        cin >> pilih;
        
        switch(pilih)
        {
        	case 1:
        		tambahMapel();
        		break;
        		
        	case 2:
        		tampilMapel();
        		break;
        		
        	case 3:
        		ubahMapel();
        		break;
        		
        	case 4:
        		hapusMapel();
        		break;
        		
        	case 5:
        		break;
        		
        	default:
        		cout << "\nPilihan tidak valid!\n";
		}
	}while(pilih != 5);
}

void menuJadwal()
{
	int pilih;
	
	do
	{
		cout << "\n=================================\n";
        cout << "      JADWAL PELAJARAN\n";
        cout << "=================================\n";
        cout << "1. Tambah Jadwal\n";
        cout << "2. Tampilkan Jadwal\n";
        cout << "3. Hapus Jadwal\n";
        cout << "4. Kembali\n";
        cout << "=================================\n";
        cout << "Pilih Menu : ";
        cin >> pilih;
        
        switch(pilih)
        {
        	case 1:
                tambahJadwal();
                break;

            case 2:
                tampilJadwal();
                break;

            case 3:
                hapusJadwal();
                break;

            case 4:
                break;
                
            default:
            	cout << "\nPilihan tidak valid!\n";
		}
	}while(pilih != 4);
}

void menuNilai()
{
	int pilih;
	
	do
	{
		cout << "\n=================================\n";
        cout << "         NILAI SISWA\n";
        cout << "=================================\n";
        cout << "1. Input Nilai\n";
        cout << "2. Tampilkan Nilai\n";
        cout << "3. Cari Nilai\n";
        cout << "4. Urutkan Nilai\n";
        cout << "5. Kembali\n";
        cout << "=================================\n";
        cout << "Pilih Menu : ";
        cin >> pilih;
        
        switch(pilih)
        {
        	case 1:
        		tambahNilai();
        		break;
        		
        	case 2:
        		tampilNilai();
        		break;
        		
        	case 3:
        		cariNilai();
        		break;
        		
        	case 4:
        		urutkanNilai();
        		break;
        		
        	case 5:
        		break;
        		
        	default:
        		cout << "\nPilihan tidak valid!\n";
		}
	}while(pilih != 5);
}
