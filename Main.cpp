// Import library and file.
#include <bits/stdc++.h>
#include "Dpr.cpp"

// Using standard namespace.
using namespace std;

int main()
{
    Dpr fulan;

    fulan.set_id("01");
    fulan.set_nama("Fulan");
    fulan.set_bidang("Pertahanan");
    fulan.set_partai("Partai 1");

    Dpr fulanah("02", "Fulanah", "Komunikasi", "Partai 2");

    cout << '\n' << "Data anggota DPR: " << '\n';
    cout << fulan.get_id() << '\n';
    cout << "Nama: " << fulan.get_nama() << '\n';
    cout << "Bidang: " << fulan.get_bidang() << '\n';
    cout << "Asal Partai: " << fulan.get_partai() << "\n\n";
    cout << fulanah.get_id() << '\n';
    cout << "Nama: " << fulanah.get_nama() << '\n';
    cout << "Bidang: " << fulanah.get_bidang() << '\n';
    cout << "Asal Partai: " << fulanah.get_partai() << "\n\n";
}