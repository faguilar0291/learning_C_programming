#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#define TOPE 5

void cargarVector(int[]);
void mostrarVector(int[]);
void sumarVector(int[]);

int main(){

    int vector[TOPE];
    system("cls");
    cargarVector(vector);
    mostrarVector(vector);
    sumarVector(vector);


    return 0;
};

void cargarVector(int a[]){
    int i;
    for ( i = 0; i < TOPE; i++){
        printf("\nIngrese dato <%d> de <%d> : ", i+1, TOPE);
        scanf("%d", &a[i]);
    }

};

void mostrarVector(int a[]){
    int i;
    for (i = 0; i < TOPE; i++){
        printf("\nDato <%d> : <%d> \n", i+1, a[i]);
    };
    printf("\n");
};

void sumarVector(int a[]){
    int i, aux = 0;
    for (i = 0; i < TOPE; i++){
        aux = aux + a[i];
    }

    printf("\nLa suma del vector da %d \n\n", aux);
};