#include <stdio.h>

int main(int argc, char* argv[]){

    /*
    MODOS DE ABERTURA DE ARQUIVO
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever no arquivo
    'a' -> criar, se não existir, e add ao final do arquivo
-*/ 
    

FILE *sexta = fopen("sexta.txt", "w");


if(sexta == NULL){
    printf("erro ao abrir arquivo.");
    return 1;
}

    fprintf(sexta, "Hello, World!");

    fclose(sexta);

    return 0;
}