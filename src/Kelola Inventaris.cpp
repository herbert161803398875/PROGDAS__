#include "KelolaInventaris.h"
#include <iostream>

Buku::Buku(std::string judul, std::string penulis, int tebalBuku, std::string penerbit, int tahunTerbit)
    : judul(judul), penulis(penulis), tebalBuku(tebalBuku), penerbit(penerbit), tahunTerbit(tahunTerbit) {}

void Buku::tampilkan() {
    std::cout << "Buku: " << judul << " oleh " << penulis << ", Tahun: " << tahunTerbit << ", Penerbit: " << penerbit << "\n";
}

Mobil::Mobil(std::string jenis, int tahun, std::string spesifikasi, std::string nomorPolisi)
    : jenis(jenis), tahun(tahun), spesifikasi(spesifikasi), nomorPolisi(nomorPolisi) {}

void Mobil::tampilkan() {
    std::cout << "Mobil: " << jenis << ", Tahun: " << tahun << ", Spesifikasi: " << spesifikasi << ", Nomor Polisi: " << nomorPolisi << "\n";
}

Sepeda::Sepeda(std::string jenisSepeda, std::string nomorSepeda)
    : jenisSepeda(jenisSepeda), nomorSepeda(nomorSepeda) {}

void Sepeda::tampilkan() {
    std::cout << "Sepeda: " << jenisSepeda << ", Nomor Sepeda: " << nomorSepeda << "\n";
}

void KelolaInventaris::GetInventarisBaru(Barang* barang) {
    inventaris.push_back(barang);
}

void KelolaInventaris::HapusInvent(Barang* barang) {
    for (auto it = inventaris.begin(); it != inventaris.end(); ++it) {
        if (*it == barang) {
            inventaris.erase(it);
            break;
        }
    }
}

void KelolaInventaris::LihatDataPenyewaan() {
    for (auto& barang : inventaris) {
        barang->tampilkan();
    }
}
