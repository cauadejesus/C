#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media = %.2f\n", media);
}
