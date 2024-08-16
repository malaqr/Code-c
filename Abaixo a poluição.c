/*
| Descrição |
Devido aos altos índices de poluição, uma cidade resolveu multar as casas que possuem mais de 2 veículos 
em R$ 12,89 por mês por cada veículo extra. Escreva um programa que receba como entrada a quantidade de veículos de várias residências,
até que seja informado o valor 999, e exiba o total mensal arrecadado com as multas, e a quantidade de casas multadas.

| Formato de entrada |
Vários números inteiros.

| Formato de saída |
Um valor real com duas casas decimais, seguido por uma quebra de linha e um valor inteiro.
*/

#include <stdio.h>


void loop (double soma, int casas)
{
    int numero;

    scanf ("%d", &numero);

    if (numero == 999)
    {
        printf ("%.2lf\n", soma);
        printf ("%d\n", casas);

        return;
    }

    else
    {

        if (numero > 2)
        {
            numero -= 2;

            soma += numero * 12.89;

            casas++;
        }


    }

    loop (soma, casas);
}



int main()
{

    loop(0,0);

    return 0;
}



