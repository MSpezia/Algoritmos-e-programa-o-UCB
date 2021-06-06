#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declarando variaveis
	int numero;
	float soma = 0, quantNumPar, media;
	
	//Entrada do usuario
	do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &numero);
		if(numero % 2 == 0){
			//Calculo
			soma += numero;
			quantNumPar++;
		}
	}while(numero !=0);
	quantNumPar--;//Retira-se 1 pois o 0 digitado nao conta

	media = soma/quantNumPar;
	//Resposta do sistema
	printf("A media aritmetica entre todos os numeros par e: %f", media);
	
	
	
	
	return 0;
}
