#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// dato un numero restituire se si trova nel range 5-28
using namespace std;
int main(){
	
	int num;
	
	cout << "Inserisci il numero: ";
	cin >> num;
	
	if(num >= 5 && num <= 28){ 
		cout << "Il numero va bene." << endl;
	}else{
		cout << "Il numero non va bene." <<endl;
	}



	system("pause");
}

