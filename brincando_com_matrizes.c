/*
| Descrição |
Escreva um programa que leia uma matriz 3 x 3 de inteiros da entrada padrão e calcule a média de todos os seus valores, o maior valor lido, o valor delta e a soma dos elementos da diagonal principal.

O delta é igual a 1 se o maior valor for positivo, -1 se for negativo e zero se for zero.

| Formato de entrada |
9 valores inteiros referentes aos elementos da matriz.

| Formato de saída |
4 valores numéricos: o primeiro é um número em ponto flutuante com duas casas decimais e os outros três são inteiros.
*/

#include <stdio.h>


int main()
{

    double arraybi [3][3]; // [LINHA] [COLUNA]

    double soma, media, maior_numero, delta, soma_diagonal;
    int i, j;

    maior_numero = -9999999;
    
    for (i = 0; i < 3 ; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf ("%lf", &arraybi [i][j]);
 
            soma = soma + arraybi [i][j];

            if (arraybi [i][j] > maior_numero)
            {
                maior_numero = arraybi [i][j];
            }

            if (maior_numero > 0)
            {
                delta = 1;
            }

            else if (maior_numero == 0)
            {
                delta = 0;
            }

            else
            {
                delta = -1;
            }
        }


    }

    media = soma / 9;

    soma_diagonal = arraybi [0][0] + arraybi [1][1] + arraybi [2][2];


    printf ("%.2lf %.0lf %.0lf %.0lf\n", media, maior_numero, delta, soma_diagonal );



    return 0;
}