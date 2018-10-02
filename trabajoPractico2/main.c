#include <stdio.h>
#include <stdlib.h>
#include "arrayEmpleados.h"
#include "funcionesExtras.h"
#define CANTIDAD 10

int main()
{

    int opcion;

do{

    opcion = menuOpciones();


    switch(opcion){

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        opcion  = 5;
        break;
    }


}while(opcion != 5);

return 0;

}
