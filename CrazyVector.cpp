#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;

int main() {
    const int DIM = 10;
    float vet[DIM];
    float min, max, somma = 0, media, varianza, deviazione;
    
    srand(time(NULL));

    // Caricamento vettore e somma
    for(int i = 0; i < DIM; i++){
        vet[i] = 3.0f + (float(rand()) / RAND_MAX) * 3.0f; // valori tra 3.0 e 6.0
        somma += vet[i];
    }

    // Calcolo media
    media = somma / DIM;

    // Calcolo min e max
    min = max = vet[0];
    for(int i = 1; i < DIM; i++){
        if(vet[i] < min) min = vet[i];
        if(vet[i] > max) max = vet[i];
    }

    // Calcolo varianza
    float sommaquad = 0;
    for(int i = 0; i < DIM; i++){
        sommaquad += pow(vet[i] - media, 2);
    }
    varianza = sommaquad / DIM;
    deviazione = sqrt(varianza);

    // Stampa
    for(int i = 0; i < DIM; i++){
        printf("%.2f\t", vet[i]);
    }
    cout << endl;

    printf("Min: %.2f\n", min);
    printf("Max: %.2f\n", max);
    printf("Media: %.2f\n", media);
    printf("Varianza: %.2f\n", varianza);
    printf("Deviazione standard: %.2f\n", deviazione);

    system("pause");
}


