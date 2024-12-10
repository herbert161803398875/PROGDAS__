#include "Pelanggan.h"

Pelanggan::Pelanggan(std::string nama, std::string alamat, std::string noktp, std::string noHP) {
    this->nama = nama;
    this->alamat = alamat;
    this->noktp = noktp;
    this->noHP = noHP;
}

std::string Pelanggan::getNama() {
    return nama;
}

std::string Pelanggan::getAlamat() {
    return alamat;
}

std::string Pelanggan::getNoKTP() {
    return noktp;
}

std::string Pelanggan::getNoHP() {
    return noHP;
}
