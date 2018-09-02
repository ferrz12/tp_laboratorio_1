#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    int suma;

    do{ //menu de opciones
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Division\n");
        printf("5.Salir\n");

        opcion = ingresarOpcion();

             switch(opcion){
        case 1:
            numeroUno = ingresarNumeroUno();
            numeroDos = ingresarNumeroDos();
            suma = sumar(numeroUno, numeroDos);
            break;
        case 2:
            printf("Estoy restando");
            break;
        case 3:
            printf("Estoy multiplicando");
            break;
        case 4:
            printf("Estoy dividiendo");
            break;
        default:
                opcion = 5;

    }

    system("pause"); //hace una pausa en la ejecucion
    system("cls"); //limpia la pantalla

    }while(opcion != 5);

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

void sumar(int numeroUno, int numeroDos){

    int suma;

    suma = numeroUno + numeroDos;

    printf("La suma es: %d\n", suma);


}
