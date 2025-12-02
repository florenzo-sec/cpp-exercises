#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//memorizza in un vettore di 50 posti i primi 50 numeri naturali in ordine inverso

#define DIM 50

using namespace std;
int main(){
	
	int vet[DIM];
	
	for(int i = 0;i<DIM;i++){
		vet[i] = DIM-i-1;
			
	}
	
	for(int i=0;i<DIM;i++){
		printf("%d\n",vet[i]);
	}
	
	cout << endl;


	system("pause");
}

