#include "ProsesSewa.h"
#include <iostream>

ProsesSewa::ProsesSewa(double harga, int lamaSewa, std::string tanggalMulai) {
    this->harga = harga;
    this->lamaSewa = lamaSewa;
    this->tanggalMulai = tanggalMulai;
}

double ProsesSewa::getHarga() {
    return harga;
}

int ProsesSewa::getLamaSewa() {
    return lamaSewa;
}

std::string ProsesSewa::getTanggalMulai() {
    return tanggalMulai;
}

void ProsesSewa::pembayaran() {
    std::cout << "Total pembayaran: " << harga * lamaSewa << " IDR\n";
}
