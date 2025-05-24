#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]){
        int x, y, z;
        int*numeros = malloc(sizeof(int)*(argc - 1));

         if (argc < 3) {
        printf("Informe 2 ou mais argumentos inteiros.\n");
        return 1;
    }

    if (argc == 3) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        printf("Menor: %d\n", menor_2n(x, y));
    }
    else if (argc == 4) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);
        printf("Menor: %d\n", menor_3n(x, y, z));
    }
    else {
        for (int i = 1; i < argc; i++) {
            numeros[i - 1] = atoi(argv[i]);
        }
        printf("Menor: %d\n", menor_n(numeros, argc - 1));
    }

    free(numeros);
    return 0;
}

