#include <iostream>
#include <string>

using namespace std;

class Produk {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (nilai default)
    Produk() {
        id = 0;
        nama = "Belum ada nama";
    }

    // 2. Constructor dengan parameter id saja
    Produk(int pId) {
        id = pId;
        nama = "Tanpa Nama";
    }

    // 3. Constructor dengan parameter nama saja
    Produk(string pNama) {
        id = 0;
        nama = pNama;
    }

    // 4. Constructor lengkap (id dan nama)
    Produk(int pId, string pNama) {
        id = pId;
        nama = pNama;
    }

    void tampilkan() {
        cout << "ID Produk: " << id << " | Nama Produk: " << nama << endl;
    }
};

