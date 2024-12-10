#ifndef TEKNISI_H
#define TEKNISI_H

#include <string>

class Teknisi {
private:
    std::string nama;

public:
    Teknisi(std::string nama);
    std::string getNama();
};

#endif
