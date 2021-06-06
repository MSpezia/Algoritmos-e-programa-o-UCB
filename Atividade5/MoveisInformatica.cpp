#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Variaveis
	int movel;
	//Entrada do usuario
	printf("Digite o numero do movel que deseja:\n1-cadeira\n2-mesa de computador\n3-estante de livros\n4-mesa de impressora\n5-estante de CD\n");
	scanf("%d", &movel);
	system("cls");
	//Resposta do sistema
	if(movel < 1 or movel > 5){
		printf("Movel indisponivel ou nao existe.");
	}else{printf("Movel solicitado com sucesso.");}
	return 0;
}
