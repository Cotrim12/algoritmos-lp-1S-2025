#include <stdio.h>

int main(int argc, char* argv[]){

    int primeiro_numero, i, primo;

    printf("Escolha um numero:\n");
    scanf("%d", &primeiro_numero);

    if(primeiro_numero <= 1) {
    primo = 0;
    }else{

        for ( i = 2; i * i <= primeiro_numero; i++) {
            if(primeiro_numero % i == 0){
                primo = 0;
                break;
            }
        }
    }

    if(primo) {
        printf(" O numero %d eh primo\n", primeiro_numero);
    }else{
       printf(" O numero %d nao eh primo\n", primeiro_numero);
    }

    return 0;

    }

    
