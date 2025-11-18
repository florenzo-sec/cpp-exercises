#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

//chiedi un numero e verifica se quadrato == somma dei numeri dispari

int main(){

	int num;
	printf("Numero: ");
	scanf("%d",&num);
	int quad = pow(num,2);
	int somma = 0;
	
	for(int i=1;i<=quad;i+=2){
	    somma+=i;
	    printf("Somma: %d",somma);
	}
	
	
	
	

	system("pause");
}

