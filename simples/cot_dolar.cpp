/*Dados um valor em real e a cotação do dólar. converta esse valor em dólares.*/

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
