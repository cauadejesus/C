#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float F, C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("Celsius = %.2f\n", C);
}
