#include <stdio.h>

void zera(float *a){
	*a = 0;
}

main(){
	float f;
	f = 20*7;
	zera(&f);
	printf("%f", f);
}


