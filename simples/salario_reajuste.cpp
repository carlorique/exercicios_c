/*Dados um sal�rio e um percentual de reajuste, calcule o sal�rio reajustado. Considere que o percentual de reajuste � dado por um 
n�mero real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usu�rio deve digitar o n�mero 0.15.*/

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
