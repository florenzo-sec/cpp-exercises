#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 20
//creiamo un vettore con valori int casuali di index max 20

using namespace std;
int main(){
	
	int vet[MAX];
	int i = 0;
	srand(time(NULL));
	
	for(i;i<MAX;i++){
		vet[i] = rand()%36+11;
		
	}
	
	printf("\nVettore:\n");
	
	for(i=0; i < MAX; i++){
		printf("%3d\t",vet[i]);
	}
	printf("\n");
	printf("%d\n",sizeof(vet));

	system("pause");
}

