#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#define TOPE 10


int main(){
    int aleatorio = 0;
    //semilla aleatorio
    srand (time(NULL));

    for (int i = 0; i < TOPE; i++){
        aleatorio = rand()%11 + 10;
        printf("\nAleatorio : %d \n", aleatorio);
    };

};