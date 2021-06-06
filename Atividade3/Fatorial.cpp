#include<stdio.h>//Comando de entrada e saida
int main (){
	//Definindo variaveis
	int fatorial, resposta;
	//Pedir ao usuario as variaveis
	printf("Digite o numero que voce deseja calcular o fatorial: ");
	scanf("%d", &fatorial);
	//Calculo e resposta do sistema
	resposta = fatorial;
	if(fatorial == 0){
		printf("Resposta = 1");
		return 0;
	}else{
		for(int i = fatorial; i > 1; i--){
			resposta *= i-1;
		}
	}
	
	printf("Resposta = %d", resposta);
	
	
	return 0;
}
