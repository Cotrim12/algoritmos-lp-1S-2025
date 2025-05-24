#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]){

    int x, y, z;
    int *numeros = malloc(sizeof(int)*argc-1);

    if(argc < 3 ){
    printf("Informe 2 ou mais argumentos inteiros.");
    
    return 1;

    }

if(argc == 3){
    int x = atoi (argv[1]);
    int y = atoi (argv[2]);
    printf("%d", maior_2n(x, y));
}
else if (argc == 4){
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    z=atoi(argv[3]);
    printf("%d", maior_3n(x, y, z));
}
else{
    for(int i = 1 ; i < argc; i++){
        numeros[i-1] = atoi(argv[i]);
        printf("%d\n", numeros[i-1]);

    }
    printf("%d", maior_n(numeros, argc-1));
}

    return 0;
}