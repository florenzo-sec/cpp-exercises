#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//dato un numero positivo, fare il count down, zero compreso
using namespace std;
int main(){

	int num;
	
	cout << "Inserisci il numero: ";
	cin >> num;
	
	while(num>=0){
		cout <<num<<endl;
		num--;
	}

	system("pause");
}

