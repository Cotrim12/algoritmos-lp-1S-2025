#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){

if (argc != 4) {
  printf("Uso correto: %s <min> <max> <esperado>\n");
  return 1;
}

int min = atoi(argv[1]);
int max = atoi(argv[2]);
int esperado = atoi(argv[3]);

if (min >= max) {
  printf("Erro: O valor minimo deve ser maior que o  maximo\n");
  return 1;
}

if (esperado < min || esperado > max) {
  printf("Erro: O valor esperado deve estar entre o minimo e o maximo (inclusive)\n");
  return 1;
}

srand(time(NULL));
int sorteado = rand() % (max - min + 1) + min;

char*resultado = (sorteado == esperado) ? "sorteado" : " nao sorteado";

printf("numero minimo: %d\n", min);
printf("numero maximo: %d\n", max);
printf("numero esperado: %d\n", esperado);
printf("numero sorteado: %d\n", sorteado);
printf("resultado: %s\n", resultado);

FILE *arquivo = fopen("log.txt", "a");
if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo log.txt");
    return 1;
}

fprintf(arquivo, "numero minimo: %d\n", min);
fprintf(arquivo, "numero maximo: %d\n", max);
fprintf(arquivo, "numero esperado: %d\n", esperado);
fprintf(arquivo, "numero sorteado: %d\n", sorteado);
fprintf(arquivo, "resultado: %s\n", min);
fprintf(arquivo, "--------------\n");

fclose(arquivo);


  return 0;
}