/*
Descricao:
Leia um inteiro N.

Depois, leia ate 20 inteiros X0, X1, ..., X20. Seu programa deve imprimir quantas vezes o inteiro N aparece nos X inteiros.



|Formato de entrada|

Um inteiro N seguido de ate 20 inteiros (Caso -1 apareca, a entrada para).


|Formato de saida|

Quantas vezes N apareceu.
"N apareceu a vezes"

*/

#include <stdio.h>



int repeticao (int i, int quantidade_de_vezes, int numero, int numeroinicial)
{

    scanf("%d", &numero);

    if (i == 0)
    {
        return quantidade_de_vezes;
    }

    if (numero == -1)
    {
        return quantidade_de_vezes;
    }

    else
    {
        if (numero == numeroinicial)
        {
            quantidade_de_vezes += 1;
        }

        repeticao (i -1 , quantidade_de_vezes, numero, numeroinicial);

    }


}







int main()
{
    int numero_inicial;

    scanf ("%d", &numero_inicial);

    printf("%d aparece %d vezes", numero_inicial, repeticao(19 , 0 , 0, numero_inicial));
    
    

    return 0;
}


