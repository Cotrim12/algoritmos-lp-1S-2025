#include <stdio.h>

int main (int argc, char* argv[]){

    int qtdAlunos = 0;

    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &qtdAlunos);

    float notas[100];

    for(int i = 0; i < qtdAlunos; i++){
        do {
            printf("\nDigite a nota do aluno %d (entre 0.0 e 10.0): ", i);
            scanf("%f", &notas[i]);
    
            if(notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota invalida! Tente novamente.\n");
            }
    
        } while(notas[i] < 0.0 || notas[i] > 10.0);
    }
    

for(int i = 0; i < qtdAlunos; i++){
    printf("\nNota do aluno %d: %.2f ", i, notas[i]);
}

   float soma = 0;
   for(int i = 0; i < qtdAlunos; i++) {
    soma += notas[i];
   } 

   float media = soma / qtdAlunos;
   printf("\nMedia da turma: %.2f\n", media);

   float maior = notas[0];
   float menor = notas[0];
   for(int i = 1; i < qtdAlunos; i++) {
    if(notas[i] > maior) {
        maior = notas[i];
    }
    if(notas[i] < menor) {
        menor = notas[i];
    }
   }
   printf("Maior nota: %.2f\n", maior);
   printf("Menor nota: %.2f\n", menor);

   int aprovados = 0;
   for(int i = 0; i < qtdAlunos; i++) {
    if(notas[i] >= 6.0) {
        aprovados++;
    }
   }
   printf("Alunos aprovados (nota >= 6.0): %d\n", aprovados);

   int k = -1;
do {
    printf("Informe a posicao k do aluno (0 ate %d): ", qtdAlunos - 1);
    scanf("%d", &k);

    if (k < 0 || k >= qtdAlunos) {
        printf("Posicao invalida! Tente novamente.\n");
    }
} while (k < 0 || k >= qtdAlunos);

printf("Nota do aluno na posicao %d: %.2f\n", k, notas[k]);

   return 0;

}