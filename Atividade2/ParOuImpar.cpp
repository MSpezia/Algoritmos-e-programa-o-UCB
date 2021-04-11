#include<stdio.h>//comando de entrada e saida
int main (){
	//Definindo variaveis
	int numero;
	
	//Input do Usuario
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	//Teste do sistema e resposta
	if(numero%2==0){
		printf("O numero e par.");
		return 0;
	}
	printf("O numero e impar.");
	return 0;
}
