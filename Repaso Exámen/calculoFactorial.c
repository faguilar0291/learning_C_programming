/*
Calcular el factorial de un número, se debe realizar el cálculo y luego pedir otro número.
Se finaliza el programa ingresando 999, se debe informar las veces que el usuario realizó calculos.
*/

#include <stdio.h>

int main(){

    printf("Bienvenido al programa de calculos \n");
    calculoFactorial();

    return 0;
};


void calculoFactorial(){
    long int numeroDato = 0, factorial = 1;
    int i = 0, contador = 0;

    printf("Ingrese un número para calcular su factorial : \n");
    scanf("%ld", &numeroDato);

    do
    {
        if (numeroDato > 1)
        {

            for (i = 2; i <= numeroDato; i++)
            {
                factorial *= i;
            }
            printf("El factorial de %ld es: %ld \n", numeroDato, factorial);
            contador += 1;
        };

        printf("Ingrese un número para calcular su factorial : \n");
        printf("Para finalizar ingrese 999 \n");
        scanf("%ld", &numeroDato);
        factorial = 1;
    } while (numeroDato != 999);

    printf("Se ha calculado %d veces el factorial! \n", contador);
    printf("Finalizamos el programa de calculos! \n");

    return;
}