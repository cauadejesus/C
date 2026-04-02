#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma = %d\n", a + b);
    printf("Subtracao = %d\n", a - b);
    printf("Multiplicacao = %d\n", a * b);
}
