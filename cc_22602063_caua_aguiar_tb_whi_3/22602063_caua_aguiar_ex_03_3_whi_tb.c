#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int n, cont = 0, soma = 0;

    printf("Digite numeros (-1 para sair): ");
    scanf("%d", &n);

    while (n != -1)
    {
        printf("%d, ", n);

        soma += n;
        cont++;

        scanf("%d", &n);
    }

    printf("\nQuantidade: %d\n", cont);
    printf("Soma: %d\n", soma);
}
