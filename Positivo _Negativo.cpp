#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// dato un numero restituire se positivo,negativo o neutro
using namespace std;
int main(){

	int num1;
	
	cout << "Inserisci un numero: ";
	cin >> num1;
	
	if(num1>0){
		cout << "Il numero " << num1 << " e' positivo."<<endl;
		
	}else if(num1<0){
		cout << "Il numero " << num1 <<" e' negativo." << endl;
		
	}else{
		cout << "Il numero " << num1 <<" e' neutro." <<endl;
	}
	

	system("pause");
}

