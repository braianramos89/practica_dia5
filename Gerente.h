
#ifndef TEMPLATECPP_GERENTE_H
#define TEMPLATECPP_GERENTE_H
#include "Empleado.h"

using namespace std;

class Gerente : public Empleado{

private:
    float sueldo;
public:
    Gerente(string nombreEmpleado,string apellidoEmpleado);
    ~Gerente();
    void salario();
    void mostrar();



};

#endif //TEMPLATECPP_GERENTE_H
