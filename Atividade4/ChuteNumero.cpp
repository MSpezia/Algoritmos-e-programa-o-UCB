#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Declarando variaveis
	int tentativa, numero, chute;
	//Entrada do usuario
	printf("Digite o numero que sera adivinhado: ");
	scanf("%d", &numero);
	system("cls");
	
	do{
		tentativa++;
		printf("Digite o chute: ");
		scanf("%d", &chute);
		//resposta do sistema
		if(chute > numero){
			printf("Valor muito alto\n");
		}
		if(chute < numero){
			printf("Valor muito baixo\n");
		}
	}while(chute != numero);
	
	system("cls");
	printf("Parabens! Voce conseguiu em %d tentativas!", tentativa);
	
	return 0;
}
