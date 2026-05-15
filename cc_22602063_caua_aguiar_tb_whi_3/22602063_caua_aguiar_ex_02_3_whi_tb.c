#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    float nota, soma = 0, media;

    while (i <= 4)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        soma = soma + nota;
        i++;
    }

    media = soma / 4;

    printf("Media da turma = %.2f\n", media);
}
