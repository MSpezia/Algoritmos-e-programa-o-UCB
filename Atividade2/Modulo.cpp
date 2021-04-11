#include<stdio.h>//Comando de entrada e saida
int main (){
	//Definindo variaveis
	float numero , resposta;
	
	//Input do Usuario
	printf("Digite o numero ao qual se deseja descobrir seu modulo: ");
	scanf("%f", &numero);
	
	//calculo e resposta do sistema
	if(numero < 0){
		resposta = -(numero);
		printf("O modulo de %.1f e: %.1f", numero, resposta);
		return 0;
	}
	printf("O modulo de %.1f e: %.1f", numero, numero);
	return 0;
}
