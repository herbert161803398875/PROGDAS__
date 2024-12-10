#include "Perbaikan.h"

Perbaikan::Perbaikan(std::string jenisKerusakan, std::string sparepart, double harga) {
    this->jenisKerusakan = jenisKerusakan;
    this->sparepart = sparepart;
    this->harga = harga;
}

std::string Perbaikan::getJenisKerusakan() {
    return jenisKerusakan;
}

std::string Perbaikan::getSparepart() {
    return sparepart;
}

double Perbaikan::getHarga() {
    return harga;
}
