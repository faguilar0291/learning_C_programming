#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#define TOPE_VECTOR 5

void cargarVector(int[]);
void mostrarVector(int[]);

int main(){

    int vector[TOPE_VECTOR];
    system("cls");
    cargarVector(vector);
    mostrarVector(vector);

    return 0;
}

void cargarVector(int a[]){
    int i;
    for ( i = 0; i < TOPE_VECTOR; i++){
        printf("\nIngrese dato <%d> de <%d> : ", i+1, TOPE_VECTOR);
        scanf("%d", &a[i]);
    }
};

void mostrarVector(int b[]){
    int i;
    for (i = 0; i < TOPE_VECTOR; i++){
        printf("\nDato <%d> : <%d> ", i+1, b[i]);
    };
};