#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float a, b;

    printf("Digite dois valores reais: ");
    scanf("%f %f", &a, &b);

    printf("Soma = %.2f\n", a + b);
    printf("Subtracao = %.2f\n", a - b);
}
