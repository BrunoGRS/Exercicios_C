#include <stdio.h>

fatorial(int a){
	
	int i = (a-1);
	
	for(i; i > 0;i--){
		a = a * i;
	}
	printf("Fatorial: %d" , a);
}

int main (){
	
	int a;
	
	printf("Digite um número para mostrar seu fatorial: ");
	scanf("%d", &a);
	
	fatorial(a);
	
}
