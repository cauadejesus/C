#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float inicio, fim, f, c;

    printf("Valor inicial: ");
    scanf("%f", &inicio);

    printf("Valor final: ");
    scanf("%f", &fim);

    printf("\nCONVERSAO FAHREINHEIT – CELSIUS");
    printf("\nFAHREINHEIT \tCELSIUS");

    f = inicio;

    while (f <= fim)
    {
        c = (5.0/9.0) * (f - 32);
        printf("\n%.2f \t\t%.2f\n", f, c);
        f++;
    }
}
