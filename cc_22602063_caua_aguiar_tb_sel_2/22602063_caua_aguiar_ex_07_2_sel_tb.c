/*7. Refaça o programa que calcule a média aritmética de um aluno que realizou duas avaliações.
Além do valor da média, inclua na tela de saída uma das mensagens: “Aluno aprovado.” ou “Aluno
reprovado.”. Considere que o aluno será aprovado com a média maior ou igual a cinco.
Teste 1: Entrada: nota1 = 5, nota2 = 6 Saída: Média = 5.5 Aluno aprovado.
Teste 2: Entrada: nota1 = 5, nota2 = 2 Saída: Média = 3.5 Aluno reprovado.
ALTERAÇÕES:
a. Mostre o valor da média aritmética com duas casas decimais.
b. Altere a saída. Mostre a média e a mensagem na mesma linha: Média do aluno: x.xxx Aluno
aprovado ou Aluno reprovado.
c. Refaça-o considerando que a primeira prova tem peso três e a segunda, peso cinco. Ou seja, calcula
a média ponderada do aluno.
 Teste 3: nota1 = 5, nota2=6, peso1=3, peso2=5 Saída: média = 5,625
d. Deixe o programa mais interessante, permita que o usuário digite o valor dos pesos para usar no
cálculo da média ponderada.
*/
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, p1, p2, media;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Peso 1: ");
    scanf("%f", &p1);

    printf("Peso 2: ");
    scanf("%f", &p2);

    media = (n1*p1 + n2*p2) / (p1 + p2);

    printf("Media: %.2f ", media);

    if (media >= 5){
        printf("Aluno aprovado.\n");}
    else{
        printf("Aluno reprovado.\n");}
}
