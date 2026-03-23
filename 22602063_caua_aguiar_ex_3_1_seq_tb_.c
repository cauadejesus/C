#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Base = %.2f\n", base);
    printf("Altura = %.2f\n", altura);
    printf("Area = %.3f\n", area);

    return 0;
}