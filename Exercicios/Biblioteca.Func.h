#include <stdio.h>
#include <locale.h>

capicua() {
  int num,       
      aux,        
      reverso;    

  printf("Digite um natural: ");
  scanf("%d", &num);

  
  aux = num;
  reverso = 0;

  while (aux != 0) {
    reverso = reverso * 10 + aux % 10;  
    aux = aux / 10;                    
  }

  if (reverso == num)
    printf("%d é palindrome\n", num);
  else
    printf("%d não é palindrome\n", num);

}


bissexto(){
	
	int ano;
	
	printf("Digite um natural: ");
  	scanf("%d", &ano);
  	
  	
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 ==0)){
		printf("E um ano bissexto!\n");
	}else printf("Não e um ano bissexto!\n");
}

fatorialDuplo(){
	
	int a;
	int i = 0;
	int result;
	
	printf("Digite um natural: ");
  	scanf("%d", &a);
	
	while(i<a){
		i += 2;
		result = a*(a-2);
		}
	
	printf("Final: %d", result);
}


