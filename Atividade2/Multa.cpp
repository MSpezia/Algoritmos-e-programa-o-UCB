#include<stdio.h>//comando de entrada e saida
int main (){
	//Declarando variaveis
	double velocidade;//%lf
	char placa[7];//%s
	
	//Entrada do usuario
	printf("Digite a placa de seu carro: ");
	scanf("%s", placa);
	printf("Digite a velocidade a qual voce estava dirigindo: ");
	scanf("%lf", &velocidade);
	
	//Checando se o carro sera multado
	if(velocidade > 80 or velocidade < 40){
		printf("Voce sera multado.");
		return 0;
	}
	printf("Voce nao sera multado.");
	return 0;
}
