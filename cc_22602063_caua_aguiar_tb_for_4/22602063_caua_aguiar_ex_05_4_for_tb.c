#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float peso, maior, menor;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Peso %d: ", i);
        scanf("%f", &peso);

        if (i == 1)
        {
            maior = menor = peso;
        }
        else
        {
            if (peso > maior)
                maior = peso;

            if (peso < menor)
                menor = peso;
        }
    }

    printf("Maior peso: %.2f\n", maior);
    printf("Menor peso: %.2f\n", menor);
}
