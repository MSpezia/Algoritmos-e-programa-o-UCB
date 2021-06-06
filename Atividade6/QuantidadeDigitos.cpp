#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	int quantDigitos = 0, numero;
	//Entrada do usuario
	printf("Digite um numero positivo inteiro qualquer: ");
	scanf("%d", &numero);
	//Calculo do sistema
	do{
		quantDigitos += 1;
		numero = numero/10;
	}while(numero != 0);
	system("cls");//Limpa tela
	//Resposta do sistema
	printf("Quantidade de digitos: %d", quantDigitos);
	return 0;
}
