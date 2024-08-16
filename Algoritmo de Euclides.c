/*
| Descrição |

O algoritmo de Euclides é muito antigo e foi criado para calcular o MDC (Máximo Divisor Comum) de dois números. 
Esse algoritmo é mais eficiente do que calcular o MDC por fatoração. Sabemos que a divisão inteira é feita da seguinte forma:

A = D * Q + R

onde A é o número a ser dividido, D é o divisor, Q é o quociente da divisão inteira de A por D e R é o resto da divisão inteira.

Por exemplo, para calcular o MDC(36, 24):

36 = 24 * 1 + 12

Perceba que 12 é divisor de 36 e 24. Portanto, MDC(36, 24) = MDC(24, 12).

24 = 12 * 2 + 0

Como o resto é 0, sabemos que 12 divide 24. Assim, MDC(36, 24) = MDC(24, 12) = 12.

Em geral, o algoritmo de Euclides faz o seguinte:

1. Escolhe os dois números para encontrar o MDC(A, D).
2. Divide A por D. Se o resto não for zero, divide D pelo resto até encontrar um resto igual a 0.
3. Quando encontrar uma divisão com resto 0, o "D" dessa divisão será o MDC de A e D originais.


| Formato de entrada |
Dado o número de casos N, para cada caso, leia 2 números e calcule o MDC dos dois.

N

N1 N1'
N2 N2'...
NN NN'

Todos os números são inteiros.


| Formato de saída |
Para cada caso:

MDC(a, b) = R

onde a e b são os números para calcular o MDC na ordem em que foram dados e R é o resultado.

Não esqueça da quebra de linha no final de cada caso e fique atento aos espaçamentos.
*/



#include <stdio.h>

int mdc (int n1, int n2)
{    
    
    if (n2 == 0)
{
    return n1;
}
    else 
{   
  int resto = n1 % n2;
   return mdc(n2, resto);
}

}

int main ()
{   
    int numero1, numero2, resultado, casos;
    
    scanf("%d", &casos);
    
    
    for (int i = 1; i <= casos; i++) 
    
{
    scanf("%d %d", &numero1, &numero2);
    
    resultado = mdc(numero1, numero2);

    printf( "MDC(%d,%d) = %d\n", numero1, numero2, resultado);
    
}
    
   

    return 0;
}
