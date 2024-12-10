#include "Admin.h"

Admin::Admin(std::string id, std::string password) {
    this->id = id;
    this->password = password;
}

std::string Admin::getId() {
    return id;
}

std::string Admin::getPassword() {
    return password;
}
