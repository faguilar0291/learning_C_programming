#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#define TOPE 50

void cargarVector(int[]);
void mostrarVector(int[]);
void buscarRepetidos(int[]);


int main(){
    int aleatorio = 0;
    int vector[TOPE];
    //semilla aleatorio
    srand (time(NULL));
    cargarVector(vector);
    mostrarVector(vector);
    buscarRepetidos(vector);

};

void cargarVector(int a[]){
    int i, aleatorio;

    for ( i = 0; i < TOPE; i++){
        for (int i = 0; i < TOPE; i++){
        aleatorio = rand()%11 + 10;
        a[i] = aleatorio;
        };
    }
};

void mostrarVector(int a[]){
    int i;
    for (i = 0; i < TOPE; i++){
        printf("\nDato <%d> : <%d> \n", i+1, a[i]);
    };
    printf("\n");
};

void buscarRepetidos(int a[]){
    int i, aux = 0, contador = 0;

    for (i = 0; i < TOPE; i++){
        
        if (a[i] > aux){
            aux = a[i];
        }
    };

    for (i = 0; i < TOPE; i++){
        
        if (a[i] == aux){
            contador += 1;
            printf("\nContador sumo 1\n");
        }
    };


    printf("\nEl mayor %d se repitió %d veces\n", aux, contador);
}