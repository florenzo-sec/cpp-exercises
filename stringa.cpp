#include <stdio.h>
#include <string.h>

//dichiarare vettore di tipo char dove mettiamo una frase

int main(){
    char vet[20] = "Questa e una frase";
    
    printf("Pari\n");
    for(int i=0;vet[i]!='\0';i++){

        if(i%2==0){
            printf("%c",vet[i]);
        }else{
            printf("_");
        }   
    }
    printf("\n");
    printf("Dispari\n");
    for(int i=0;vet[i]!='\0';i++){

        if(i%2==0){
            printf("_");
        }else{
            printf("%c",vet[i]);
        }
        
    }
    return 0;    

}