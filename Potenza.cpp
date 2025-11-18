#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//calcola potenza di un num, esponente positivo o nullo, usando ciclo while o for
using namespace std;
int main(){

	int b,e; //b = base, e = esponente
	long double result = 1;
	
	do{
		printf("Base: ");
		scanf("%d",&b);
		printf("Esponente:");
		scanf("%d",&e);
	}while(e<0);
	
	for(;e>0;e--){
		result*=b;
	}
	
	printf("Risultato: %.1Lf\n",result);
	

	system("pause");
}

