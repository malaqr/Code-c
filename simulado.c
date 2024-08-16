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
