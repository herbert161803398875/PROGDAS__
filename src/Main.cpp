#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "main.h"

void runRentalSystem() {
    // Menampilkan menu awal sistem rental
    std::cout << "Selamat datang di sistem rental barang!" << std::endl;

    // Misalnya, load data dari file teks
    std::vector<Buku> daftarBuku = Buku::loadFromFile("data/buku.txt");
    std::vector<Mobil> daftarMobil = Mobil::loadFromFile("data/mobil.txt");
    std::vector<Sepeda> daftarSepeda = Sepeda::loadFromFile("data/sepeda.txt");

    // Menampilkan data buku, mobil, sepeda untuk testing
    std::cout << "Daftar Buku: " << std::endl;
    for (auto& buku : daftarBuku) {
        buku.display();
    }

    std::cout << "Daftar Mobil: " << std::endl;
    for (auto& mobil : daftarMobil) {
        mobil.display();
    }

    std::cout << "Daftar Sepeda: " << std::endl;
    for (auto& sepeda : daftarSepeda) {
        sepeda.display();
    }

    // Lanjutkan dengan interaksi pengguna lainnya
}

int main() {
    runRentalSystem(); // Menjalankan sistem rental
    return 0;
}
