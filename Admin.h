#ifndef ADMIN_H
#define ADMIN_H

#include <string>

class Admin {
private:
    std::string id;
    std::string password;

public:
    Admin(std::string id, std::string password);
    std::string getId();
    std::string getPassword();
};

#endif
