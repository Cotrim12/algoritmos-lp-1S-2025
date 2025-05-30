#include <stdio.h>

// Função para calcular o IMC
float calcularIMC(float peso, float altura){
    return peso / (altura * altura);
}

int main(int agrc, char* argv[]){
    int opcao;
    float peso, altura, imc;

    do{
// Entrada de dados
printf("Digite seu peso (kg): ");
scanf("%f", &peso);
printf("Digite sua altura (m): ");
scanf("%f", &altura);

// Cálculo do IMC
imc = calcularIMC (peso, altura);

// Exibição do resultado
printf("Seu IMC eh : %.2f\n", imc);

// Classificação do IMC
if (imc < 18.5)
    printf("Classificacao: abaixo do peso\n");
else if (imc >= 18.5 && imc < 24.9)
    printf("Classificacao: Peso normal\n");
else if (imc >= 25 && imc <29.9)    
    printf("Classificacao>: Sobrepeso\n");
else if (imc >= 30 && imc <34.9)
    printf("Classificacao: Obesidade grau 1\n");
else if (imc >= 35 && imc < 39.9)
    printf("Classificacao: Obesidade grau 2\n");
else
    printf("Classificacao: Obesidade grau 3 (morbida)\n");

    printf("Deseja calcular outro IMC?: \n");
    printf("0- Sim\n1 - Nao\n");
    scanf("%d", &opcao);
    }while (opcao == 0);

return 0;
    }