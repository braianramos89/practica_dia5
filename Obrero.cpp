#include "Obrero.h"


Obrero::Obrero(string nombreEmpleado, string apellidoEmpleado, int horasTrabajo) : Empleado(nombreEmpleado, apellidoEmpleado) {
    this->horas = horasTrabajo;
}


Obrero::~Obrero() {

}

void Obrero::salario(){


    if(this->horas > 40){
        float resultado = 40*HORAS_OBRERO;
        resultado += (this->horas - 40)*HORAS_OBRERO*1.5;
        this->sueldo = resultado;

    }else{
        this->sueldo = this->horas*HORAS_OBRERO;

    }

}

void Obrero::mostrar() {
    Empleado::mostrar();
    cout << this->sueldo<< endl;
}
