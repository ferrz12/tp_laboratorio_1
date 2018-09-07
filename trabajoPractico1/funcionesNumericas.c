#include <stdio.h>
#include "funcionesNumericas.h"

/** \brief Pide un numero al usuario con o sin mensaje y lo devuelve
 *
 * \param texto [] texto Recibe una cadena de caracteres en forma de un vector de char
 * \return Retorna el valor
 *
 */


float pedirFloat(char texto[]){

    float numero;

    printf("%s", texto);
    scanf("%f", &numero);

    return numero;

}

/** \brief Realiza la suma de 2 numeros recibidos
 *
 * \param numeroUno Primer numero
 * \param numeroDos Segundo numero
 * \return Devuelve el resultado de la suma de los numeros recibidos
 *
 */


float sumar(float numeroUno, float numeroDos){

    float suma;

    suma = numeroUno + numeroDos;

    return suma;

}

/** \brief Realiza la resta de 2 numeros recibidos
 *
 * \param numeroUno Primer numero
 * \param numeroDos Segundo numero
 * \return Devuelve el resultado de la resta de los numeros recibidos
 *
 */

float restar(float numeroUno, float numeroDos){

    float resta;

    resta = numeroUno - numeroDos;

    return resta;

}

/** \brief Realiza la multiplicacion de 2 numeros recibidos
 *
 * \param numeroUno Primer numero
 * \param numeroDos Segundo numero
 * \return Devuelve el resultado de la multiplicacion de los numeros recibidos
 *
 */

float multiplicar(float numeroUno, float numeroDos){

    float multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;

}

/** \brief Realiza la division de 2 numeros recibidos, admite decimales
 *
 * \param numeroUno Primer numero
 * \param numeroDos Segundo numero
 * \return Devuelve el resultado de la division de los numeros recibidos
 *
 */

float dividir(float numeroUno, float numeroDos){

    float division;

    division = numeroUno / numeroDos;

    return division;

}

/** \brief Realiza el factorial del numero recibido, admite decimales
 *
 * \param numero Recibe un numero
 * \return Devuelve el resultado del factorial del numero recibido
 *
 */

int factorial(float numero){

    int factorial = 1;
    int i;

       for(i = numero; i >= 1; i--){
            factorial = factorial * i;
        }

      return factorial;

}

/** \brief Obtiene el decimal del numero recibido
 *
 * \param numero Es el numero en decimal recibido
 * \return Devuelve si el numero tiene decimal o no
 *
 */


int obtenerDecimal(float numero){

    int respuesta;
    int numeroEntero;

    numeroEntero = (int)numero;

    if(numero - numeroEntero != 0){
        respuesta = 1;
    }else{
        respuesta = 0;
    }

    return respuesta;

}





