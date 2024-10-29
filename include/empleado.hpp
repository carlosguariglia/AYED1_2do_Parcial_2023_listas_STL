#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

using namespace std;

class Empleado
    {
        private:
            string code, name, surname, telephone;

        public:
            Empleado(string _code, string _name, string _surname, string _telephone);
            string getCode();
            string getName();
            string getSurname();
            string getTelephone();
    };

#endif