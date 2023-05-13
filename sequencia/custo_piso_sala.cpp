/*Dadas as medidas de uma sala em metros(comprimento e largura), bem como o preço do metro 
quadrado de carpete, informe o custo total para forrar o piso da sala.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	float c, l, p, t;
	
	printf("Digite o cumprimento: ");
	scanf("%f", &c);
	printf("Digite a largura: ");
	scanf("%f", &l);
	printf("Digite o preço do m2: ");
	scanf("%f", &p);
	
	t = c * l * p;
	
	printf("Valor total = R$ %.2f\n", t);
	
	return 0;
}
