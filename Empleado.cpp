//
// Created by braian on 08/08/2022.
//

#include "Empleado.h"

Empleado::Empleado(string nombre, string apellido){

    this->nombre = nombre;
    this->apellido = apellido;

}
Empleado :: ~Empleado(){}


void Empleado::salario(){

}

void Empleado::mostrar() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "El salario es: " ;
}
