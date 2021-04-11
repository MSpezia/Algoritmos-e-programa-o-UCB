#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	double horas, preco;
	
	
	//Input do usuario
	printf("Digite a quantidade de horas usadas: ");
	scanf("%lf", &horas);
	
	//Analise e respota do sistema
	if(horas < 0){
		printf("Tempo negativo, calculo impossivel.");
		return 0;
	}
	if(horas <= 20){
		printf("Voce precisa pagar 30 reais.");
	}else {
		preco = 30 + (horas-20)*0.1;
		printf("Voce precisa pagar %.2lf reais", preco);
	}
	
	return 0;
}
