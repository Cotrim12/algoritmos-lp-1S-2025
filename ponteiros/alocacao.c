 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char* argv[]){

    int qtd_linhas = 0;
    float x, y;
    float numeros;

    FILE *arq = fopen("dados.txt", "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    while(fscanf(arq, "%f", &n) != EOF)
    {
        qtd_linhas++;
    }

    numeros = malloc(sizeof(float) * 16777216);

    printf("qtd_linhas = %d\n", qtd_linhas);

if(numeros != NULL){
    int i = 0;
fseek(arq, 0, SEEK_SET);
    while (fscanf(arq, "%f", &n) != EOF)
    {
        numeros[i] = n;
        i++;
    }
}
for (int i = 0; i < qtd_linhas; i++){
    printf("%f\n", numeros[i]);
}

   fclose(arq);

   return 0;
 }