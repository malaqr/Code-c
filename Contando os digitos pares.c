/*|Descrição|
Escreva uma função recursiva chamada ContaDigitosPares que receba como entrada um número e retorne a quantidade de dígitos pares que o compõem.

Ex: 234 tem 3 dígitos, mas apenas 2 são pares

|Formato de entrada|

Um número inteiro

|Formato de saída|

Um número inteiro*/


int ContaDigitosPares (int n)
{
    if (n == 0)
    {
        return 0;
    }



    int ultimodigito = n % 10;
    int quantidadepares = (ultimodigito % 2 == 0) ? 1 : 0;

    int digitosrestantes = n / 10;

    return quantidadepares + ContaDigitosPares(digitosrestantes);
}



int main()
{
    int x;

    scanf (" %d", &x);

        printf ("%d\n", ContaDigitosPares (x));

    return 0;    
}