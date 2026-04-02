#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float r, volume;
    float pi = 3.14;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    volume = (4.0/3.0) * pi * r * r * r;

    printf("Volume = %.2f\n", volume);
}
