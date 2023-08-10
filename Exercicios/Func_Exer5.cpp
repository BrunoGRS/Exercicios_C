#include "Biblioteca.Func.h"
#include <stdlib.h>

int main (){
	
	int escolha, valor;
	
	while(1){
		printf("\nEscolha um funcao para executar!\n");
	
		printf("Funcoes:\n");
		printf("\n");
		printf("1 - Capicua\n");
		printf("2 - Bissexto\n");
		printf("3 - Fatorial Duplo\n");
		printf("0 - Sair\n");
	
		printf("Valor -> ");
		scanf(" %d", &escolha);
		
		switch(escolha){
				
			case 1: capicua(); break;
			case 2: bissexto(); break;
			case 3: fatorialDuplo(); break;
			}
		
		if(escolha == 0){
			printf("Fim do Programa!");
			exit(0);
		}
	}
}
