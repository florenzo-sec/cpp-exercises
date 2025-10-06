#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//dato un numero casuale,indovinalo accumulando e mandando a schermo gli errori
using namespace std;
int main(){
	
	srand(time(NULL)); // rand seed initialization
	
	int num = rand()%11;
	int guess,guessAcc;
	
	while(guess!=num){
		
		cout <<"Indovina il numero: ";
		cin >> guess;
		
		if(guess==num){
			cout << "Hai indovinato!" <<endl;
			system("pause");
		}else{
			cout<<"Mi dispiace hai sbagliato!"<<endl;
			guessAcc++;
		}
	}

	system("pause");
}

