#include <stdio.h>
#define PI 3.14
#inc-lude <math.h>

int main(int argc, char* argv[]){
    float raio;


char opcao;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);
    
    switch (opcao){
    
case 'c':
    printf("Circulo\n");
    float calcular_area_circulo(float raio) {
return PI * raio * raio;
printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área
    float area = calcular_area_circulo(raio);

    // Exibe o resultado
    printf("A area do circulo eh: %.2f\n", area);


    break;
case 'l':
    printf("Losango\n");
    break;
case'q':
    printf("Quadrado\n");
    break;
case'r':
    printf("Retangulo\n");
    break;
case't':
    printf("Triangulo\n");
    break;
case'z':
    printf("Trapezio\n");
    break;
default:
    printf("Opcao invalida");

    }
    
    return 0;
}