#include <stdio.h>

float valorReais, cotaDolar;

float calculo(float valorReais, float cotaDolar);

int main() {
    printf("Insira o Valor em R$ que deseja converter: "); 
    scanf("%f", &valorReais); 

    printf("Insira a cotação do Dólar: "); 
    scanf("%f", &cotaDolar);

    printf("Resultado da conversão: %.2f\n", calculo(valorReais, cotaDolar));
    printf("Processo de cálculo: %.2f / %.2f = %.2f\n", valorReais, cotaDolar, calculo(valorReais, cotaDolar));

    return 0; 
}

float calculo(float valorReais, float cotaDolar) {
    return valorReais / cotaDolar;
}
