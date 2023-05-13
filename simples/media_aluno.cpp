#include<stdio.h>
#include<stdlib.h>

main(){
	float n1, n2,n3, media=0;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf("A media do aluno e: %1.f\n", media);
	
	if(media >= 5){
		printf("APROVADO\n");
	}else{
		printf("REPROVADO\n");	
	}
	
	return 0;
}
