#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main(){
	
	srand(time(NULL)); // rand seed initialization
	
	int num = rand()%8+5; //rand()%(start-end+1)+start
	
	while(num>=0){
		cout <<num<< endl;
		num--;
	}

	

	system("pause");
}

