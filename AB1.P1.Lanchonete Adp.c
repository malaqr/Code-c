/*
| Descrição |
O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade de cada item da tabela, respectivamente, e calcule a conta final.

Hambúrguer.................. R$ 3,00
Cheeseburger............... R$ 2,50
Fritas....................... R$ 2,50
Refrigerante................. R$ 1,00
Milkshake.................... R$ 3,00

| Formato de entrada |
Os valores devem ser lidos por linha em formato inteiro. Caso o usuário não tenha consumido algum item, este deve ser informado com valor igual a zero.

| Formato de saída |
O resultado deve ser exibido com a frase "conta final:" e com o tipo float.
*/

#include <stdio.h>
int main()
{

    double p1, p2, p3, p4, p5, final;


    scanf("%lf", &p1);


    scanf ("%lf", &p2);

  
    scanf("%lf", &p3);

 
    scanf("%lf", &p4);


    scanf("%lf", &p5);

    final = (p1 * 3.0) + (p2 * 2.50) + (p3 * 2.50) + (p4 * 1.0) + (p5 * 3.0);

    printf("conta final: %.1lf", final);





    return 0;
}