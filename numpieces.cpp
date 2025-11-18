#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//if n= 3 then sale = 10%,if n=5 then sale = 15%, if n>5 then sale = 20%
//ask for n of pieces and for the total price, then detracts the sale from the total price
int main(){
    int n;
    float totalPrice, discount;

    printf("Enter the number of pieces: ");
    scanf("%d", &n);
    printf("Enter the total price: ");
    scanf("%f", &totalPrice);

    if (n <= 3) {
        discount = 0.10; // 10% discount
    } else if (n <= 5 && n > 3) {
        discount = 0.15; // 15% discount
    } else if (n > 5) {
        discount = 0.20; // 20% discount
    } else {
        discount = 0.0; // No discount
    }

    totalPrice = totalPrice * (1 - discount);
    printf("Total price after discount: %.2f\n", totalPrice);

    system("pause");
}