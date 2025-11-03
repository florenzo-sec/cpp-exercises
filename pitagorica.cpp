#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    int n = 10; // pitagoric table size

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d\t", i * j);
        }
        printf("\n");
    }

   system("pause");
}