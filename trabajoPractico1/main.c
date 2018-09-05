#include <stdio.h>
#include <stdlib.h>
#include "funcionesNumericas.h"

int main()
{
    int opcion;
    int numeroUno = 0;
    int numeroDos = 0;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorialNumeroUno;
    int factorialNumeroDos;

    do{ //menu de opciones

        printf("Elija una opcion: \n");
        printf("1. Ingresar primer operando (A=%d) \n", numeroUno);
        printf("2. Ingresar segundo operando (B=%d) \n", numeroDos);
        printf("3. Calcular todas las operaciones\n");
        printf("  a) Calcular suma (A+B)\n  b) Calcular resta (A-B)\n  c) Calcular division (A/B)\n  d) Calcular multiplicacion (A*B)\n  e) Calcular factorial (A!)\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        opcion = pedirEntero("");

             switch(opcion){
        case 1:
            numeroUno = pedirEntero("Ingrese primer operando: ");
            break;
        case 2:
            numeroDos = pedirEntero("Ingrese segundo operando: ");
            break;
        case 3:
            suma = sumar(numeroUno, numeroDos);
            resta = restar(numeroUno, numeroDos);
            division = dividir(numeroUno, numeroDos);
            multiplicacion = multiplicar(numeroUno, numeroDos);
            factorialNumeroUno = factorial(numeroUno);
            factorialNumeroDos = factorial(numeroDos);
            break;
        case 4:
            printf("El resultado de A + B es: %d\n", suma);
            printf("El resultado de A - B es: %d\n", resta);
            printf("El resultado de A / B es: %d\n", division);
            printf("El resultado de A * B es: %d\n", multiplicacion);
            printf("El factorial de A es: %d y el factorial de B es: %d\n", factorialNumeroUno, factorialNumeroDos);
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








