#include <stdio.h>

int main(){

    float pesoKG, altura;
    float *pPesoKG = &pesoKG, *pAltura =&altura;

    /*
    Abaixo de 18.5     -> Abaixo do peso
    18.5 <= IMC < 25   -> Peso normal
    25.0 <= IMC < 30   -> Sobrepeso
    IMC >= 30          -> Obesidade
    */

    printf("CALCULO DE IMC\n\ndigite seu peso em KG: ");
    scanf("%f", pPesoKG);

    do{
        printf("digite um valor valido: ");
        scanf("%f", pPesoKG);
    }while(*pPesoKG <= 0);

    printf("\ndigite sua altura em metros: ");
    scanf("%f", pAltura);

    do{
        printf("digite um valor valido: ");
        scanf("%f", pAltura);
    }while(*pAltura <= 0);

    float IMC = pesoKG/(altura*altura);

    if(IMC < 18.5){
        printf("\nIMC = %.2f abaixo do peso", IMC);
    }
    else if(IMC < 25){
        printf("\nIMC = %.2f Peso Normal", IMC);
    }
    else if(IMC < 30){
        printf("\nIMC = %.2f Sobrepeso", IMC);
    }
    else{
        printf("\nIMC = %.2f Obesidade", IMC);
    }
    
    return 0;

}