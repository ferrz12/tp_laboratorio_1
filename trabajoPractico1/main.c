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
    int factoreo;

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
            factoreo = factorial(numeroUno);
            printf("El factorial de numero uno es: %d\n", factoreo);

        default:
                opcion = 6;

    }

    system("pause"); //hace una pausa en la ejecucion
    system("cls"); //limpia la pantalla

    }while(opcion != 6);

    return 0;
}

int ingresarOpcion(void){

    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int ingresarNumeroUno(void){

    int numero;

    printf("Ingrese numero uno: ");
    scanf("%d", &numero);

    return numero;

}

int ingresarNumeroDos(void){

    int numero;

    printf("Ingrese numero dos: ");
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

      for(i = 1; i <= numero; i++){
        factorial = factorial * i;
      }

      return factorial;

}


