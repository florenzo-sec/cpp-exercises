#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// dato un num positivo fare conto alla rovescia
using namespace std;

int main(){

	int num;
	
	do{
		printf("Numero: ");
		scanf("%d",&num);
		
	}while(num<=0);
	
	while(num>=0){
		printf("Numero: %3d\n",num);
		num--;
	}

	system("pause");
}

