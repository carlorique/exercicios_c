/*Calcule a media dos valores e verifique se esta aprovado ou nao(media=7)*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
	float n1, n2, n3, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf ("Sua nota e : %.1f\n", media);
	
	if(media >= 7){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}
	
	system("pause");
	return 0;
}
