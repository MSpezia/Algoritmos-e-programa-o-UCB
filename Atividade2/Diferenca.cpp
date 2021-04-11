#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	double numero1, numero2, resposta;
	
	//Input do usuario
	printf("Digite o primeiro numero: ");
	scanf("%lf", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%lf", &numero2);
	
	//Calculo e resposta do sistema
	if(numero1 > numero2){
		resposta = numero1 - numero2;
		printf("Sua resposta e: %.0lf", resposta);
		return 0;
	}
	if(numero1 < numero2){
		resposta = numero2 - numero1;
		printf("Sua resposta e: %.0lf", resposta);
		return 0;
	}
	printf("Ambos os numero sao iguais, logo a resposta e 0.");
	return 0;
}
