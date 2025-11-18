#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//creaiamo un vettore interi dim 10
//carico e stampo


using namespace std;
int main(){
	
	const int DIM = 10;
	
	int vet[DIM],i;
	
	for(i=0;i<DIM;i++){
		printf("Numero posizione %d: ",i+1);
		scanf("%d",&vet[i]);	
	}
	
	for(i=0;i<DIM;i++){
		printf("%d\t",vet[i]);
	}
	
	printf("\n");
	
	
		
	
	

	system("pause");
}

