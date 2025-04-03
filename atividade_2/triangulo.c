#include <stdio.h>

// Função para calcular a área do triângulo
float calcular_area_triangulo(float base , float altura){
    return (base * altura) / 2;

}

int main (int argc, char* argv[]){
    float base, altura;

    // Solicita os valores da base e da altura do triângulo
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    // Calcula a área
    float area = calcular_area_triangulo(base, altura);

    // Exibe o resultado
    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
}