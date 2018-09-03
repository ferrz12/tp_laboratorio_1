#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion(void);
int ingresarNumeroUno(void);
int ingresarNumeroDos(void);

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

        printf("1. Ingresar primer operando (A=%d) \n");
        numeroUno = ingresarNumeroUno();
        printf("2. Ingresar segundo operando (B=) \n");
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

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




