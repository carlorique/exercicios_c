#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("resultado: %.1d\n", soma);
	
	return 0;
}
