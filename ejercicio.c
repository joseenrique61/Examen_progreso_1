// Construya un programa para hallar, de un conjunto de N números, qué porcentaje son cero, qué porcentaje son positivos y el porcentaje de números negativos.
#include <stdio.h>
#include <iostream>

int numerosPositivos = 0;
int numerosNegativos = 0;
int ceros = 0;
int count = 0;

void ObtenerNumeros(int cantidadNumeros);

int main()
{
    int cantidadNumeros = 0;
    printf("Ingrese la cantidad de numeros a leer: ");
    scanf("%i", &cantidadNumeros);
    ObtenerNumeros(cantidadNumeros);
    printf("%i", numerosPositivos);
    printf("%i", numerosNegativos);
    printf("%i", ceros);
}

//Función usada para encontrar los números positivos, negativos y ceros. Itera a través de cada número y determina de qué tipo es, luego añade uno a la variable correspondiente.
void ObtenerNumeros(int cantidadNumeros)
{
    int numeros[3];
    for (int i = 0; i < cantidadNumeros; i++)
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

// float Porcentajes(int[] )