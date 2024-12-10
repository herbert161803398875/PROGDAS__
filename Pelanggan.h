#ifndef PENCARIAN_BARANG_H
#define PENCARIAN_BARANG_H

#include <string>
#include <vector>

class PencarianBarang {
private:
    std::vector<std::string> jenisBarang;

public:
    PencarianBarang();
    std::string getJenis();
    std::string getSpesifikasi();
};

#endif
