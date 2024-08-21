/*
| Descrição |
Escrever um algoritmo que lê 5 valores para "a", um de cada vez, e conta quantos destes são negativos, escrevendo esta informação.

| Formato de entrada |
Os 5 valores digitados, um por vez.

| Formato de saída |
A quantidade de números negativos digitados.
*/

#include <stdio.h>

int main()
{   
    double a1, a2, a3, a4, a5;
    int quantidade_negativos = 0;

    printf("Digite um valor:\n");
    scanf("%lf", &a1);

    printf("Digite um valor:\n");
    scanf("%lf", &a2);

    printf("Digite um valor:\n");
    scanf("%lf", &a3);

    printf("Digite um valor:\n");
    scanf("%lf", &a4);

    printf("Digite um valor:\n");
    scanf("%lf", &a5);

    if (a1 <= 0)
    {
        quantidade_negativos += 1;
    }

    if (a2 <= 0)
    {
        quantidade_negativos += 1;
    }

    if (a3 <= 0)
    {
        quantidade_negativos += 1;
    }

    if (a4 <= 0)
    {
        quantidade_negativos += 1;
    }

    if (a5 <= 0)
    {
        quantidade_negativos += 1;
    }

    printf("Foram digitados %d numeros negativos\n", quantidade_negativos);

    return 0;
}