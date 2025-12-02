#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// definire matrice 5x4, caricare e stampare con numeri a caso

#define R 5
#define C 4

using namespace std;
int main(){
	
	srand(time(NULL));
	int mat[R][C],sommaR[R]={0, 0},sommaC[C]={0, 0};
	float media=0;

	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			mat[i][j] = rand()%10;
			sommaR[i] += mat[i][j];
			sommaC[j] += mat[i][j];
		}
	}
	
	//stampa + sommaR
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			printf("%2d\t",mat[i][j]);
		}
		printf("\t%2d",sommaR[i]);
		cout<<endl;
	}
	
	//sommac
	
	for(int i=0;i<C;i++){
		printf("%2d\t",sommaC[i]);
	}
	
	//media
	
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			media+=mat[i][j]/R*C;
		}
	}
	
	printf("\n\nMEDIA: %.2f\n",media);
	
	cout<<endl;
	
	
	

	system("pause");
}

