#include <stdio.h>

// Função para calcular a área do retangulo
float calcular_area_retangulo(float base, float altura){
    return base * altura;
}

int main () {
    float base, altura;

    // Solicita os valores da base e da altura do retângulo
    printf("Digite o valor da base do retangulo:");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo:");
    scanf("%f",  &altura);

    // Calcula a área
    float area = calcular_area_retangulo(base, altura);

    // Exibe o resultado
    printf(" A area do retangulo eh: %.2f\n", area);

    return 0;
}