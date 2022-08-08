#ifndef TEMPLATECPP_OBRERO_H
#define TEMPLATECPP_OBRERO_H
#include "Empleado.h"

using namespace std;
class Obrero: public Empleado{

private:

    int horas;
    float sueldo;

public:
    Obrero(string nombreEmpleado,string apellidoEmpleado,int horasTrabajo);
    ~Obrero();
    void salario();
    void mostrar();
};

#endif //TEMPLATECPP_OBRERO_H
