#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// facendosi dare un numero, accendere lampadine, le lampadine sono subordinate al numero
using namespace std;
int main(){
	
	int num;
	
	cout << "Quante lampadine devo accendere?(max 3): ";
	cin >> num;
	
	switch(num){
		
		case 3:
			cout << "Tre lampadine si sono accese." << endl;	
		case 2:
			cout << "Due lampadine si sono accese." << endl;
		case 1:
			cout << "Una lampadina si e' accesa." << endl;
			break;	
			
		default:
			cout << "Numero invalido di lampadine." << endl;
	}

	system("pause");
}

