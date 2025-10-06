#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// programma che legge due numeri e visualizza sullo schermo solo il maggiore di essi
// se sono uguali, scrive la frase "i due numeri sono uguali." 
using namespace std;
int main(){

	int num1,num2;
	
	cout << "Inserisci il primo numero: ";
	cin >> num1;
	cout << "Inserisci il secondo numero: ";
	cin >> num2;
	
	if(num1>num2){
		cout << "Il numero " << num1 << " e' maggiore del numero " << num2  << "." << endl;
 	}else if(num2>num1){
		cout << "Il numero " << num2 << " e' maggiore del numero " << num1  << "." << endl;
 	}else{
 		cout << "I due numeri sono uguali." << endl;	
	}

	system("pause");
}

