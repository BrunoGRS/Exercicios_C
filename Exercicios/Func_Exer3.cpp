#include <stdio.h>

calendario(int dia1, mes1, mes2, dia2, finaldia, finalmes, i, ano1, ano2;){
	
	int finaldia, i;
	int d[] = {0,31,28,30,31,30,31,30,31,30,31,30,31};
	
	if(mes1==mes2){
		finaldia = dia1-dia2;
	}else finaldia = d[mes1] - dia1+dia2;
	
	for(i=mes1+1;i < mes2; i++){
		finaldia= finaldia+d[i];
	}

}

int main (){
	
	
}
