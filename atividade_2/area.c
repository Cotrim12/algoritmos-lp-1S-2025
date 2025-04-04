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
    
    switch (opcao)
    
case 'c':
    printf("Circulo\n");
    float calcular_area_circulo(float raio) 
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
    float calcular_area_losango (float diagonal_maior, float diagonal_menor) 
    return (diagonal_maior * diagonal_menor) / 2;
     printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);
     float area = calcular_area_losango(diagonal_maior, diagonal_menor);
     printf("A area do losango eh: %.2f\n", area);

    break;
case'q':
    printf("Quadrado\n");
    float calcular_area_quadrado(float lado) 
    return lado * lado;
    printf("Digite o valor do lado do quadrado:");
    scanf("%f", &lado);
     float area = calcular_area_quadrado(lado);
     printf("A area do quadrado eh: %2f\n", area);

    break;
case'r':
    printf("Retangulo\n");
    float calcular_area_retangulo(float base, float altura)
    return base * altura;
    printf("Digite o valor da base do retangulo:");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo:");
    scanf("%f",  &altura);
    float area = calcular_area_retangulo(base, altura);
    printf(" A area do retangulo eh: %.2f\n", area);

    break;
case't':
    printf("Triangulo\n");
    float calcular_area_triangulo(float base , float altura){
    return (base * altura) / 2;
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);
     float area = calcular_area_triangulo(base, altura);
      printf("A area do triangulo eh: %.2f\n", area);

    break;
case'z':
    printf("Trapezio\n");
    float calcular_area_trapezio(float base_maior, float base_menor, float altura) {
    return ((base_maior + base_menor) * altura) / 2;
     printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base_menor: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);
     float area = calcular_area_trapezio(base_maior, base_menor, altura);
      printf("A area do trapezio eh : %.2f\n", area);

    break;
default:
    printf("Opcao invalida");

    }
    
    return 0;
}