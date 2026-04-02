#include <stdio.h>
#include <locale.h>
void main (void){
	setlocale(LC_ALL, "Portuguese");
    float pes, metros;

    printf("Digite o valor em pes: ");
    scanf("%f", &pes);

    metros = pes * 0.3048;

    printf("Metros = %.4f\n", metros);
}
