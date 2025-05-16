// Retorna o maior entre os 2 números inteiros
int maior_2n(int a, int b);
int maior_3n(int a, int b, int c);

// Retorna o maior entre N números
int maior_n(int numeros[], int n){
    if(n == 2){
        return maior_2n(numeros[n-2], numeros[n-1]);
    }
    else{
        return maior_n(numeros, numeros[n-1])
    }

}