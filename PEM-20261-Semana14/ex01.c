#include <stdio.h>

int main(){

    double nota[3] = { 0 };
    int peso[3] = { 0 };

    double *pNota = nota;
    int *pPeso = peso;

    printf("digite as 3 notas do aluno: ");

    for(int i=0; i<3; i++){
        scanf("%lf" ,pNota + i);
    }

    printf("\ndigite respectivamente o peso das 3 notas: ");

    for(int i=0; i<3; i++){
        scanf("%d" ,pPeso + i);
    }

    double media = ((nota[0]*peso[0])+(nota[1]*peso[1])+(nota[2]*peso[2]))/(peso[0]+peso[1]+peso[2]);

    printf("\na media do aluno foi: %.2lf", media);

    printf("\ntamanho em bytes:\n\nnota: %zu bytes\npeso: %zu bytes\nmedia: %zu bytes", sizeof(nota), sizeof(peso),sizeof(media));

    return 0;

}