#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente
    {
        private:
            string code, name, surname, address;

        public:
            Cliente(string _code, string _name, string _surname, string _address);
            string getCode();
            string getName();
            string getSurname();
            string getAddress();
    };

#endif