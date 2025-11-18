#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
//dato num restituire sqrt
int main(){

	int num;
	float rad;
	float quad,cubo;
	
	do{
		printf("Numero: ");
		scanf("%d",&num);
	}while(num<0);
	
	rad = sqrt(num);
	quad = pow(num,2);
	cubo = pow(num,3);
	
	
	printf("\nRadice: %.2f\n",rad);
	printf("\nQuadrato: %.2f\n",quad);
	printf("\nCubo: %.2f\n",cubo);
	

	system("pause");
}

