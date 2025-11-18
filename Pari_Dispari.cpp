#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// dato un numero restituire se è pari o dispari
using namespace std;
int main(){
	
	int num1;
	
	cout << "Inserisci un numero: ";
	cin >> num1;
	
	if(num1%2==0){
		cout << "Il numero " << num1<< " e' pari." << endl;
	}else{
		cout << "Il numero " << num1 << " e' dispari." << endl;
	}


	system("pause");
}

