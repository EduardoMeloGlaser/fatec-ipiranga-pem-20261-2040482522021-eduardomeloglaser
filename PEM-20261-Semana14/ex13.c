#include <stdio.h>

int maximoDivisorComum(int n){ //arrumar
    int menorDivisor;
    for(int i=n/2; i>1;i--){
        if(n%i == 0){
            menorDivisor = i;
        }
    }
    return menorDivisor;
};

int potenciaInteira(int base, int expoente){ 
    if(expoente == 1){
        return base;
    }
    return base*potenciaInteira(base,--expoente);
};

int verificadorNumeroPrimo(int n){
//verificar se um numero so pode ser dividido por 1 e por ele msm
    int encontrar = 0; 
    for(int i = n/2;encontrar < 1 || i == 1; i--){
        if(n%i == 0){
            encontrar = 1;
        }
    }
    return encontrar;
};

int conversaoDecimalBinario(int n){
    
    if(n == 1){
        printf("1");
        return 1;
    }
    
    conversaoDecimalBinario(n/2); 
    printf("%d", n%2);
};
void scan(int *p){
    scanf("%d" ,*p);
    return;
}


int main(){

int n, escolha;
int expoente;

int *pN=&n, *pEscolha = &escolha, *pExpoente = &expoente;

printf("ESCOLHA UMA OPCAO PARA PROSSEGUIR:\n\n1-Maximo divisor comum\n2-Potencia\n3-Verificar se e primo\n4-Converter para binario\n0-Sair");

do{
    scan(pEscolha);
    switch(escolha){
        case 1: //corrigir
            scan(pN);
            printf("%d", maximoDivisorComum(n));
            break;
        case 2:
            printf("\ndigite respectivamente o numero e o expoente: ");
            scan(pN);
            scan(pExpoente);
            printf("%d", potenciaInteira(n,expoente));
            break;
        case 3:
        printf("\ndigite o numero para verificar se ele e primo: ");
            scan(pN);
            if(verificadorNumeroPrimo(n) == 1){
                printf("\no numero e primo");
            }
            else{
                printf("\no numero nao e primo");
            }
            break;
        case 4:
            printf("\ndigite um numero para ele ser convertido em binario: ");
            scan(pN);
            conversaoDecimalBinario(n);
            break;
        case 5:
            printf("\nprograma encerrado");
            break;
        default:
            printf("\nescolha um numero valido");
            break;
    }
    

    

    
    

}while(escolha != 0);
}