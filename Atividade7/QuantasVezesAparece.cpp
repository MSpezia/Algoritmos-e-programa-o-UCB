#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	char vetor[80], caractere;
	int i,quantAparece = 0;
	//Entrada do usuario
	for(i = 0; i < 80; i++){
		printf("Digite um caractere: ");
		scanf("%c", &vetor[i]);
		getchar();
	}
	system("cls");
	printf("Digite um caractere para ser verificado: ");
	scanf("%c", &caractere);
	system("cls");
	//Resposta do sistema
	for(i = 0; i < 80; i++){
		if(vetor[i] == caractere){
			printf("Aparece na posicao %d\n", i + 1);
			quantAparece++;
		}
	}
	printf("%c aparece %d vezes.", caractere, quantAparece);
	
	return 0;
}
