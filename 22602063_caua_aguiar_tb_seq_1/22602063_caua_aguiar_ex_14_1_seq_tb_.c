#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float a, b, c, media;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + c) / 3;

    printf("Media = %.2f\n", media);
}
