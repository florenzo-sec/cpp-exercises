#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int somma = 0;

    // Calcolo della somma dei numeri da 1 a 100
    for (int i = 1; i <= 100; i++) {
        somma += i;
    }

    printf("La somma dei numeri da 1 a 100 e': %d\n", somma);

    system("pause");
}