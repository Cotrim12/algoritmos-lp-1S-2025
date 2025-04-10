#include <stdio.h>

int main(int argc, char* argv []) {
   int opcao;

do{
   printf("Escolha o tipo de filme:\n");
   printf("1 - Leve\n");
   printf("2 - Intenso\n");
   scanf("%d", &opcao);

   if (opcao == 1) {
       printf("\nFilmes leves selecionados!\n");
       printf("Escolha o genero:\n");
       printf("1 - Animacao\n");
       printf("2 - Comedia\n");
       scanf("%d", &opcao);

       if (opcao == 1) {
           printf("Uma recomendacao de filme para voce ver eh: Homem-Aranha no Aranhaverso\n");
       } else if (opcao == 2) {
           printf("Uma recomendacao de filme para voce ver eh: Gente Grande\n");
       } else {
           printf("\nOpcao invalida.\n");
       }

   } else if (opcao == 2) {
       printf("\nFilmes intensos selecionados!\n");
       printf("Escolha o genero:\n");
       printf("1 - Terror\n");
       printf("2 - Acao\n");
       scanf("%d", &opcao);

       if (opcao == 1) {
           printf("\nEscolha o tipo de terror:\n");
           printf("1 - Sobrenatural\n");
           printf("2 - Psicologico\n");
           scanf("%d", &opcao);

           if (opcao == 1) {
               printf("Uma recomendacao de filme para voce ver eh: Invocacao do Mal 2\n");
           } else if (opcao == 2) {
               printf("Uma recomendacao de filme para voce ver eh: Corra!\n");
           } else {
               printf("\nOpcao invalida.\n");
           }

       } else if (opcao == 2) {
           printf("\nEscolha o tipo de acao:\n");
           printf("1 - Super herois\n");
           printf("2 - Aventura realista\n");
           scanf("%d", opcao);

           if (opcao == 1) {
               printf("Uma recomendacao de filme para voce ver eh:: O Espetacular Homem Aranha 2\n");
           } else if (opcao == 2) {
               printf("Uma recomendacao de filme para voce ver eh: Top Gun: Maverick\n");
           } else {
               printf("\nOpcao invalida.\n");
           }
       } else {
    
           printf("\nOpcao invalida.\n");
       }

   } else {
       printf("\nOpcao invalida.\n");
   }
   printf("Deseja escolher um novo filme?\n");
   printf("0- Sim\n1 - Nao\n");
   scanf("%d", &opcao);
}while (opcao == 0);

   return 0;

}

    
   
   

   
   
   

     


