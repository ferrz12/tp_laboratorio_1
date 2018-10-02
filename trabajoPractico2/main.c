#include <stdio.h>
#include <stdlib.h>
#include "arrayEmpleados.h"
#include "funcionesExtras.h"
#define CANTIDAD 2

int main()
{

    int opcion;
    eEmpleado listadoDeEmpleados[CANTIDAD];

    eEmpleado_init(listadoDeEmpleados, CANTIDAD);

do{


    opcion = menuOpciones();

    switch(opcion){

    case 1:
        eEmpleado_alta(listadoDeEmpleados, CANTIDAD);
        break;
    case 2:
        eEmpleado_modificacion(listadoDeEmpleados, CANTIDAD);
    case 3:
    case 4:
        eEmpleado_mostrarListado(listadoDeEmpleados, CANTIDAD);
        break;
    case 5:
        opcion  = 5;
        break;
    }

}while(opcion != 5);

return 0;

}
