#ifndef ARRAYEMPLEADOS_H_INCLUDED
#define ARRAYEMPLEADOS_H_INCLUDED
#define TAMANIO 51
#define OCUPADO 0
#define LIBRE 1

typedef struct
{
    int idEmpleado;
    char nombre[TAMANIO];
    char apellido[TAMANIO];
    float salario;
    int sector;
    int estaVacio;
    // int estado;

}eEmpleado;
#endif // ARRAYEMPLEADOS_H_INCLUDED

int eEmpleado_init(eEmpleado[],int limite);
int eEmpleado_buscarPorId(eEmpleado[] ,int limite, int id);
int eEmpleado_siguienteId(eEmpleado[] ,int limite);
int eEmpleado_buscarLugarLibre(eEmpleado listado[],int limite);

void eEmpleado_mostrarUno(eEmpleado);
int eEmpleado_mostrarListado(eEmpleado[] ,int limite);
int eEmpleado_mostrarListadoConBorrados(eEmpleado[] ,int limite);

int eEmpleado_alta(eEmpleado[] ,int limite);
int eEmpleado_baja(eEmpleado[] ,int limite, int id);
int eEmpleado_modificacion(eEmpleado[] ,int limite, int id);
void eEmpleado_ingresarEmpleado(eEmpleado[], int);

int eEmpleado_ordenar(eEmpleado[] ,int limite, int orden);