#include <stdio.h>
#define PI 3.14

// Função para calcular a área do círculo
float calcular_area_circulo(float raio) {
return PI * raio * raio;
}

int main(int argc, char* argv[]) {
    float raio;

    // Solicita o valor do raio do círculo
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área
    float area = calcular_area_circulo(raio);

    // Exibe o resultado
    printf("A area do circulo eh: %.2f\n", area);

    return 0;
}