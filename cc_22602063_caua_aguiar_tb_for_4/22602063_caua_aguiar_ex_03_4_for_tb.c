#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int inicio, fim, i;

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    for (i = inicio; i <= fim; i++)
    {
        printf("%d ", i);
    }
}
