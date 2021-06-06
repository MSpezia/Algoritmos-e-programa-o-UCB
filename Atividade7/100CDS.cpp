#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	int quantCD, menuAcao;
	float porAumento;
	//Entrada de usuario
	while(true){
		printf("Digite a quantidade de CDs: ");
		scanf("%d", &quantCD);
		if(quantCD < 1 or quantCD > 100){
			printf("Numero invalido, tente novamente.\n");
		} else break;
	}
	
	//Novas variaveis
	float precoCD[quantCD], novoPreco[quantCD];
	
	//Novas entradas
	for(int i = 1; i <= quantCD; i++){
		printf("Escreva o preco do CD %d: ", i);
		scanf("%f", &precoCD[i]);
	}
	
	system("cls");
	while(true){
		printf("Digite o numero correspondente a acao que deseja:\n1 - Aumentar o preco em 10 por cento de todos os CDs\n2 - Informar o percentual aumentara o preco dos CDs\n");
		scanf("%d", &menuAcao);
		if(menuAcao < 1 or menuAcao > 2){
			printf("Numero invalido, tente novamente.\n");
		} else break;
	}
	system("cls");
	if(menuAcao == 1){
		printf("Aumento de 10 por cento.\n");
		for(int i = 1; i <= quantCD; i++){
			printf("Antigo preco do CD %d: %.2f\t",i, precoCD[i]);
			novoPreco[i] = 110 * precoCD[i]/100;
			printf("Novo preco do CD %d: %.2f\n",i, novoPreco[i]);
		}
	}
	if(menuAcao == 2){
		printf("Qual a porcentagem de aumento? ");
		scanf("%f", &porAumento);
		printf("Aumento de %.2f por cento.\n", porAumento);
		for(int i = 1; i <= quantCD; i++){
			printf("Antigo preco do CD %d: %.2f\t",i, precoCD[i]);
			novoPreco[i] = (100 + porAumento) * precoCD[i]/100;
			printf("Novo preco do CD %d: %.2f\n",i, novoPreco[i]);
		}
	}
	
	return 0;
}
