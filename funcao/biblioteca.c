//Retorna o maior entre 2 numeros inteiros.
int maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

// Retorna o maior entre 3 numeros inteiros
int maior_3n(int a, int b, int c){
return maior_2n(maior_2n(a,b), c);
}

int maior_n(int numeros[], int n){
    int maior = numeros[0];
    for(int i - 0; i < n; i++)
    maior = maior_2n(maior, numeros[i]);
}

// Verifica se um numero é primo

int verificar_numero_primo(int n){

    if(n < 2){
        return 0;
    }

    if(n % 2 == 0){
        return 0;
    }

    for(int i = 3; i < n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }


    return 1;

}