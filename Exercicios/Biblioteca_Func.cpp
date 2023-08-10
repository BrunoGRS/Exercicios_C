#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
  int num,        /* numero dado                                  */
      aux,        /* guarda o pedaco do numero que resta inverter */
      reverso;    /* guarda o numero de tras para frente          */

  printf("Digite um natural: ");
  scanf("%d", &num);

  /* inicializacoes */
  aux = num;
  reverso = 0;

  while (aux != 0) {
    reverso = reverso * 10 + aux % 10;  /* acrescenta mais um digito a direita */
    aux = aux / 10;                     /* joga fora esse digito */
  }

  if (reverso == num)
    printf("%d é palindrome\n", num);
  else
    printf("%d não é palindrome\n", num);

  return 0; 
}
bissexto(int ano){
	
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 ==0)){
		printf("E um ano bissexto!");
	}else printf("Não e um ano bissexto!");
}

fatorialDuplo(int a){
	
	int i = 0;
	int result;
	
	while(i<a){
		i += 2;
		result = a*(a-2);
		}
	
	printf("Final: %d", result);
}


