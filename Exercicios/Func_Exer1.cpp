#include <stdio.h>

intervalo(int a, int b){
	int final;
	int c = 1;
	if(a > b){
		final = (a-b)-c;
		printf("Intervalo entre os dois números: %d" + final);
	}else final = (b-a)-c;
		printf("Intervalo entre os dois números: %d" + final);
}

int main(){
	int a, b, final;
	
	printf("Digite o primeiro digito: ");
	scanf("%d", &a);
	
	printf("Digite o segundo digito: ");
	scanf("%d", &b);

	intervalo(a, b);
}


