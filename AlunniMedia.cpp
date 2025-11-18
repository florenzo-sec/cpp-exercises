#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int alunni, voto;
    int voti = 5;
    float media = 0;

    do {
        printf("Quanti alunni?: ");
        scanf("%d", &alunni);
    } while (alunni <= 0);

    for (int i = 0; i < alunni; i++) {
        float somma = 0; 
        for (int j = 0; j < voti; j++) {
            printf("Inserisci un voto: ");
            scanf("%d", &voto);
            somma += voto;
        }
        media = somma / voti;
        printf("Media alunno %d: %.2f\n", i + 1, media);
    }
    
   
    system("pause");
}


