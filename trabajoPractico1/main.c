#include <stdio.h>
#include <stdlib.h>
#include "funcionesNumericas.h"

int main()
{
    int opcion;
    float numeroUno = 0;
    float numeroDos = 0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorialNumeroUno;
    int factorialNumeroDos;
    int banderaUno = 0;
    int banderaDos = 0;
    int banderaTres = 0;

    do{ //menu de opciones

        printf("Elija una opcion: \n");
        printf("1. Ingresar primer operando (A=%.2f) \n", numeroUno);
        printf("2. Ingresar segundo operando (B=%.2f) \n", numeroDos);
        printf("3. Calcular todas las operaciones\n");
        printf("  a) Calcular suma (A+B)\n  b) Calcular resta (A-B)\n  c) Calcular division (A/B)\n  d) Calcular multiplicacion (A*B)\n  e) Calcular factorial (A!)\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        opcion = pedirFloat("");

             switch(opcion){
        case 1:
            numeroUno = pedirFloat("Ingrese primer operando: ");
            banderaUno = 1;
            break;
        case 2:
            if(banderaUno == 1){
                numeroDos = pedirFloat("Ingrese segundo operando: ");
                banderaDos = 1;
            }else{
                printf("Primero ingrese el primer operando para continuar\n");
            }
            break;
        case 3:
            if(banderaUno == 1 && banderaDos == 1){
                suma = sumar(numeroUno, numeroDos);
                resta = restar(numeroUno, numeroDos);
                division = dividir(numeroUno, numeroDos);
                multiplicacion = multiplicar(numeroUno, numeroDos);
                factorialNumeroUno = factorial(numeroUno);
                factorialNumeroDos = factorial(numeroDos);
                banderaTres = 1;
            }else{
               printf("Primero debe ingresar los operandos para continuar\n");
            }
            break;
        case 4:
            if(banderaTres == 1){
                printf("El resultado de A + B es: %.2f\n", suma);
                printf("El resultado de A - B es: %.2f\n", resta);
            if(numeroDos == 0){
                printf("No se puede dividir por 0\n");
                    }else{
                        printf("El resultado de A / B es: %.2f\n", division);
                    }

            printf("El resultado de A * B es: %.2f\n", multiplicacion);

            if(numeroUno < 0  && numeroDos < 0){
                printf("Ambos operandos son negativos, no se puede realizar esta operacion\n");
                    }

            if(numeroUno >=  0 && obtenerDecimal(numeroUno) == 0){
                    printf("El factorial de A es: %d\n", factorialNumeroUno);
                }else{
                        printf("No se puede calcular el factorial, es negativo o tiene decimal\n");
                    }

            if(numeroDos >= 0 && obtenerDecimal(numeroDos) == 0)
            {
                 printf("El factorial de B es: %d\n", factorialNumeroDos);
            }else{
                printf("No se puede calcular el factorial, es negativo o tiene decimal\n");
            }

             banderaDos = 0;
             banderaTres = 0;
            }else{
                printf("Primero debe realizar los calculos para poder informar\n");

            }
            break;
        case 5:
            opcion = 5;  // sale del bucle en caso de elegir opcion 5
            break;
        default:
            printf("Ingrese una opcion valida\n");
    }

    system("pause"); //hace una pausa en la ejecucion
    system("cls"); //limpia la pantalla

    }while(opcion != 5);

    return 0;
}








