#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	//Variáveis
	int num, i, result;
	char resp;
	
	do{
		system("cls");
		printf("Digite um numero inteiro para mostrar sua tabuada: ");
		scanf("%d", &num);
		
		printf("Tabuada do %d", num);
		
		for(i=0; i <=10; i++){
			result = num * i;
			printf("\n%d x %d = %d", num, i, result);
		}
	
	
		printf("\n\nDeseja continuar? s/n");
		resp = getch();
	} while(resp == 's');
	
	
}
