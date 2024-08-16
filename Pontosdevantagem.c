#include <stdio.h>

int pontosdevantagempar( int numero, int par, int impar)
{
    
    
    
    
    if (numero / 10 == 0 && numero % 2 == 0)
    {
        return par + numero;
    }
    else if (numero / 10 == 0 && numero % 2 != 0)
    {
        return par;
    }


    else
    {
    
        if ( (numero % 10) % 2 == 0 )
        {
            par = par + (numero % 10);
            return pontosdevantagempar (numero/10, par, impar);
        }

        else 
        {
            impar = impar + (numero % 10);
            return pontosdevantagempar (numero/10, par, impar);
        }
    }
}

int pontosdevantagemimpar(int numero, int par, int impar)
{
   if (numero / 10 == 0 && numero % 2 == 0)
    {
        return impar;
    }
    
    else if (numero / 10 == 0 && numero % 2 != 0 )
    {
        return impar + numero;
    }
      
      
    else
    {
    
        if ( (numero % 10) % 2 == 0 )
        {
            par = par + (numero % 10);
            return pontosdevantagemimpar (numero/10, par, impar);
        }

        else 
        {
            impar = impar + (numero % 10);
            return pontosdevantagemimpar (numero/10, par, impar);
        }
    }

}


int main ()

{
    int numero;


    scanf("%d", &numero);

    printf ("Pares %d\n", pontosdevantagempar(numero, 0, 0));
    printf ("Impares %d\n", pontosdevantagemimpar(numero, 0, 0));

    return 0;
}