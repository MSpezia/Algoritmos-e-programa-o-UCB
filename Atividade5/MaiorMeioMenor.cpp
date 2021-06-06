#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Variaveis
	float numero[3],maiorNumero = 0, menorNumero = 100000, meioNumero;
	
	//Entrada do usuario
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero[1]);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero[2]);
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero[3]);
	
	//Calculo e reposta do sistema
	for(int i = 1; i <= 3; i++){
		if(numero[i] > menorNumero and numero[i] < maiorNumero){
			meioNumero = numero[i];
		}
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
	}
		for(int i = 1; i <= 3; i++){
		if(numero[i] > menorNumero and numero[i] < maiorNumero){
			meioNumero = numero[i];
		}
	}
	system("cls");
	printf("O maior numero e: %f\n", maiorNumero);
	printf("O numero do meio e: %f\n", meioNumero);
	printf("O menor numero e: %f", menorNumero);
	
		
	return 0;
}
