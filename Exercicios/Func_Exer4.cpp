#include <stdio.h>

int parImpar (int a){
	
	if(a % 2 == 0 ){
		return 0;
	}else return 1;
	
}

int main (){
	
	int a;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	if(parImpar(a) == 0){
		printf("O numero e par");
	}else printf("O numero e impar");
	
}
