#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float r, h, area;
    float pi = 3.14;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    area = 2 * pi * r * h;

    printf("Area lateral = %.2f\n", area);
}
