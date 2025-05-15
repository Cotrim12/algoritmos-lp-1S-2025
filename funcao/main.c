#include <stdio.h>

int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2){
    // Código da funcao
    int opcao_valida;

    do{
        printf("Escolha uma opcao:\n&d - %s\n%d - %s\n ", opcao1);
        scanf("%d", &opcao_valida);
    }
    while(opcao_valida != opcao1 && opcao_valida != opcao2);
}

int main( int argc, char* argv[]){

    int opcao, resposta;

    opcao = ler_valor_valido(1, 0, "Iniciar quiz", "Sair");

    do{
    printf("Escolha uma opcao:\n1 Iniciar quiz\n0 - Sair");
    scanf("%d", &opcao);
    }
    while (opcao != 1 && opcao != 0);

    if (opcao ==1){
        do{
            printf("Qual a capital do Brasil\n1 - Quijingue\n2 - Brasilia\n");
            scanf("%d", &resposta);
        }
        while(resposta != 1 && resposta != 2);

        if(resposta == 2){
            printf("Voce acertou!\n");
        }
        else {
            printf("Pode melhorar!\n");
        }
    }

    return 0;
}