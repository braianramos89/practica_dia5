

#ifndef TEMPLATECPP_VENDEDOR_H
#define TEMPLATECPP_VENDEDOR_H
#include "Empleado.h"

#include <iostream>

using namespace std;

class Vendedor : public Empleado{

private:

    float ventaSemanal;
    float sueldo;

public:

    Vendedor(string nombreEmpleado,string apellidoEmpleado,float ventaSemanal);
    ~Vendedor();
    void salario();
    void mostrar();

};

#endif //TEMPLATECPP_VENDEDOR_H
