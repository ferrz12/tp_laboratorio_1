#include <stdio.h>
#include "funcionesNumericas.h"

int pedirEntero(char texto[]){

    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}

int sumar(int numeroUno, int numeroDos){ //funcion para sumar

    int suma;

    suma = numeroUno + numeroDos;

    return suma;

}

int restar(int numeroUno, int numeroDos){ //funcion para restar

    int resta;

    resta = numeroUno - numeroDos;

    return resta;

}

int multiplicar(int numeroUno, int numeroDos){ //funcion para multiplicar

    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;

}

float dividir(int numeroUno, int numeroDos){ //funcion para dividir

    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;

}

int factorial(int numero){ // funcion para factorial

    int factorial = 1;
    int i;

      for(i = 1; i <= numero; i++){
        factorial = factorial * i;
      }

      return factorial;

}



