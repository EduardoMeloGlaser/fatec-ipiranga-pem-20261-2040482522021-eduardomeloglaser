#include <stdio.h>

int main(){

    int n;
    int *pN = &n;

    printf("escreva um numero positivo >= 1: ");
    do{
        scanf("%d" ,pN);
    }while(n<1);

    do{

        if(n%2 == 0){   
            n = n/2;
        }
        else{         
            n = 3*n + 1;
        }
        printf("\n%d", *pN);
    }while(n != 1);

    return 0;

}