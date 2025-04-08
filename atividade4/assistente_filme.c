#include <stdio.h>

int main(int argc, char* argv []) {
   int tipoFilme, genero, escolhaFinal;

   printf("Escolha o tipo de filme:\n");
   printf("1 - Leve\n");
   printf("2 - Intenso\n");
   scanf("%d", &tipoFilme);

   if (tipoFilme == 1) {
       printf("\nFilmes leves selecionados!\n");
       printf("Escolha o genero:\n");
       printf("1 - Animacao\n");
       printf("2 - Comedia\n");
       scanf("%d", &genero);

       if (genero == 1) {
           printf("Uma recomendacao de filme para voce ver eh: Homem-Aranha no Aranhaverso\n");
       } else if (genero == 2) {
           printf("Uma recomendacao de filme para voce ver eh: Gente Grande\n");
       } else {
           printf("\nOpcao invalida.\n");
       }

   } else if (tipoFilme == 2) {
       printf("\nFilmes intensos selecionados!\n");
       printf("Escolha o genero:\n");
       printf("1 - Terror\n");
       printf("2 - Acao\n");
       scanf("%d", &genero);

       if (genero == 1) {
           printf("\nEscolha o tipo de terror:\n");
           printf("1 - Sobrenatural\n");
           printf("2 - Psicologico\n");
           scanf("%d", &escolhaFinal);

           if (escolhaFinal == 1) {
               printf("Uma recomendacao de filme para voce ver eh: Invocacao do Mal 2\n");
           } else if (escolhaFinal == 2) {
               printf("Uma recomendacao de filme para voce ver eh: Corra!\n");
           } else {
               printf("\nOpcao invalida.\n");
           }

       } else if (genero == 2) {
           printf("\nEscolha o tipo de acao:\n");
           printf("1 - Super herois\n");
           printf("2 - Aventura realista\n");
           scanf("%d", &escolhaFinal);

           if (escolhaFinal == 1) {
               printf("Uma recomendacao de filme para voce ver eh:: O Espetacular Homem Aranha 2\n");
           } else if (escolhaFinal == 2) {
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

   return 0;
}

    
   
   

   
   
   

     


