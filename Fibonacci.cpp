#include <stdlib.h>
#include <stdio.h>
//serie di fibonacci
using namespace std;
int main(){

	int n;
	int F1 = 0;
	int F2 = 1;
	int fib;
	
	do{
		printf("Quanti numeri devo stampare? ");//n>2
		scanf("%d",&n);
	}while(n<=2);
	
	printf("%3d\t%3d\t",F1,F2);
	
	while(n>2){
		fib = F1+F2;
		F1=F2;
		F2=fib;
		printf("%3d\t",fib);
		n--;
	}
	
	printf("\nFINE SERIE\n");
	
	system("pause");
}

