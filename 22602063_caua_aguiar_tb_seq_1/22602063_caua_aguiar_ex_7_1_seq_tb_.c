#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float raio, comprimento;
    float pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;

    printf("Comprimento = %.2f\n", comprimento);
}
