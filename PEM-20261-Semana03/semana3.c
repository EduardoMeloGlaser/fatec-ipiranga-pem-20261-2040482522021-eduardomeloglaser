#include <stdio.h>
#include <string.h>

struct produto{
    char nomeProduto[50];
    int idProduto;
};

int main(){

    int i, crud , nomeUpdate, idDeletar, vfespaco = 1, pesquisa;

    struct produto listaProduto[10];
    for(i=0;i<10;i++){
        strcpy(listaProduto[i].nomeProduto, "sem_valor");
    }

    do{
        printf("\nEscolha uma das 4 opcoes a seguir para proseguir:\n1 - criar\n2 - ler\n3 - atualizar\n4 - deletar\n5 - encerrar programa\n");
        scanf("%d" ,&crud);

        switch(crud){

            case 1:
                
                for(i=0;strcmp(listaProduto[i].nomeProduto, "sem_valor");i++){
                    if(i == 10){
                        vfespaco = 0;
                        break;
                    }
                }
                if(vfespaco == 1){
                    for(i=0;strcmp(listaProduto[i].nomeProduto, "sem_valor");i++);
                    printf("\nescreva o nome do produto:\n");
                    scanf("%s" ,&listaProduto[i].nomeProduto);
                    listaProduto[i].idProduto = i+1;
                }
                else{
                    printf("\nnumero maximo de produtos atingido");
                    vfespaco = 1;
                }
            break;

            case 2:
                do{
                    printf("digite um ID de produto para encontra-lo:\n\ndigite 11 para cancelar a operacao");
                    scanf("%d" ,&pesquisa);

                }while(listaProduto[pesquisa-1].idProduto != pesquisa && pesquisa != 11);

                if(pesquisa == 11){
                    printf("operacao cancelada");
                }
                else{
                    printf("\no produto de ID: %d e o %s\n", listaProduto[pesquisa-1].idProduto, listaProduto[pesquisa-1].nomeProduto);
                }

            break;

            case 3:
                printf("escolha um desses nomes para alterar:\n");
                printf("\nprodutos registrados:\n");
                for(i=0;i<10;i++){
                    if(strcmp(listaProduto[i].nomeProduto, "sem_valor") != 0){
                     printf("ID: %d - %s\n" ,listaProduto[i].idProduto, listaProduto[i].nomeProduto);
                    }
                }
                scanf("%d" ,&nomeUpdate);
                if(strcmp(listaProduto[nomeUpdate-1].nomeProduto, "sem_valor") != 0){
                    printf("\naltere o nome: \n");
                    scanf("%s" ,listaProduto[nomeUpdate-1].nomeProduto);
                }
                else{
                    printf("digite um numero valido");

                }
                
            break;

            case 4:
                printf("escolha um desses nomes para deletar:\n");
                printf("\nprodutos registrados:\n");
                for(i=0;i<10;i++){
                    if(strcmp(listaProduto[i].nomeProduto, "sem_valor") != 0){
                        printf("ID: %d - %s\n" ,listaProduto[i].idProduto, listaProduto[i].nomeProduto);
                    }
                }
                scanf("%d" ,&idDeletar);
                strcpy(listaProduto[idDeletar-1].nomeProduto, "sem_valor");
            break;

            case 5:
                printf("programa encerrado");
            break;

            default:
                printf("digite um numero valido");
            break;
        }
    }while(crud != 5);
return 0;

}