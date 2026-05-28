#include <stdio.h>

int main(){

    int distanciaMilimetro;
    int *pDistanciaMilimetro = &distanciaMilimetro;

    do{
        printf("digite uma distancia positiva em centimetro valida(max:2147483647): ");
        scanf("%d" ,pDistanciaMilimetro);
    }while(distanciaMilimetro>2147483647);

    if(*pDistanciaMilimetro<=0){
        printf("erro, numero invalido, encerrando programa");
    }
    else{

        float distanciaMetro = (*pDistanciaMilimetro)/100;
        float *pDistanciaMetro = &distanciaMetro;
        
        double distanciaKM = (*pDistanciaMetro/1000);
        double *pDistanciaKM = &distanciaKM;

        double distanciaMilhas = (*pDistanciaKM/1.60934);
        double *pDistanciaMilha = &distanciaMilhas;

        /*
        
        explique os dados utiizados

        */

        printf("milimetro: %d\nmetro: %f\nquilometro: %lf\nmilha: %lf" ,*pDistanciaMilimetro, *pDistanciaMetro, *pDistanciaKM, *pDistanciaMilha);
        }
    return 0;

}