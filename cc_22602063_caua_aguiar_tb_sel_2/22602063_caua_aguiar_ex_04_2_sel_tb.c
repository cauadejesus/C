/*4. Construa o programa que calcule o peso ideal de uma pessoa.
 Utilize as seguintes fórmulas:
- Se homem, o peso ideal é calculado assim: (72,7. altura) - 58;
- Se mulher, o peso ideal é calculado assim: (62,1. altura) - 44,7.
Analise o problema e verifique quais são os dados que o usuário precisa fornecer (digitar).
Teste 1: Entrada: altura = 1.70 e gênero = 1 Saída: peso ideal = 65.59 Kg
Teste 2: Entrada: altura = 1.70 e gênero = 2 Saída: peso ideal = 60.8699999 Kg
ALTERAÇÕES:
a. Mostre o peso com duas casas decimais.
c. Troque a entrada para ‘m’ ou ‘f’.
 Teste 3: altura = 1.8 genero = m Saída: peso ideal = 72.86 Kg
d. Mostre uma mensagem de erro se ele digitar valor de gênero diferente de ‘m’ ou ‘f’.*/
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float altura, peso;
    char genero;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o genero (m/f): ");
    scanf(" %c", &genero);

    if (genero == 'm')
    {
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f Kg\n", peso);
    }
    else if (genero == 'f')
    {
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f Kg\n", peso);
    }
    else
        printf("Genero invalido.\n");
}

