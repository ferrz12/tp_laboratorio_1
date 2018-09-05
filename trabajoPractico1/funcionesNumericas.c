#include <stdio.h>
#include "funcionesNumericas.h"

int pedirEntero(char texto[]){

    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}

int sumar(int numeroUno, int numeroDos){

    int suma;

    suma = numeroUno + numeroDos;

    return suma;

}

int restar(int numeroUno, int numeroDos){

    int resta;

    resta = numeroUno - numeroDos;

    return resta;

}

int multiplicar(int numeroUno, int numeroDos){

    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;

}

float dividir(int numeroUno, int numeroDos){

    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;

}

int factorial(int numero){

    int factorial = 1;
    int i;

       for(i = numero; i >= 1; i--){
            factorial = factorial * i;
        }

      return factorial;

}



