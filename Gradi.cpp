#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// converti gradi celsius in fahreneit e kelvin, e se e' minore dello zero assoluto(-273.15 F ) ritorna errore
using namespace std;
int main(){

	float celsius,fahreneit,kelvin;
	
	cout << "Inserisci i dati in celsius: ";
	cin >> celsius;
	
	if(celsius < -273.15){
		cout << "Il valore e' sotto lo zero assoluto." << endl;
	}else{
		fahreneit = float((9/5) * celsius + 32);
		kelvin = float(celsius + 273.15);
		cout << "Valore in fahreneit: " << fahreneit << endl;
		cout << "Valore in kelvin: " << kelvin << endl;
	}
	
	

	system("pause");
}

