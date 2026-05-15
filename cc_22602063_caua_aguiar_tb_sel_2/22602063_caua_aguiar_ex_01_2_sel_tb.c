#include <stdio.h>
#include <locale.h>
/*1. Faça um programa que leia o ano de nascimento de uma pessoa e calcule sua idade. Após isso
verifique se ela já tem idade para votar (16 anos ou mais). mostre a mensagem informando a
situação dela:
a) A idade é xx anos e já pode votar.
b) A idade é xx anos e não pode votar.
ALTERAÇÕES:
a. Na tela de saída, mostre também a data de nascimento.
b. Mostre também a idade da pessoa.*/
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
 	int dia, mes, ano, idade;
 	
 	printf("Coloque seu ano de nascimento:");
 	scanf("%d", &ano);
 	
 	printf("Coloque seu mês de nascimento:");
 	scanf("%d", &mes);
 	
 	printf("Coloque o dia em que nasceu:");
 	scanf("%d", &dia);
 	
 	idade = 2026 - ano;
 	
 	if(idade>= 16){
 		printf("\nJá pode votar\n");
 	}else{
 		printf("\nNão pode votar ainda\n");
	}
 		
 	printf("Sua data de nascimento é: %.1d / %.1d / %.1d", dia, mes, ano);
 	scanf("%d, %d, %d", dia, mes, ano);
 	
 	printf("Sua idade é: %.1d", idade);
 	scanf("%d", idade);
}

