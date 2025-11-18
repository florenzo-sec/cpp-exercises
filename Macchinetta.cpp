#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//Scegli prodotto controllando se chiavetta ha abbastanza fondi per il prodotto e fare un printf se fondi sufficienti
using namespace std;

int main(){
	int prodotto;
	float fondi=2;
	
	printf("1.\tCaffe Ristretto\n");
	printf("2.\tCaffe Lungo\n");
	printf("3.\tCappuccino\n");
	printf("4.\tCoca Cola\n");
	printf("5.\tPatatine\n");
	printf("Scegli un prodotto: (1-5)\n");
	scanf("%d",&prodotto);
		
	
	switch(prodotto){
		case 1:
			if(fondi>=0.5){printf("Ecco il tuo caffe ristretto!\n");}else{printf("Fondi insufficienti.\n");}
			break;
		case 2:
			if(fondi>=0.5){printf("Ecco il tuo caffe lungo!\n");}else{printf("Fondi insufficienti.\n");}
			break;
		case 3:
			if(fondi>=0.5){printf("Ecco il tuo cappuccino!\n");}else{printf("Fondi insufficienti.\n");}
			break;
		case 4:
			if(fondi>=1){printf("Ecco la tua Coca Cola!\n");}else{printf("Fondi insufficienti.\n");}
			break;
		case 5:
			if(fondi>=1){printf("Ecco le tue patatine!\n");}else{printf("Fondi insufficienti.\n");}
			break;
		default:
			printf("Prodotto non valido.");
	}
	
	
	switch(prodotto)


	system("pause");
}

