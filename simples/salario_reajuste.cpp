/*Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste é dado por um 
número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float s, r, ns;
	
	printf("Digite seu salario: ");
	scanf("%f", &s);
	printf("Digite o reajuste: ");
	scanf("%f", &r);
	
	
	ns = s + (s * r);
	
	printf("Seu novo salario e: %.3f\n", ns);
	
	return 0;
}
