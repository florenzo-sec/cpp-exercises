#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//dato un num positivo calcolare fattoriale
int main(){

	int num;
	
	do{
		printf("Num: ");
		scanf("%d",&num);
	}while(num<0);
	
	int factorial = num;	
	
	if(num==0){
		factorial = 1;	
	}else{
		
		for(num;num!=1;num--){
		factorial*=num-1;
	}
	}
	
	printf("Factorial: %d\n",factorial);

	system("pause");
}

