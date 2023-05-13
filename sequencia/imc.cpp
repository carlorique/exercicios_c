/*O índice de massa corpórea(IMC) de uma pessoa é igual ao seu peso(em quilogramas) dividido pelo quadrado
de sua altura(em metros). Dados o peso e altura de uma pessoa, informe o valor do seu IMC.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float pes, alt, imc;
	
	printf("Digite seu peso: ");
	scanf("%f", &pes);
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	
	imc = pes / pow(alt, 2);
	
	printf("Seu IMC e: %.1f\n", imc);
	
	return 0;
}
