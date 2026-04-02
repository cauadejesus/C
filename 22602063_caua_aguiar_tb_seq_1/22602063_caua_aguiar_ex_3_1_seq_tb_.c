#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;
	
	printf("\n");
    printf("Base = %.2f\n", base);
    printf("Altura = %.2f\n", altura);
    printf("\n");
    printf("Area = %.3f\n", area);
}
