
#ifndef TEMPLATECPP_EMPLEADO_H
#define TEMPLATECPP_EMPLEADO_H
#define HORAS_OBRERO 50
#define SALARIO_GERENTE 1500
#define SALARIO_VENDEDOR 1000
#include <iostream>

using namespace std;

class Empleado {

private:
    string nombre;
    string apellido;

public:
    Empleado(string nombre,string apellido);
    ~Empleado();
    virtual void salario();
    virtual void mostrar();

};

#endif //TEMPLATECPP_EMPLEADO_H
