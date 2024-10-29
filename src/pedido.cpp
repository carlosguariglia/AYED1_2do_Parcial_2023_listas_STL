#include <iostream>
#include "../include/pedido.hpp"

using namespace std;

Pedido::Pedido(string _code, Cliente* _cliente, Empleado* _empleado)
    {
        this->code = _code;           
        this->cliente = _cliente;
        this->empleado = _empleado;
        this->numEquipos = 0;         

    
    for (int i = 0; i < 20; i++) {
        this->equipo[i] = nullptr;
    }  
 }

string Pedido::getCode()
{
    return this->code;
}

void Pedido::addEquipo(Equipo* _equipo) 
{
    if (numEquipos < 20) {    
        equipo[numEquipos] = _equipo;  
        numEquipos++;                  
    } else {
        cout << "Error: No se pueden agregar más artículos. El pedido está lleno." << endl;
    }
}

void Pedido::showPedido()
{
    cout << "Pedido Nro: " << getCode() << endl;
    cout << "Cliente: " << cliente->getName() << " " << cliente->getSurname() << endl;
    cout << "Empleado: " << empleado->getName() << " " << empleado->getSurname() << endl;
    cout << "Direccion: " << cliente->getAddress() << endl;
    cout << "Equipos: " << endl;

    for(int i = 0; i < numEquipos; i++) 
    {
        cout << "  - " << equipo[i]->getName() << " (" << equipo[i]->getCode() << "): $" << equipo[i]->getPrice() << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << endl;
}