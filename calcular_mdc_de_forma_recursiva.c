/*
|Descrição|
Dois números naturais sempre têm divisores comuns. Por exemplo: os divisores comuns de 12 e 18 são 1,2,3 e 6. 
Dentre eles, 6 é o maior. 
Então chamamos o 6 de máximo divisor comum de 12 e 18 e indicamos m.d.c.(12,18) = 6.

Desenvolva uma função recursiva para calcular o m.d.c de dois inteiros.



|Formato de entrada|

Dois inteiros positivos.



|Formato de saída|

Um inteiro positivo.
*/

#include <stdio.h>


int mdc(int a, int b) 
{
    
    if (b == 0) 
    {
        return a;
    } 
    
    else 
    {
        
        return mdc(b, a % b);
    }
}

int main() 
{
    int x, y, resultado;


    scanf(" %d %d", &x, &y);
    
    resultado = mdc(x, y);


    printf( "%d\n", resultado);

    return 0;
}