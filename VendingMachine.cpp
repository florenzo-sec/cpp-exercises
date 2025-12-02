#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//Choose product by checking if card has enough balance for the product and print if balance is sufficient
using namespace std;

int main(){
	int product;
	float balance;

	printf("Enter the amount of money on your card: \n");
	scanf("%f",&balance);
	
	printf("1.\tShort coffee\n");
	printf("2.\tLong coffee\n");
	printf("3.\tCappuccino\n");
	printf("4.\tCoke\n");
	printf("5.\tFries\n");
	printf("Choose a product: (1-5)\n");
	scanf("%d",&product);
		
	
	switch(product){
		case 1:
			if(balance>=0.5){printf("Here's your short coffee!\n");}else{printf("Insufficient Balance.\n");}
			break;
		case 2:
			if(balance>=0.5){printf("Here's your long coffee!\n");}else{printf("Insufficient Balance.\n");}
			break;
		case 3:
			if(balance>=0.6){printf("Here's your cappuccino!\n");}else{printf("Insufficient Balance.\n");}
			break;
		case 4:
			if(balance>=1){printf("Here's your Coke!\n");}else{printf("Insufficient Balance.\n");}
			break;
		case 5:
			if(balance>=0.8){printf("Here's your fries!\n");}else{printf("Insufficient balance.\n");}
			break;
		default:
			printf("Product not available.\n");
	}
	
	system("pause");
}

