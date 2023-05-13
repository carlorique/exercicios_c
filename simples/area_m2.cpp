/*Dadas as medidas de uma sala em metros(comprimento e largura), informe sua área em metros quadrados*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float c, l, area;
	
	printf("Digite o valor do cumprimento: ");
	scanf("%f", &c);
	printf("Digite o valor da largura: ");
	scanf("%f", &l);
	area = c * l;
	
	printf("A area em m2 e: %.1f\n", area);
	
	return 0;
}
