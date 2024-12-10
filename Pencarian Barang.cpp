#include "PencarianBarang.h"
#include <iostream>

PencarianBarang::PencarianBarang() {
    jenisBarang.push_back("Buku");
    jenisBarang.push_back("Mobil");
    jenisBarang.push_back("Sepeda");
}

std::string PencarianBarang::getJenis() {
    std::cout << "Masukkan jenis barang yang ingin dicari (Buku, Mobil, Sepeda): ";
    std::string jenis;
    std::cin >> jenis;
    return jenis;
}

std::string PencarianBarang::getSpesifikasi() {
    std::cout << "Masukkan spesifikasi barang: ";
    std::string spesifikasi;
    std::cin >> spesifikasi;
    return spesifikasi;
}
