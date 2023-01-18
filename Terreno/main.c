#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite a comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = valor * area;

    printf("Area do terreno = %lf" ,area);


    printf("Preco do terreno = %lf",preco);


}
