#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	int numero;
	
	//Entrada do usuario
	printf("Digite um numero para descobrir todos os numeros pares ate ele: ");
	scanf("%d", &numero);
	
	//Calculo e resposta do sistema
	system("cls");
	if(numero > 2000){
		printf("%d excede o limite de calculo.", numero);
		return 0;
	}
	printf("Os numeros pares sao:\n");
	for(int i = 0; i <= numero; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
