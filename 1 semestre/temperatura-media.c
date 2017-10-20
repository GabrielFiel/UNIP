#include <stdio.h>
#include <stdlib.h>

void main(void){
	
	//Variáveis
	int temp1, temp2, temp3, i;
	float media;
	
	printf("Digite a temperatura 1: ");
	scanf("%d", &temp1);

	printf("Digite a temperatura 2: ");
	scanf("%d", &temp2);
	
	printf("Digite a temperatura 3: ");
	scanf("%d", &temp3);
	
	media = (temp1 + temp2 + temp3) / 3;
	
	printf("\nA media das temperaturas = %.0f", media);
	
	printf("\nA diferenca da temperatura 1 pra media = %.0f", temp1-media);

	printf("\nA diferenca da temperatura 2 pra media = %.0f", temp2-media);
	
	printf("\nA diferenca da temperatura 3 pra media = %.0f", temp3-media);
}
