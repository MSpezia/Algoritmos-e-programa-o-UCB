#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declaração de variaveis
	int fibonnaci, i, a, b;
	a = 0;
	b = 1;
	//Calculo do sistema
	for(i = 0; i <20; i++){
		fibonnaci = a + b;
		a = b;
		b = fibonnaci;
		printf("%d\n", fibonnaci);
	}
	
	
	
	
	return 0;
}
