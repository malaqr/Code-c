#include <stdio.h>
int main(){


    double p1, p2, p3, p4, p5, final;

    printf("Quantos Hamburguers?\n");
    scanf("%lf", &p1);

    printf("Quantos Cheeseburger?\n");
    scanf ("%lf", &p2);

    printf("Quantas Fritas?\n");
    scanf("%lf", &p3);

    printf("Quantos Refrigerantes?\n");
    scanf("%lf", &p4);

    printf("Quantos Milkshakes?\n");
    scanf("%lf", &p5);

    final = (p1 * 3.0) + (p2 * 2.50) + (p3 * 2.50) + (p4 * 1.0) + (p5 * 3.0);

    printf("conta final: %.1lf", final);





















    return 0;
}