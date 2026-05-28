#include <stdio.h>

int main(){

    int i, j = 1;
    char escolha = 'S';

    do{

        for(i=1; i<11 && escolha == 'S' && escolha != 'N'; i++){

            printf("TABUADA DO NUMERO %d\n\n" ,i);
            while(j < 11){

                printf("%d: %d\n",j, i*j);

                j++;
            }
            printf("\n\nquer continuar?(digite 'S' para sim e 'N' para nao)\n");
            
            scanf(" %c" ,&escolha);

            while(escolha != 'S' && escolha != 'N'){
                printf("\ndigite um valor valido\n");
                scanf(" %c" ,&escolha);
            }
            j = 1;
            
        }


        
    }while(escolha != 'N');

    return 0;

}