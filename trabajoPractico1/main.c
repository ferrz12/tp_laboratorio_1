#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion(void);
int ingresarNumeroUno(void);
int ingresarNumeroDos(void);
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
float dividir(int, int);
int factorial(int);

int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factoreoNumeroUno;
    int factoreoNumeroDos;

    do{ //menu de opciones
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Division\n");
        printf("5.Factorial\n");
        printf("6.Salir\n");

        opcion = ingresarOpcion();

             switch(opcion){
        case 1:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            suma = sumar(numeroUno, numeroDos);
            printf("La suma es: %d\n", suma);
            break;
        case 2:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            resta = restar(numeroUno, numeroDos);
            printf("La resta es: %d\n", resta);
            break;
        case 3:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            multiplicacion = multiplicar(numeroUno, numeroDos);
            printf("La multiplicacion es: %d\n", multiplicacion);
            break;
        case 4:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            if(numeroDos == 0){
                printf("No se puede dividir por 0 \n");
            }else{
                division = dividir(numeroUno, numeroDos);
                printf("La division es: %.2f\n", division);
            }
            break;
        case 5:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            factoreoNumeroUno = factorial(numeroUno);
            factoreoNumeroDos = factorial(numeroDos);
            printf("El factorial de numero uno es: %d y el factorial de numero dos es: %d\n", factoreoNumeroUno, factoreoNumeroDos);
        default:
                opcion = 6;
    }

    system("pause"); //hace una pausa en la ejecucion
    system("cls"); //limpia la pantalla

    }while(opcion != 6);

    return 0;
}

int ingresarOpcion(void){ //funcion para ingresar opcion al menu

    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int ingresarNumeroUno(void){ //funcion para ingresar primer numero

    int numero;

    printf("Ingrese numero uno: ");
    scanf("%d", &numero);

    return numero;

}

int ingresarNumeroDos(void){ //funcion para ingresar segundo numero

    int numero;

    printf("Ingrese numero dos: ");
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


