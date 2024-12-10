#ifndef KELOLA_INVENTARIS_H
#define KELOLA_INVENTARIS_H

#include <vector>
#include <string>

class Barang {
public:
    virtual void tampilkan() = 0; // pure virtual function for displaying item details
};

class Buku : public Barang {
private:
    std::string judul;
    std::string penulis;
    int tebalBuku;
    std::string penerbit;
    int tahunTerbit;

public:
    Buku(std::string judul, std::string penulis, int tebalBuku, std::string penerbit, int tahunTerbit);
    void tampilkan() override;
};

class Mobil : public Barang {
private:
    std::string jenis;
    int tahun;
    std::string spesifikasi;
    std::string nomorPolisi;

public:
    Mobil(std::string jenis, int tahun, std::string spesifikasi, std::string nomorPolisi);
    void tampilkan() override;
};

class Sepeda : public Barang {
private:
    std::string jenisSepeda;
    std::string nomorSepeda;

public:
    Sepeda(std::string jenisSepeda, std::string nomorSepeda);
    void tampilkan() override;
};

class KelolaInventaris {
private:
    std::vector<Barang*> inventaris;

public:
    void GetInventarisBaru(Barang* barang);
    void HapusInvent(Barang* barang);
    void LihatDataPenyewaan();
};

#endif
