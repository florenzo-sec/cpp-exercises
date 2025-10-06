#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//leggi due numeri, se sono diversi, visualizza la media, se sono uguali scrivi il numero stesso.

int main()
{
	int num1,num2;
	
	cout << "Inserisci il primo numero: ";
	cin >> num1;
	cout << "Inserisci il secondo numero: ";
	cin >> num2;
	
	if(num1!=num2){
		cout << "La media e' " << float(num1 + num2)/2 << endl;	
	}else{
		cout << "Il numero e' " << num1 <<endl;
	}



 	system ("pause");
}

