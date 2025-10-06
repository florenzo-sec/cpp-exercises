#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//calcolatrice, dati due numeri restituire somma, sottrazione, moltiplicazione e divisione
using namespace std;
int main(){
	
	int num1,num2;//input declaration
	int result;//output declaration
	float divisione; //dichiarata come float perchè facilmente il risultato è decimale

	cout << "Inserisci il primo numero [ENTER]: " << endl;
	cin >> num1;
	cout << "Inserisci il secondo numero [ENTER]: " << endl;
	cin >> num2;
	
	result = num1 + num2;
	cout << "Addizione: " << result << endl; 
	
	result = num1 - num2;
	cout << "Sottrazione: " << result << endl; 
	
	result = num1 * num2;
	cout << "Moltiplicazione: " << result << endl; 
	
	if(num2==0){
		cout << "Divisione per zero non permessa." << endl;
		return 0;
	}
	
	divisione = (float)num1 / num2;
	cout << "Divisione: " << divisione << endl; 
	
	result = num1 % num2;
	cout << "Resto divisone: " << result << endl;
    
			
	system("pause");
	
}

