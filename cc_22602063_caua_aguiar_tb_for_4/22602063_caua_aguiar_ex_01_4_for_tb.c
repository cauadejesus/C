#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// não sabia fazer esse e pedi ajuda da IA
void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int i, contador = 0;
    float c;
    char tecla;

    for (i = -50; i <= 50; i++)
    {
        if (contador == 0)
        {
            system("cls");
            printf("CONVERSAO FAHREINHEIT – CELSIUS\n");
            printf("CELSIUS    FAHREINHEIT\n");
        }

        c = (5.0/9.0) * (i - 32);
        printf("%.2f      %d\n", c, i);

        contador++;
        
        if (contador == 25)
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
