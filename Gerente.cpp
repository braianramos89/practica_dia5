
#include "Gerente.h"




Gerente::Gerente(string nombreEmpleado, string apellidoEmpleado) : Empleado(nombreEmpleado, apellidoEmpleado) {

}

Gerente::~Gerente(){}

void Gerente::salario(){

    this->sueldo = SALARIO_GERENTE;
}

void Gerente::mostrar(){
    Empleado::mostrar();
    cout << this->sueldo << endl;
}