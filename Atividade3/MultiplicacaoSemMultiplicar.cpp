#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	int fator1, fator2, resposta = 0;
	//Pedir ao usuario as variaveis
	printf("Digite o primeiro fator da multiplicacao: ");
	scanf("%d", &fator1);
	printf("Digite o segundo fator da multiplicacao: ");
	scanf("%d", &fator2);
	//Calculo e reposta do sistema
	for(int i = fator2; i > 0; i--){
		resposta += fator1;
	}
	printf("Resposta = %d", resposta);
	return 0;
}
