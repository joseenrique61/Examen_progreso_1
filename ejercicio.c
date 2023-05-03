// Construya un programa para hallar, de un conjunto de N números, qué porcentaje son cero, qué porcentaje son positivos y el porcentaje de números negativos.
#include <stdio.h>

//Se declaran las variables a usar.
float numerosPositivos = 0;
float numerosNegativos = 0;
float ceros = 0;
float count = 0;

void ObtenerNumeros(int cantidadNumeros);

int main()
{
    //Se le pide al usuario la cantidad de números a ingresar.
    int cantidadNumeros = 0;
    printf("Ingrese la cantidad de numeros a leer: ");
    scanf("%i", &cantidadNumeros);

    //Se llama a la función ObtenerNumeros para sacar los números de cada tipo.
    ObtenerNumeros(cantidadNumeros);
    
    //Se imprimen los números positivos, negativos y ceros
    printf("Positivos: %f porciento, Ceros: %f porciento, Negativos: %f porciento", numerosPositivos/count * 100, ceros/count * 100, numerosNegativos/count * 100);
}

//Función usada para encontrar los números positivos, negativos y ceros. Itera a través de cada número y determina de qué tipo es, luego añade uno a la variable correspondiente.
void ObtenerNumeros(int cantidadNumeros)
{
    int numeros[3];
    for (; count < cantidadNumeros; count++)
    {
        int numero = 0;
        scanf("%i", &numero);
        if (numero > 0)
        {
            numerosPositivos++;
        }
        else if (numero < 0)
        {
            numerosNegativos++;
        }
        else
        {
            ceros++;
        }
    }
}