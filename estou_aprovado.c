/*
    |Descrição|
    
    Escreva um programa para verificar se um aluno está ou não aprovado.
    São realizadas 03 provas (prova 1, prova 2 e prova de reposição). Todos os alunos são obrigados a fazer todas as provas.
    Caso o aluno seja maior de idade, a média final é calculada com a média ponderada entre média aritmética das provas 1 e 2 (peso 6) e a nota da prova de reposição (peso 3).
    Caso o aluno seja menor de idade, a nota da prova de reposição só será considerada caso a nota da prova 1 ou prova 2 for menor do que 7. Nesse caso (alguma das notas da prova 1 e 2 forem menor do que 7), a média final será a média aritmética das duas maiores notas. 
    Caso contrário, a média final será a média aritmética das provas 1 e 2.
    O aluno será considerado aprovado quando a média final for igual ou maior que 5.5. Entretanto, há um requisito adicional, o aluno não pode ter nenhuma nota abaixo de 4.0. Caso contrário, será reprovado.
    Se o aluno estiver aprovado, o programa deve exibir a mensagem: "Aprovado". Caso contrário, deve exibir a mensagem: "Reprovado".
    
    |Formato de entrada|
    
    Idade do aluno (valor inteiro)
    Nota da prova 1 (valor real)
    Nota da prova 2 (valor real)
    Nota da prova de reposição (valor real)

    |Formato de saída|
    
    Se o aluno estiver aprovado, o programa deve exibir a mensagem: "Aprovado". Caso contrário, deve exibir a mensagem: "Reprovado".
*/

#include <stdio.h>

int main ()
{

int idade;
double p1, p2, p3, final, maior1, maior2;

scanf ("%d", &idade);
scanf ("%lf", &p1);
scanf ("%lf", &p2);
scanf ("%lf", &p3);

maior1 = p1;
maior2 = p2;

if (p2 > maior1)
{maior2 = maior1;
maior1 = p2;}

else if (p2 > maior2) 
{maior2 = p2;}

if (p3 > maior1)
{maior2 = maior1;
maior1 = p3;}

else if (p3 > maior2)
{maior2 = p3;}

if (idade >= 18)
{final = (((p1 * 6) + (p2 * 6) + (p3 * 3)) / 15);}

else if (idade < 18 && (p1 < 7 || p2 < 7))
{final = (maior1 + maior2) / 2;}

else if (idade < 18)
{final = (p1 + p2) / 2;}

if (p1 <= 4 || p2 <= 4 || p3 <= 4)
{printf ("Reprovado\n");}

else if (final >= 5.5 )
{printf ("Aprovado\n");}

else
{printf ("Reprovado\n");}



return 0;
}
