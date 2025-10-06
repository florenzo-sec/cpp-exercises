#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//dato un numero intero visualizza il triplo se è dispari, doppio se è pari.

int main()
{
	int num1;
	cout << "Inserisci un numero: ";
	cin >> num1;
	
	if(num1%2==0){
		cout << "Il doppio di " << num1 << " e' " << num1*2 << endl;
	}else{
		cout << "Il triplo di " << num1 << " e' " << num1*3 << endl;
	}
	



 	system ("pause");
}

