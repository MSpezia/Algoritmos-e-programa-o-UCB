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
		while(fatorial > 1){
			resposta *= fatorial-1;
			fatorial--;
		}
	}
	
	printf("Resposta = %d", resposta);
	
	
	return 0;
}
