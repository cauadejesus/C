#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float raio, area;
    float pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("Area = %.2f\n", area);
}
