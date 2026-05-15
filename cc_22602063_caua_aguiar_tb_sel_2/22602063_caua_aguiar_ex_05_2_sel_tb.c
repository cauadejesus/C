/*5. Elabore o programa que verifica se o valor inteiro fornecido pelo usuário é par ou ímpar.
Analise o problema e verifique quais são os dados que o usuário precisa fornecer.*/
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("Par\n");}
    else{
        printf("Impar\n");}
}
