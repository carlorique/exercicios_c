/*Dada uma dist�ncia percorrida(em kil�metros), bem como o total de combust�vel gasto(em litros), informe o consumo m�dio do ve�culo.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float dis, comb, media;
	
	printf("Digite a distancia percorrida em km: ");
	scanf("%f", &dis);
	printf("Digite a quantidade de combustivel gasto: ");
	scanf("%f", &comb); 
	
	media = dis / comb;
	
	printf("Consumo medio =  %.1f km/1\n", media);
	
	return 0;
} 
