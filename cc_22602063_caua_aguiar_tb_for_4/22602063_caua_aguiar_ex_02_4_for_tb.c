#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int i, contador = 0;
    char tecla;

    for (i = 0; i <= 100; i++)
    {
        if (contador == 0)
        {
            system("cls");
            printf("CONVERSAO METROS – PES\n");
            printf("METROS \tPES\n");
        }

        printf("%d \t%.2f\n", i, i * 3.28084);

        contador++;

        if (contador == 20)
        {
            printf("\nPressione ENTER para continuar...");
            do
            {
                tecla = getchar();
            } while (tecla != '\n');

            contador = 0;
        }
    }
}
