/*8. Projete o programa que leia um valor numérico e verifique se ele é maior ou igual a cem. Mostre
uma das mensagens: “Valor maior ou igual a cem.” Ou “Valor menor que cem.”
Teste 1: valor = 200 Saída: Valor maior ou igual a cem.
Teste 2: valor = 20 Saída: Valor menor que cem.
Teste 3: valor = 100 Saída: Valor maior ou igual a cem.
ALTERAÇÕES:
a. Mostrar também o valor numérico lido, na tela de saída.
*/
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Valor digitado: %d\n", n);

    if (n >= 100){
        printf("Maior ou igual a cem.\n");}
    else{
        printf("Menor que cem.\n");}
}
