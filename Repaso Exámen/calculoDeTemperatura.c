/*
Programa que permite realizar conversión/pasaje de
temperatura entre C° y F°
*/

#include <stdio.h>

int pasajeDeTemp(int, int);
int menu_seleccion();

int main(void){
    int t, op;
    menu_seleccion();

    return 0;
}

int menu_seleccion(){
    int opcion = 0;
    int temp = 0;

    printf("\n\nBienvenido al programa de pasaje de temperatura!\n\n");
    printf("A continuacion debe elegir la opcion deseada: \n\n");
    printf("    ------------------------------- \n\n");
    printf("    1- Pasar de Celsius a Farenheit \n\n");
    printf("    2- Pasar de Farenheit a Celsius \n\n");
    printf("    3- Salir    \n\n");
    printf("    ------------------------------- \n\n");
    scanf("%d", &opcion);

    do {
        if (opcion == 1){
            printf("Ha elegido pasar de C° a F° \n\n");
            printf("Ingrese la temperatura a convertir: \n\n");
            scanf("%d", &temp);
            pasajeDeTemp(temp, opcion);
        } else if (opcion == 2){
            printf("Ha elegido pasar de F° a C° \n\n");
            printf("Ingrese la temperatura a convertir: \n\n");
            scanf("%d", &temp);
            pasajeDeTemp(temp, opcion);
        } else if (opcion == 3){
            printf("\n\nSaliendo del programa...\n\n");
            return 0;
        } else {
            printf("\n\nIngrese un dato valido \n\n");
            printf("A continuacion debe elegir la opcion deseada: \n\n");
            printf("    ------------------------------- \n\n");
            printf("    1- Pasar de Celsius a Farenheit \n\n");
            printf("    2- Pasar de Farenheit a Celsius \n\n");
            printf("    3- Salir    \n\n");
            printf("    ------------------------------- \n\n");
            scanf("%d", &opcion);
        }

        printf("    ------------------------------- \n\n");
        printf("    1- Pasar de Celsius a Farenheit \n\n");
        printf("    2- Pasar de Farenheit a Celsius \n\n");
        printf("    3- Salir    \n\n");
        printf("    ------------------------------- \n\n");
        scanf("%d", &opcion);
        
    } while (opcion > 1 || opcion <= 3);
    
};

int pasajeDeTemp(int t, int op){

    if(op == 1){
        t = (1.8 * t) + 32;
        printf("\nLa temperatura en grados F° es: %d °F \n\n", t);
    } else {
        t = ((t - 32) * 5) / 9;
        printf("\nLa temperatura en grados C° es: %d °C \n\n", t);
    }

    return 0;
};