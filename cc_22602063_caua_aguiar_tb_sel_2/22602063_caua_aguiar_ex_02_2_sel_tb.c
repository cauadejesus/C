#include <stdio.h>
#include <locale.h>
/*2. Faça um programa que leia dois valores quaisquer e mostre o maior deles ou mostre a
mensagem “Os valores são iguais.”
TESTE:
Teste 1: Entrada: 5 e 10 Saída: O maior valor é 10
Teste 2: Entrada: 10 e 5 Saída: O maior valor é 10
Teste 3: Entrada: 5 e 5 Saída: Os valores são iguais.
ALTERAÇÕES:
a. Se eles forem diferentes, mostre os valores digitados na ordem decrescente.
b. Se eles forem iguais, mostre a mensagem e o valor digitado.*/

void main(void)
{
 	setlocale(LC_ALL, "Portuguese");
	int num_1, num_2;
	
	printf("Coloque o número 1:");
 	scanf("%d", &num_1); 
 	printf("Coloque o número 2:");
 	scanf("%d", &num_2); 
 	
 	if (num_1 > num_2){
 		printf("\n O número %.1d é maior que %.1d", num_1, num_2);
 		scanf("%d", &num_1, &num_2);
	} 
	
	else if (num_1 < num_2){
 		printf("\n O número %.1d é maior que %.1d", num_2, num_1);
 		scanf("%d", &num_1, &num_2);
	}
	
	else{
 		printf("\n Os números %.1d e %.1d são iguais", num_1, num_2);
 		scanf("%d", &num_1, &num_2);
	 }	 
}

