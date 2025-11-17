
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define DIM 20

int main(){

    int vettore[DIM],somma=0;
    srand (time(NULL));
    float media;
    

    // Inizializzazione del vettore con numeri casuali tra 1 e 100
    for(int i = 0; i < DIM; i++){
        vettore[i] = rand() % (23-8+1) + 8;
    }

    for(int i = 0; i < DIM; i++){
        somma += vettore[i];
    }

    media = (float)somma / DIM;

    printf("La somma degli elementi del vettore e': %d\n", somma);
    printf("La media degli elementi del vettore e': %.2f\n", media);

    // Stampa

}