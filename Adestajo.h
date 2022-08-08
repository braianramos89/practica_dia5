
#ifndef TEMPLATECPP_ADESTAJO_H
#define TEMPLATECPP_ADESTAJO_H
#include "Empleado.h"


using namespace std;

class Adestajo : public Empleado{

private:
    int cantidad;
    float valorPorElemento;
    float sueldo;

public:
    Adestajo(string , string , int , float );
    ~Adestajo();
    void salario();
    void mostrar();

};









#endif //TEMPLATECPP_ADESTAJO_H
