intervalo(int a, int b){
	int final;
	int c = 1;
	if(a > b){
		final = (a-b)-c;
		printf("Intervalo entre os dois n�meros: %d" + final);
	}else final = (b-a)-c;
		printf("Intervalo entre os dois n�meros: %d" + final);
}
