#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// crea numero casuale 10-25
//max tentativi 5
using namespace std;

int main(){

	int crea;
	int conta = 0;
	int num;
	bool flag;
	
	// creo numero
	srand(time(NULL));
	crea = rand()%16+10;
	
	do{
		printf("Numero: ");
		scanf("%d", &num);
		conta++;
		if(crea>num){
			printf("Il numero deve essere maggiore\n");
		}else if(crea<num){
			printf("Il numero deve essere minore\n");
		}else{
			flag=true;
		}
	}while((num!=crea) && (conta<5));
	
	if(flag){
		printf("Hai indovinato in %d tentativi. ",conta);
	}

	system("pause");
}

