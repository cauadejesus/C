/*6. Analise o resultado de uma transação comercial. Verifique a situação final do comerciante
trabalhando com os valores lidos, ou seja, o preço de compra e o preço de venda. Gere a tela de
saída com uma das seguintes mensagens:
“Teve lucro.”, “Teve prejuízo.” ou “Os valores são iguais.”.
Utilize os valores abaixo para testar seu programa:
Teste 1: Entrada: compra = 1000, venda = 1200 Saída: Teve lucro.
Teste 2: Entrada: compra = 1200, venda = 1000 Saída: Teve prejuízo.
Teste 3: Entrada: compra = 1000, venda = 1000 Saída: Os valores são iguais.
Alterações: Na saída, mostre também o valor do preço de compra e do preço de venda.
*/
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float compra, venda;

    printf("Preco de compra: ");
    scanf("%f", &compra);

    printf("Preco de venda: ");
    scanf("%f", &venda);

    printf("Compra: %.2f | Venda: %.2f\n", compra, venda);

    if (venda > compra){
        printf("Teve lucro.\n");
	}
    	
    else if (venda < compra){
        printf("Teve prejuizo.\n");
	}
    else{
        printf("Valores iguais.\n");
    }
}
