#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa sistema
int main(){
	//Declarando variaveis
	int quantProdutos;
	char pergunta;
	//Entrada do usuario
	printf("Quantos produtos voce possui? ");
	scanf("%d", &quantProdutos);
	//Novas variaveis
	float preco[quantProdutos], novoPreco[quantProdutos];
	//Calculo e resposta do sistema
	for(int i = 0; i<quantProdutos; i++){
		printf("Qual o preco do produto %d? ", i + 1);
		scanf("%f", &preco[i]);
		novoPreco[i]= preco[i] + (10 * preco[i])/100;
		fflush(stdin);
		if(i < quantProdutos - 1){
			printf("Mais algum produto a ser calculado o aumento?(s ou n)");
			scanf("%c", &pergunta);
			if(pergunta == 'n'){
				i = quantProdutos;
			} else if(pergunta != 's'){
				printf("Resposta invalida");
				return 0;
			}
		}
	}
	system("cls");
	for(int i = 0; i<quantProdutos; i++){
		printf("Novo preco do produto %d = %.2f\n", i+1, novoPreco[i]);	
	}
	
	
	return 0;
}
