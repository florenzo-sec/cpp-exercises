#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// leggi un numero e scrivilo a video solo se tale numero è divisibile per 5
using namespace std;
int main(){

	int num;
	
	cout << "Inserisci il numero: ";
	cin >> num;
	
	if(num%5==0){
		cout << "Il numero " << num << " e' divisibile per 5." << endl;
	}else{
		cout << "Il numero " << num << " non e' divisibile per 5." << endl;
	}

	system("pause");
}

