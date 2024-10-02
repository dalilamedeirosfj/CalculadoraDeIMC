#include <stdio.h>
#include "calculadora.h"
#include <locale.h>

// Função principal
int main() {
    float peso, altura, imc_resultado;

    // Configura o idioma para português do Brasil
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Solicita ao usuário o peso e a altura
    printf("Informe seu peso (kg, ex: 70.5): ");
    scanf("%f", &peso);

    printf("Informe sua altura (m, ex: 1.75): ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc_resultado = calcular_imc(peso, altura); // Alterei o nome da função para ser mais descritivo

    // Mostra o resultado do IMC
    printf("Seu Índice de Massa Corporal (IMC) é: %.2f\n", imc_resultado);

    // Classificação do IMC
    if (imc_resultado < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc_resultado >= 18.5 && imc_resultado < 25) {
        printf("Classificação: Peso saudável\n");
    } else if (imc_resultado >= 25 && imc_resultado < 30) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }

    return 0;
}
