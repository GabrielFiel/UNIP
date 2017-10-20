#include <stdio.h>

int main(){
	int anterior = 0;
	int proximo = 1;
	int resultado;
	int i;
	
	for(i=0; i<10; i++){
		resultado = anterior + proximo;
		anterior = proximo;
		proximo = resultado;
		
		printf("Valor %d : %d\n", i, resultado);
	}
}
