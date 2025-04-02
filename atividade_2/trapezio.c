#include <stdio.h>

// Função para calcular a área do trapézio
float calcular_area_trapezio(float base_maior, float base_menor, float altura) {
    return ((base_maior + base_menor) * altura) / 2;
}

int main() {
    float base_maior, base_menor, altura;

    // Solicita os valores das bases e da altura
    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base_menor: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);

    // Calcula a área
    float area = calcular_area_trapezio(base_maior, base_menor, altura);

    // Exibe o resultado
    printf("A area do trapezio eh : %.2f\n", area);

    return 0;
}