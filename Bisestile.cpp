#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main(){

	int anno;
	
	cout << "Inserisci anno: ";
	cin >> anno;
	
	if(anno%4==0)
		cout << "L'anno e' bisestile." <<endl;
	else
		cout << "L'anno non e' bisestile." << endl;
	

	system("pause");
}

