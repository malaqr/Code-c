/**
    -----|Descrição|----------------------------------------------

    A Black Friday é uma famosa promoção que ocorre em diversas lojas após o Dia de Ação de Graças Americano. Genésio não acredita muito nas propagandas e acha que é tudo enrolação e que os descontos não são tão bons assim.
    
    Por isso, ele resolveu fazer uma pesquisa numa loja online. Ele anotou o preço de 5 produtos uma semana antes e no dia da promoção para ver se o desconto de 20% anunciado tinha sido realmente aplicado.
    
    Escreva um programa que receba como entrada os preços original e com desconto de cada produto, e exiba ao final quantos realmente tiveram abatimento de pelo menos 20%.
    
    ----|Formato de entrada|------------------------------------

    
    Valores reais
    
    ----|Formato de saída|--------------------------------------
    

    Um valor inteiro
    --------------------------------------------------------------
*/

//os printf comentados foram para saber como estava os valores em tempo de execução na recurção,para identificar o error que estava dand.

#include <stdio.h>

void loop (int vezes, int contador)
{
    double preco1, preco2, resultado;

    if (vezes == 0)
    {
        printf("%d\n", contador);
        return;
    }

    else
    {
        scanf ("%lf", &preco1);
        scanf ("%lf", &preco2);

       //printf ("\t%.2lf\n", (preco1 * 0.8))
       // printf ("\t%lf\n", preco2);

       resultado = preco1 * 0.80;

        if (resultado >= preco2)
        {
            contador++;
        }
        //printf ("\t%d\n", contador);
        loop (vezes -1, contador);

    }


}


int main()
{

    loop(5, 0);

    return 0;
}
