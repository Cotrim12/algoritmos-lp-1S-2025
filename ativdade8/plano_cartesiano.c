#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x;
    double y;
} Ponto;

double calcularDistancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main(int argc, char* argv[]){
    if(argc != 5){
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    Ponto a, b;

    a.x = atof(argv[1]);
    a.y = atof(argv[2]);
    b.x = atof(argv[3]);
    b.y = atof(argv[4]);

    double distancia = calcularDistancia(a, b);

    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0;
}