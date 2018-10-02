#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmpleados.h"

int eEmpleado_init(eEmpleado listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estaVacio= LIBRE;
            listado[i].idEmpleado= 0;
        }
    }
    return retorno;
}

int eEmpleado_buscarLugarLibre(eEmpleado listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estaVacio == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eEmpleado_siguienteId(eEmpleado listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estaVacio == OCUPADO)
            {
                    if(listado[i].idEmpleado  > retorno)
                    {
                         retorno = listado[i].idEmpleado;
                    }
            }
        }
    }

    return retorno+1;
}


int eEmpleado_buscarPorId(eEmpleado listado[] ,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estaVacio == OCUPADO && listado[i].idEmpleado == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



void eEmpleado_mostrarUno(eEmpleado unEmpleado)
{
     printf("Id: %d | Nombre: %s | Apellido: - %s | Salario: %.2f | Sector: %d \n", unEmpleado.idEmpleado, unEmpleado.nombre, unEmpleado.apellido, unEmpleado.salario, unEmpleado.sector);

}

int eEmpleado_mostrarListado(eEmpleado listado[],int limite)
{
    int retorno = -1;
    int i;

        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estaVacio == OCUPADO)
            {
                eEmpleado_mostrarUno(listado[i]);
            }
        }
    system("pause");
    system("cls");

    return retorno;
}


int eEmpleado_mostrarListadoConBorrados(eEmpleado listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estaVacio==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            eEmpleado_mostrarUno(listado[i]);
        }
    }
    return retorno;
}




int eEmpleado_alta(eEmpleado  listado[],int limite)
{
    int retorno = -1;
    int i;

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{

            //}

    for(i = 0; i < limite; i++){
        eEmpleado_ingresarEmpleado(listado, limite);
        retorno = 0;

        }
    return retorno;
}

void eEmpleado_ingresarEmpleado(eEmpleado listado[], int limite){

    int id;
    int indice;
    float salario;
    int sector;

    indice = eEmpleado_buscarLugarLibre(listado,limite);

    if(indice >= 0){

        id = eEmpleado_siguienteId(listado,limite);

        listado[indice].idEmpleado = id;

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(listado[indice].nombre);

        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(listado[indice].apellido);

        printf("Ingrese salario: ");
        scanf("%f", &salario);

        printf("Ingrese sector: ");
        scanf("%d", &sector);

        listado[indice].estaVacio = OCUPADO;

        system("cls");

    }

}

int eEmpleado_modificacion(eEmpleado listado[] , int limite)
{
    int idEmpleado;
    int i;
    int opcion;

    printf("Ingrese id de empleado: \n");
    scanf("%d", &idEmpleado);

    for(i = 0; i < limite; i++){
        if(idEmpleado == listado[i].idEmpleado){
            printf("Id encontrado, que desea modificar?\n");
            printf("1. Nombre");
            printf("2.Apellido");
            printf("3.Salario");
            printf("4.Sector\n");

            opcion = getInt("Ingrese opcion");

            switch(opcion){
                case 1:
                        printf("Ingrese nuevo nombre: ");
                        fflush(stdin);
                        gets(listado[i].nombre);
                        break;
                case 2:
                case 3:
                case 4:
                default:
                    printf("Ingrese una opcion valida a modificar!");
                    break;
            }


        }

    }
}





