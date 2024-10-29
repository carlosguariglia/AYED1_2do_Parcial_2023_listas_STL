#include <string>
#include "../include/empleado.hpp"

using namespace std;

Empleado::Empleado(string _code, string _name, string _surname, string _telephone)

{
    this->code = _code;
    this->name = _name;
    this->surname = _surname;
    this->telephone = _telephone;
};

string Empleado::getCode()
    {
        return this->code;
    }

string Empleado::getName()
    {
        return this->name;
    }

string Empleado::getSurname()
    {
        return this->surname;
    }

string Empleado::getTelephone()
    {
        return this->telephone;
    }