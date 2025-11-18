#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//continua a farsi dare dei numeri sommandoli, quando si arriva a 100, fermarsi
using namespace std;
int main(){

	int num,somma;
	
	do{
		cout << "Numero: ";
		cin >> num;
		somma+=num;
	}while(somma<100);
	
	cout << "Siamo arrivati a 100!" << endl;
	
	system("pause");
}

