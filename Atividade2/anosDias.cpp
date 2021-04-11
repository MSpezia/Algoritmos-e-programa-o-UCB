#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	int ano1, ano2, dias;
	
	//Input do usuario
	printf("Digite o ano de seu nascimento: ");
	scanf("%d", &ano1);
	printf("Digite o ano atual: ");
	scanf("%d", &ano2);
	
	//Calculo e resposta do sistema
	dias = (ano2 - ano1)*365;
	printf("Voce viveu aproximadamente %d dias", dias);
	
	return 0;
}
