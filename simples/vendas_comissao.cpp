/*Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão de vendedor seja de 10% do total de vendas*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float v, c;
	
	printf("Quanto voce vendeu? ");
	scanf("%f", &v);
	
	c = 0.10 * v;
	
	printf("Sua comissao foi de: %.2f\n", c);
	
	return 0;
}
