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
                    if(listado[i].idEmpleado>retorno)
                    {
                         retorno=listado[i].idEmpleado;
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
     printf("Id: %d | Nombre: %s | Apellido: - %s | Salario: %.2f | Sector: %d | Esta vacio: %d  \n", unEmpleado.idEmpleado, unEmpleado.nombre, unEmpleado.apellido, unEmpleado.salario, unEmpleado.sector, unEmpleado.estaVacio);

}

int eEmpleado_mostrarListado(eEmpleado listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estaVacio==OCUPADO)
            {

                eEmpleado_mostrarUno(listado[i]);
            }
        }
    }
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
    char nombre[TAMANIO];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eEmpleado_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eEmpleado_siguienteId(listado,limite);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                strcpy(listado[indice].nombre,"juan ");
                listado[indice].idEmpleado = id;
                listado[indice].estaVacio = OCUPADO;
            //}
        }
    }
    return retorno;
}
