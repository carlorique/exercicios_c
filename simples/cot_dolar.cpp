/*Dados um valor em real e a cota��o do d�lar. converta esse valor em d�lares.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float r, c, d;
	
	printf("Digite o valor em R$: ");
	scanf("%f", &r);
	printf("Digite a cotacao: ");
	scanf("%f", &c);
	
	d = r/c;
	
	printf("Valor em U$: %.2f\n", d);
	
	return 0;
}
