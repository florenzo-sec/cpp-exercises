#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//dato un numero positivo fai il conto alla rovescia
using namespace std;
int main(){
	
	int num;
	
	do{
		cout << "Numero: ";
		cin>>num;
	}while(num<=0);
	
	while(num>=0){
		cout << num << endl;
		num--;
	}
	

	system("pause");
}

