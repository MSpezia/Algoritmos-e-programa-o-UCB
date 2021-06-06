#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Variaveis
	int regiao;
	
	//Entrada do usuario
	printf("Digite o numero da regiao que voce gostaria de conhecer:\n1 - Norte\n2 - Nordeste\n3 - Centro-Oeste\n4 - Sudeste\n5 - Sul\n0 - Sair do programa\n");
	scanf("%d", &regiao);
	
	system("cls");
	//Resposta do sistema
	switch(regiao){
		case 0: return 0;
		case 1: printf("Voce escolheu a regiao Norte."); break;
		case 2: printf("Voce escolheu a regiao Nordeste."); break;
		case 3: printf("Voce escolheu a regiao Centro-Oeste."); break;
		case 4: printf("Voce escolheu a regiao Sudeste."); break;
		case 5: printf("Voce escolheu a regiao Sul."); break;
	}
	
	return 0;
}
