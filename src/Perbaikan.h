#ifndef PERBAIKAN_H
#define PERBAIKAN_H

#include <string>

class Perbaikan {
private:
    std::string jenisKerusakan;
    std::string sparepart;
    double harga;

public:
    Perbaikan(std::string jenisKerusakan, std::string sparepart, double harga);
    std::string getJenisKerusakan();
    std::string getSparepart();
    double getHarga();
};

#endif
