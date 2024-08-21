/* |Descrição|
Escreva um programa que receba como entrada dois números 
e retorne a quantidade de números positivos menores que 50 que são múltiplos de ambos.


|Formato de entrada|

Dois números inteiros quaisquer


|Formato de saída|

Um número inteiro

*/

#include <stdio.h>

void loop (int n1, int n2, int numerodeambos, int contador)
{
    if ( contador == 0)
    {
        printf ("%d\n", numerodeambos);
        return;
    }

    else
    {
        if (contador % n1 == 0 && contador % n2 == 0 )
        {
            numerodeambos++;
        }

        loop (n1, n2, numerodeambos, contador-1);
    }


}



int main()
{
    int numero1, numero2;

    scanf ("%d", &numero1);
    scanf ("%d", &numero2);

    loop(numero1, numero2, 0, 49);


    return 0;
}