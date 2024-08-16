/*
| Descrição |
Esse ano Robson pretende montar uma bela árvore de Natal na empresa em que trabalha. Ele combinou com os outros 20 funcionários de seu setor de comprar tudo e depois ratear o valor. Pesquisando numa loja, ele encontrou a árvore perfeita e três tipos de enfeites com bons preços.

Escreva um programa que receba como entrada o valor da árvore, a quantidade e o preço unitário de cada tipo de enfeite (observe o formato de entrada), calcule e exiba o total gasto e o valor a ser pago por cada funcionário do setor.

| Formato de entrada |
Números reais no seguinte formato:

1. A primeira linha contém o valor da árvore;
2. Seguem duas linhas para cada tipo de enfeite, contendo respectivamente sua quantidade (número inteiro) e seu valor (número real).

| Formato de saída |
Dois valores reais, cada um com duas casas decimais.
*/

#include <stdio.h>

void loop (double arvore, int vezes, double valor)
{
    double produto, quantidade, valorrepartido, total;

    if (vezes == 0)
    {   
        total = valor + arvore;
        valorrepartido = total / 21;


        printf("%.2lf\n", total);
        printf("%.2lf\n", valorrepartido);

        return;

    }

    else
    {
        scanf ("%lf", &quantidade);
        scanf ("%lf", &produto);

        valor += quantidade * produto;
    }

    loop (arvore, vezes-1, valor);
}

int main()
{
    double arvore;

    scanf("%lf", &arvore);

    loop(arvore, 3, 0);

    return 0;
}
