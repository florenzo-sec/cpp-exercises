#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//leggi un numero da 1 a 7 e stampa il giorno corrispondente della settimana
using namespace std;
int main(){
	
	int giorno;
	
	cout << "Inserisci il giorno: ";
	cin >> giorno;
	
	switch(giorno){
		
		case 1:
			cout <<"Lunedi" << endl;
			break;
		case 2:
			cout <<"Martedi" << endl;
			break;
		case 3:
			cout <<"Mercoledi" << endl;
			break;
		case 4:
			cout <<"Giovedi" << endl;
			break;
		case 5:
			cout <<"Venerdi" << endl;
			break;
		case 6:
			cout <<"Sabato" << endl;
			break;
		case 7:
			cout <<"Domenica" << endl;
			break;
		default:
			cout << "Giorno invalido." << endl;
		
	}


	system("pause");
}

