#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    float H = 0;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        H += 1.0 / i;
    }

    printf("H = %.2f\n", H);
}
