/*
Hacer un programa que dados 3 alumnos puedan ingresar 5 notas por cada alumno y se calcule su promedio.
Calcular también el promedio general de los promedios.
*/

#include <stdio.h>


int main(){
    int alumno1 = 0, alumno2 = 0, alumno3 = 0, promedioNotas = 0, promedioGeneral = 0;

    printf("Bienvenido al programa de cálculo de promedios \n");
    printf("");
    pedirNotas();

    return 0;
};

//Función para pedir notas y sacar promedios
pedirNotas(){
    int aux = 0;
    float alu1 = 0, alu2 = 0, alu3 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            printf("Ingrese las notas para el alumno %d: \n", i + 1);
            if (i == 0)
            {
                scanf("%d", &aux);
                alu1 = alu1 + aux;
                aux = 0;
            }
            else if (i == 1)
            {
                scanf("%d", &aux);
                alu2 = alu2 + aux;
                aux = 0;
            }
            else
            {
                scanf("%d", &aux);
                alu3 = alu3 + aux;
                aux = 0;
            }
        }
    }

    alu1 = alu1 / 5;
    alu2 = alu2 / 5;
    alu3 = alu3 / 5;

    printf("El promedio del alumno 1 es: %.2f \n", alu1);
    printf("El promedio del alumno 2 es: %.2f \n", alu2);
    printf("El promedio del alumno 3 es: %.2f \n", alu3);

    printf("El promedio general es: %.2f \n", ((alu1 + alu2 + alu3) / 3));

    return;
}