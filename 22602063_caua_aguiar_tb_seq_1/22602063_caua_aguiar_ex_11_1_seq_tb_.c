#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    int a, b, x;

    printf("Digite dois valores A e B: ");
    scanf("%d %d", &a, &b);

    x = a;
    a = b;
    b = x;

    printf("Valores trocados:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
