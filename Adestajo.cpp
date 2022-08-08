

#include "Adestajo.h"
#include <iostream>



Adestajo::Adestajo(string nombre, string apellido, int cantidad, float valorPorElemento) : Empleado(nombre, apellido)
{
    this->cantidad = cantidad;
    this->valorPorElemento = valorPorElemento;
}

Adestajo::~Adestajo()
{
}


void Adestajo::salario(){
    this->sueldo = this->cantidad * this->valorPorElemento;
}

void Adestajo::mostrar(){
    Empleado::mostrar();
    cout << this->sueldo << endl;
}