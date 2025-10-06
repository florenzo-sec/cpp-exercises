#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// data l'età di una persona restituisci se è maggiorenne
using namespace std;
int main(){

	int eta;
	
	cout << "Quanti anni hai? " << endl;
	cin >> eta;
	
	if(eta>=18){
		cout << "Sei maggiorenne." << endl;
	}else{
		cout << "Sei minorennne." << endl;
	}


	system("pause");
}

