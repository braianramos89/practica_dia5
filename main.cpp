/* Considere la clase Empleado, la cual almacena el nombre y apellido.
 * Esta información es común para todos los
 * empleados, incluyendo aquellos de clases derivadas de Empleado. A partir de la clase Empleado se derivan las clases
 * Obrero, Gerente, Vendedor y ADestajo. El Obrero recibe un salario fijo por hora durante las primeras 40 horas de
 * trabajo y “tiempo y medio”, es decir, 1.5 veces su salario por hora, por el tiempo extra trabajado. El Gerente recibe
 * un salario fijo por semana. El Vendedor es un trabajador por comisión que recibe un salario fijo base semanal y un
 * porcentaje fijo de sus ventas brutas semanales. El obrero a destajo se le paga una tarifa fija por elemento producido
 * (por simplicidad, suponga que esta persona sólo produce un tipo de elemento, así que los datos miembro privados son
 * el número de elementos producidos y la tarifa por elemento). Escriba un programa controlador para la jerarquía de
 * herencias de Empleado que instancie objetos de clases derivadas, los inicialice y muestre por pantalla los datos del
 * objeto y calcule la paga semanal de cada tipo de Empleado.*/

#include <iostream>
#include "Empleado.h"
#include "Obrero.h"
#include "Vendedor.h"
#include "Gerente.h"
#include "Adestajo.h"


using namespace std;

int main() {



    Obrero obrero1("Juan", "Perez", 30);
    Vendedor vendedor1("Juan", "carlo", 1000);
    Gerente gerente1("nacho","Arnaiz");
    Adestajo adestajo1("nico", "juancarlo", 2, 100);


    obrero1.salario();
    vendedor1.salario();
    gerente1.salario();
    adestajo1.salario();

    obrero1.mostrar();
    vendedor1.mostrar();
    gerente1.mostrar();
    adestajo1.mostrar();



    return 0;
}
