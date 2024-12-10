#ifndef PROSES_SEWA_H
#define PROSES_SEWA_H

#include <string>

class ProsesSewa {
private:
    double harga;
    int lamaSewa;
    std::string tanggalMulai;

public:
    ProsesSewa(double harga, int lamaSewa, std::string tanggalMulai);
    double getHarga();
    int getLamaSewa();
    std::string getTanggalMulai();
    void pembayaran();
};

#endif
