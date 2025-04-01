#include <stdio.h>

// Função para calcular a área do losango
float calcular_area_losango (float diagonal_maior, float diagonal_menor) {
    return (diagonal_maior * diagonal_menor) / 2;
}

int main (){
    float diagonal_maior, diagonal_menor;

    // Solicita os valores das diagonais do losango
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    // Calcula a área
    float area = calcular_area_losango(diagonal_maior, diagonal_menor);

    // Exibe o resultado
    printf("A area do losango eh: %.2f\n", area);

    return 0;
}