#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
//valori random 14-25
//chiedere all'utente utente un numero 14-25 e stampare quante volte appare nel vettore

using namespace std;

int main(){

	int vet[DIM],num,input,conta=0;
	srand(time(NULL));
	
	do{
		printf("Inserisci un numero (14-25): ");
		scanf("%d",&input);
	}while(input<14 || input > 25);
	
	for(int i = 0;i<DIM;i++){
		num = rand()%(25-14+1)+14;
		vet[i] = num; 
		if(num==input){
			conta++;
		}
	}
	
	for(int i=0;i<DIM;i++){
		printf("%d\n",vet[i]);
	}
	
	printf("Il numero %d appare %d volte nel vettore\n", input,conta);
	

	system("pause");
}

