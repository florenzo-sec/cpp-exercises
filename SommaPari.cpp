#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//leggi dieci numeri e restituisci somma dei numeri pari
using namespace std;
int main(){
	
	int num;
	int somma=0;
	
	for(int i = 10;i>0;i--){
		printf("Inserisci un numero: ");
		scanf("%d",&num);
		if(num%2==0){
			somma+=num;
		}
	}
	
	printf("Somma: %d\n",somma);


	system("pause");
}

