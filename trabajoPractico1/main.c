#include <stdio.h>
#include <stdlib.h>
#include "funcionesNumericas.h"

int ingresarOpcion(void);

int main()
{
    int opcion;
    int numeroUno = 0;
    int numeroDos = 0;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factoreoNumeroUno;
    int factoreoNumeroDos;

    do{ //menu de opciones

        printf("1. Ingresar primer operando (A=%d) \n", numeroUno);
        printf("2. Ingresar segundo operando (B=%d) \n", numeroDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        opcion = ingresarOpcion();

             switch(opcion){
        case 1:
            numeroUno = pedirEntero("Ingrese primer operando: ");
            break;
        case 2:
            numeroDos = pedirEntero("Ingrese segundo operando: ")
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
        default:
                opcion = 5;
    }

    system("pause"); //hace una pausa en la ejecucion
    system("cls"); //limpia la pantalla

    }while(opcion != 5);

    return 0;
}

int ingresarOpcion(void){ //funcion para ingresar opcion al menu

    int opcion;

    scanf("%d", &opcion);

    return opcion;
}






