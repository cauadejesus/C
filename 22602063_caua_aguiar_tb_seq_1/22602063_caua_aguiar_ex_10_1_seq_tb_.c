#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float a, b, x;

    printf("Digite a e b: ");
    scanf("%f %f", &a, &b);

    x = -b / a;

    printf("Raiz do 1° grau = %.2f\n", x);
}
