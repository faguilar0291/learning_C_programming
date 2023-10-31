/*
Programa que permite pasar caracteres de minúscula 
a mayúscula
*/
#include <stdio.h>

char minus_a_mayus (char c1){
    char c2;
    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a') : c1 ;
    return (c2);
}

main() {
    char minus, mayus;
    printf("Ingrese una letra minúscula: \n");
    scanf("%c", &minus);
    mayus = minus_a_mayus(minus);
    printf("La mayúscula esquivalente es: %c \n\n", mayus);
}

