#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declarando variaveis
	float N;
	double H = 0;
	
	//Pedir ao usuario as variaveis
	printf("Digite o valor de N: ");
	scanf("%f", &N);
	
	//Calculo e resposta do sistema
	for(float i = 1; i < N+1; i++){
		H += 1/i;
	}
	printf("H = %lf", H);
	return 0;
}
