#include <stdio.h>

int primo (int numero, int start)
{   
    if (start == numero )
    {
        return printf("0\n");
        scanf ("%d\n", &numero);
    }

    
    else
    {
        if (numero % start != 0)
        {
            return primo (numero, start + 1);
        }

        else
        {
            return printf("1\n");
            scanf ("%d\n", &numero);
        }
    }

}

void loop ()
{
    int numero;
    scanf("%d", &numero);

    if (numero != -1)
    {
        scanf("%d", &numero);
        loop ();
    }

    else
    {
        break;
    }
}





int main()
{

int numero;
scanf("%d", &numero);

primo (numero, 2);

loop();

return 0;
}
