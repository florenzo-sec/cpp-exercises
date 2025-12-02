#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define DIM 10
//carichiamo vet di DIM 10, generando valori casuali 14-50, lo stampo sia il vet che il numero più piccolo
using namespace std;
int main(){

	int vet[DIM],num=0,min;
	srand(time(NULL));
	
	for(int i=0;i<DIM;i++){
		vet[i] = rand()%(50-14+1)+14;
		if(i!=0){ //controllo index 0
			if(vet[i]<min){ //controllo se index attuale < min
				min=vet[i]; 
			}
		}else{
			min=vet[i]; // inizializzazione se index=0
		}
	}
	
	for(int i=0;i<DIM;i++){	
		printf("%d\t",vet[i]);
	} 
	
	printf("\nMINIMO: %d\n",min);
	
	system("pause");
}

