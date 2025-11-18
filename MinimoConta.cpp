#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//leggi 5 numeri da tastiera e restituisci il minimo e massimo
using namespace std;
int main(){
	
	int num,min,max;//input
		
	printf("Dammi un numero: ");
	scanf("%d",&num);
	num=min=max;
	
	for(int i = 2;i<=5;i++){
		printf("Dammi il numero %d: ",i);
		scanf("%d",&num);
		if(num<min){
			min = num;
		}
		else if(num>max){
			max = num;
		}
	}
	
	printf("Il numero piu' piccolo e': %d\n",min);
	printf("Il numero piu' grande e': %d\n",max);

	system("pause");
}

