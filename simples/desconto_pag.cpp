/*Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere
que o percentual de desconto é um número real entre 0 e 1.obs:usar "." em valores quebrados.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float vc, d, tp;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &vc);
	printf("Digite o desconto: ");
	scanf("%f", &d);
	
	tp = vc - (vc / d);
	
	printf("Total do pagamento: %.2f\n", tp);
	
	return 0;
}
