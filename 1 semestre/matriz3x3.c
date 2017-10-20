#include <stdio.h>
#include <stdlib.h>

void main(void){
	
	int m[3][3];
	int i, j;
	
	printf("LER MATRIZ 3 X 3\n\n");
	
	for(i=0; i<3; i++){		
		for(j=0; j<3; j++){
			printf("Digite o termo %d.%d da matriz: ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	
	system("cls");
	
	printf("Matriz da multiplicacao por 2 da matriz que voce informou: \n");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d \t", m[i][j]*2);
		}
		printf("\n");
	}
}
