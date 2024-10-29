#include <string>
#include "../include/cliente.hpp"

using namespace std;

Cliente::Cliente(string _code, string _name, string _surname, string _address)
{
    this->code = _code;
    this->name = _name;
    this->surname = _surname;
    this->address = _address;
}
 

string Cliente::getCode() {
    return this->code;
}

string Cliente::getName() {
    return this->name;
}

string Cliente::getSurname() {
    return this->surname;
}

string Cliente::getAddress() {
    return this->address;
}