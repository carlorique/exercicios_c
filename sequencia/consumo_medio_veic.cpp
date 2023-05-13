/*Dada uma distância percorrida(em kilômetros), bem como o total de combustível gasto(em litros), informe o consumo médio do veículo.*/

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
