#include <stdio.h>

// Função para calcular a área do quadrado
float calcular_area_quadrado(float lado) {
    return lado * lado;
}

int main(int argc, char* argv[]){
    float lado;

    // Solicita o valor do lado do quadrado
    printf("Digite o valor do lado do quadrado:");
    scanf("%f", &lado);

    // Calcula a área
    float area = calcular_area_quadrado(lado);

    // Exibe o resultado
    printf("A area do quadrado eh: %2f\n", area);

    return 0;
}
