#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//calcola quanta gente entra in un cinema e la somma delle età
using namespace std;
int main(){
	
	int anni,somma,conta;
	float media;
	char exit;
	
	do {
    cout << "Anni: ";
    cin >> anni;
    somma += anni;

    cout << "C'e' ancora qualcuno (S/N): ";
    cin >> exit;

    if (exit != 'n') {
        conta++;  // aumenta int conta solo se exit diverso da 'n'
    }

	}while(exit!='n');
	
	cout << "Sono entrate " << conta << " persone."  << endl;
	
	media = (float)somma/conta;
	
	cout << "Media: " << media << endl;

	system("pause");
}

