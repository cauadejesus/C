#include <stdio.h>
#include <locale.h>
void main (void){
    setlocale(LC_ALL, "Portuguese");

    float a, b, soma;

    printf("Digite dois valores reais: ");
    scanf("%f %f", &a, &b);

    soma = a + b;

    printf("Soma = %.2f\n", soma);
}
