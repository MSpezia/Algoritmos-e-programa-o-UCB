#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Variaveis
	float numero[3],maiorNumero = 0;
	
	//Entrada do usuario
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero[1]);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero[2]);
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero[3]);
	
	//Calculo e reposta do sistema
	for(int i = 0; i <= 3; i++){
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
	}
	system("cls");
	printf("O maior numero e: %f", maiorNumero);
	
	return 0;
}
