#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 30 //grandezza vettore

using namespace std; 

int main(){

    int num = 0;
    int pari[DIM],dispari[DIM]; //vettori 
    int contPari = 0, contDispari = 0; 
    srand(time(NULL)); //inizializzazione seed della funzione rand

    for(int i = 0; i<DIM;i++){
        num = rand()%101; // genera numeri casuali tra 0 e 100
        if(num%2==0){
            pari[contPari]=num;
            contPari++;
        }else{
            dispari[contDispari]=num;
            contDispari++;
        }   
    }

    //stampa risultati
    printf("\nNumeri pari\n");
    for(int i = 0;i<contPari;i++){
        printf("%d\t", pari[i]);
    }
    printf("\nNumeri dispari\n");
    for(int i = 0;i<contDispari;i++){
        printf("%d\t", dispari[i]);
    }
}