// Import library and file.
#include <bits/stdc++.h>
#include "Dpr.cpp"

// Using standard namespace.
using namespace std;

int main()
{
    string id;
    string nama;
    string bidang;
    string partai;

    int pilihan;

    do
    {
        cout << "Pilihan menu" << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Ubah data" << endl;
        cout << "3. Hapus data" << endl;
        cout << "4. Tampil data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: " << endl;
        cin >> pilihan;

        switch(pilihan)
        {
            case 1:
                cout << "Masukkan data anggota DPR: " << endl;
                cout << "Masukkan id: ";
                cin >> id;
                cout << "Masukkan nama: ";
                cin >> nama;
                cout << "Masukkan bidang: ";
                cin >> bidang;
                cout << "Masukkan asal partai: ";
                cin >> partai;
                break;
            case 2:
                cout << "Ubah data anggota DPR: " << endl;
                break;
            case 3:
                cout << "Hapus data anggota DPR: " << endl;
                break;
            case 4:
                cout << "Tampilkan data anggota DPR: " << endl;
                break;
            case 5:
                cout << "Program selesai dijalankan" << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    }
    while(pilihan != 5);

    return 0;
}