#include <stdio.h>

int main ()
{   int a, b;
    double p1, p2, p3, p4, p5, preco, resultado;
    
    printf ("P1\n");
    scanf("%lf", &p1);
    
    printf ("P2\n");
    scanf("%lf", &p2);

    printf ("P3\n");
    scanf("%lf", &p3);

    printf ("P4\n");
    scanf("%lf", &p4);

    printf ("P5\n");
    scanf("%lf", &p5);

    printf ("Preco da pocao\n");
    scanf("%lf", &preco);
     
    
    resultado = (((p1 + p2 + p3 + p4 + p5) / 5) / preco);

    printf ("O resultado e: %.5lf\n", resultado);
    
    
    
    
    
    
    
    
    
    
    return 0;
    }

