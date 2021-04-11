#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	double numero1, numero2, numero3;
	
	//Input do usuario
	printf("Digite o primeiro numero: ");
	scanf("%lf", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%lf", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%lf", &numero3);
	fflush(stdin);
	
	//Analise e resposta do sistema
	if(numero1 > numero2 and numero1 > numero3){
		printf("%lf e o maior numero.", numero1);
		return 0;
	}
	if(numero2 > numero1 and numero2 > numero3){
		printf("%lf e o maior numero.", numero2);
		return 0;
	}
	if(numero3 > numero1 and numero3 > numero2){
		printf("%lf e o maior numero.", numero3);
		return 0;
	}
	if(numero3 == numero2 or numero3 == numero1 or numero1 == numero2){
		printf("Mais de um numero e o maior numero.", numero1);
		return 0;
	}
	
	return 0;
}
