#include <stdio.h>

int main(){
    int soma=0, vetor[6] = {1,2,3,4,5,6};
    int *p = vetor;
    
    for(int i=0; i<6;i++,p++){
        printf("%d: %d\nENDERECO: %p\n\n",i,*p,p);
        soma += *p;
    }

    printf("\n\nVETOR DOBRADO\n\n");

    for(int i=0; i<6;i++,p++){
        printf("%d: %d\nENDERECO: %p\n\n",i,(*p)*2, p);
    }
    printf("\n\nsoma dos valores do vetor: %d\n\n", soma);
    
    printf("o tamanho de int e: %d bytes\no espacamento entre os valores do vetor e: %d bytes" ,sizeof(int), sizeof((p+1)-p));

    return 0;
}