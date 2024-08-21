/*
|Descrição|
Uma empresa de importação de produtos eletrônicos em parceria com o CIn deseja fazer um programa que calcule o valor final do produto e discrimine na nota fiscal quanto o cliente pagou em impostos(Imposto de importação e ICMS), 
frete e total a pagar. Segue algumas informações que você precisará saber para resolver essa questão:



A taxa de importação para eletrônicos é de 60%;
O calculo do ICMS é dado pela formula: (Valor Final do produto x Aliquota)
O valor final do produto é dado pela soma do (Valor do Produto + Frete + Impostos de Importação) / (1 - Aliquota)
A empresa tema cultura de não adicionar o frete no calculo, para valores de US$ 2,500 em diante. Informe isso ao fim da nota.


|EXEMPLOS:|
>>> 
-----------Calculadora de impostos-----------
Informe a cotação do dolar (USD): 3.85
Informe a aliquota do ICMS (%): 18
Informe o valor do produto: 1000
Informe o valor do frete: 100
---------------------------------------------




---------------------Nota Fiscal---------------------
IMPOSTOS DE IMPORTAÇÃO                     VALOR (R$)
-----------------------------------------------------
Taxa de conversão monetária:                     3.85
Valor produto:                                 3850.0
Valor frete:                                    385.0
Valor total:                                   4235.0
-----------------------------------------------------
Imposto de importação:                         2541.0
ICMS:                                          1487.41
Total de impostos:                             4028.41
-----------------------------------------------------
TOTAL A PAGAR:                                8263.41
-----------Impostos calculados com o frete-----------

>>> 
-----------Calculadora de impostos-----------
Informe a cotação do dolar (USD): 3.85
Informe a aliquota do ICMS (%): 18
Informe o valor do produto: 2500
Informe o valor do frete: 200
---------------------------------------------

---------------------Nota Fiscal---------------------
IMPOSTOS DE IMPORTAÇÃO                     VALOR (R$)
-----------------------------------------------------
Taxa de conversão monetária:                     3.85
Valor produto:                                 9625.0
Valor frete:                                    770.0
Valor total:                                   10395.0
-----------------------------------------------------
Imposto de importação:                         5775.0
ICMS:                                          3380.49
Total de impostos:                             9155.49
-----------------------------------------------------
TOTAL A PAGAR:                                19550.49
-----------Impostos calculados sem o frete------------


|Formato de entrada|

-Cotação do Dolar
-Aliquota(%) do ICMS
-Valor do produto
-Valor do frete	

|Formato de saída|

-Taxa de conversão monetária (Cotação do dolar)
-Valor do produto (em reais)
-Valor do frete (em reais)
-Valor total (Valor do frete + Valor do produto)
-Valor de impostos de importação
-Valor de icms
-Total de Impostos (Importação + ICMS)
-Total a pagar
-Dizer se o total foi ou não isento do frete no calculo
*/


#include <stdio.h>




int main()
{

    double dolar, aliquota_icms, valor_do_produto_US, frete_US, produto_em_BR, frete_BR, valortotal_BR, valor_imposto_importacao;
    double valor_final, ICMS, total_imposto, valor_final_semfrete;
    double frete;

    scanf ("%lf", &dolar);
    scanf ("%lf", &aliquota_icms);
    scanf ("%lf", &valor_do_produto_US);
    scanf ("%lf", &frete_US);

    if (valor_do_produto_US >= 2500)
    {
    produto_em_BR = dolar * valor_do_produto_US;

    frete_BR = dolar * frete_US;

    valortotal_BR = frete_BR + produto_em_BR;

    valor_imposto_importacao = produto_em_BR * 0.6;

    valor_final = ((produto_em_BR + valor_imposto_importacao) / (1 - (aliquota_icms / 100))) + frete_BR ;

    valor_final_semfrete = ((produto_em_BR + valor_imposto_importacao) / (1 - (aliquota_icms / 100)));


    ICMS = valor_final_semfrete * (aliquota_icms/100);

    total_imposto = ICMS + valor_imposto_importacao;

       
    } 

    else
    {
    produto_em_BR = dolar * valor_do_produto_US;

    frete_BR = dolar * frete_US;

    valortotal_BR = frete_BR + produto_em_BR;

    valor_imposto_importacao = valortotal_BR * 0.6;

    valor_final = (valortotal_BR + valor_imposto_importacao) / (1 - (aliquota_icms / 100));

    ICMS = valor_final * (aliquota_icms/100);

    total_imposto = ICMS + valor_imposto_importacao;
    }
    



    printf ("%.2lf\n", dolar);
    printf ("%.2lf\n", produto_em_BR);
    printf ("%.2lf\n", frete_BR);
    printf ("%.2lf\n", valortotal_BR);
    printf ("%.2lf\n", valor_imposto_importacao);
    printf ("%.2lf\n", ICMS);
    printf ("%.2lf\n", total_imposto);
    printf ("%.2lf\n", valor_final);

    if (valor_do_produto_US >= 2500)
    {
        printf ("Impostos calculados sem o frete\n");
    }

    else
    {
        printf ("Impostos calculados com o frete\n");
    }
    


    return 0;
}