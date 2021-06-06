#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	char letra[30];
	int i;
	
	//Entrada do usuario
	for(i = 0; i < 30; i++){
		printf("Digite a letra %d: ", i+1);
		scanf("%c", &letra[i]);
		getchar();
	}
	system("cls");
	//Resposta do sistema
	for(i = 30; i >= 0; i--){
		printf("%c\n", letra[i]);
	}
	
	return 0;
}
