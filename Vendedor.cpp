#include "Vendedor.h"


Vendedor::Vendedor(string nombreEmpleado,string apellidoEmpleado, float ventaSemanal) : Empleado(nombreEmpleado, apellidoEmpleado) {

    this->ventaSemanal = ventaSemanal;
}

Vendedor::~Vendedor() {}

void Vendedor::salario(){

    this->sueldo = this->ventaSemanal*0.15 + SALARIO_VENDEDOR;


}

void Vendedor::mostrar(){
    Empleado::mostrar();
    cout << this->sueldo << endl;

}