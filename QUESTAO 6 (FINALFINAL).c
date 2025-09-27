#include <stdio.h>
int main (){
           float valor;
    float desconto;
    float valorFinal;
    float desconto_sobre_valor;

    printf("Coloque o valor de um produto: ");
    scanf("%f", &valor);

    printf("Coloque o desconto: ");
    scanf("%f", &desconto);




    desconto_sobre_valor = valor * desconto/100;
    valorFinal = valor - desconto_sobre_valor;

    printf("----------------------------------------------------\n");
    printf("Valor original   | Valor do desconto | Valor final\n");
    printf("----------------------------------------------------\n");
    printf("%.2f             | %.2f              | %.2f\n", valor, desconto_sobre_valor, valorFinal);

    return 0;
}
