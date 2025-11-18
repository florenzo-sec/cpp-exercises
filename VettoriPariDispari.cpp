#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define DIM 30

using namespace std;

int main() {
    int num, pari[DIM], dispari[DIM];
    int contaPari = 0, contaDispari = 0;
    srand(time(NULL));

    for (int i = 0; i < DIM; i++) {
        num = rand() % 101;
        if (num % 2 == 0) {
            pari[contaPari] = num;
            contaPari++; 
        } else {
            dispari[contaDispari] = num;
            contaDispari++; 
        }
    }

    printf("\nNUMERI PARI (%d)\n",contaPari);
    for (int i = 0; i < contaPari; i++) {
        printf("%d\t", pari[i]);
    }

    printf("\nNUMERI DISPARI (%d)\n",contaDispari);
    for (int i = 0; i < contaDispari; i++) {
        printf("%d\t", dispari[i]);
    }

    cout << endl;
    system("pause");
    return 0;
}

