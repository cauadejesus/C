/*9. Projete o programa que calcule as raízes de uma equação do 2° grau, levando em consideração
a análise da existência de raízes reais. Se o valor de delta for menor que zero, não existem raízes
nos reais; se delta for igual a zero, existem duas raízes iguais; se delta for maior que zero, existem
duas raízes diferentes.
Expressão: ax^2 + bx + c = 0
x = (- b +- raiz_quadrada ( delta ))/2a
delta = (b^2 - 4 a c)
Observação: inclua a biblioteca math.h nas declarações de pré-processamento e utilize a função sqrt, por
exemplo:
float x=4, raizq;
raizq = sqrt(x);
A função pow recebe a base e o expoente e retorna o resultado, veja o exemplo:
int x=2, y=2, pot;
pot = pow(x,y);*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, delta, x1, x2;

    printf("Digite a: ");
    scanf("%f", &a);
    
    printf("Digite b: ");
    scanf("%f", &b);
    
    printf("Digite c: ");
    scanf("%f", &c );

    delta = (b*b) - (4*a*c);

    if (delta < 0)
        printf("Nao existem raizes reais.\n");
    else if (delta == 0)
    {
        x1 = -b / (2*a);
        printf("Raizes iguais: %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raizes: %.2f e %.2f\n", x1, x2);
    }
}
