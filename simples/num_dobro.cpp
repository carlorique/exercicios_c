/*Dado um número real qualquer, informe qual é seu dobro*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float n, d;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	d = n * 2;
	
	printf("O dobro e: %.1f\n", d);
	
	return 0;
}
