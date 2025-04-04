#include <stdio.h>

int main(int argc, char* argv []) {

   float teste;

    printf("1 - Escolha o tipo de filme: \n");
    printf("1 - leve\n");
    printf("2 - intenso\n");
    scanf("%f", &teste);

   if (teste == 1){
    printf("Escolha entre Acao ou comedia: \n");
    printf("1 - Animacao\n");
    printf("2 - Comedia\n");
    scanf("%f", &teste);

}
   if (teste == 1){
      printf("Uma recomendacao de filme de animacao para voce ver eh: Homem Aranha: atraves do aranha verso\n ");
      scanf("%f, &teste");
   }

    return 0;
   
      

}
