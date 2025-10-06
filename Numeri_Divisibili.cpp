#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// dati due numeri restituire se il primo è divisibile per il secondo
using namespace std;
int main(){

	int num1,num2;
	
	cout << "Inserisci il primo numero: ";
	cin >> num1;
	cout << "Inserisci il secondo numero: ";
	cin >> num2;
	
	if(num1%num2==0){
		cout<<"I due numeri sono divisibili." << endl;
	}else{
		cout << "I due numeri non sono divisibili." << endl;
	}

	system("pause");
}

