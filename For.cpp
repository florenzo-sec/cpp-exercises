#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	for(int i = 1;i<=100;i+=2){
		printf("%3d\t",i);
		if(i%5==0){
           printf("\n");
		}
	}	

	system("pause");
}

