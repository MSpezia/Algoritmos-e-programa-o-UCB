#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa sistema
int main(){
	//Definindo variaveis
	int abacaxi = 0 , maca = 0, pera = 0, menu;
	
	//Entrada do usuario
	do{
		printf("Digite o numero da fruta que deseja comprar:\n1=>ABACAXI\n2=>MACA\n3=>PERA\n4=>SAIR DO MENU\n\n");
		scanf("%d", &menu);
		system("cls");
		switch(menu){
			case 1: abacaxi++; break;
			case 2: maca++; break;
			case 3: pera++; break;
			case 4: break;
			default: printf("Opcao nao existente\n"); break;
		}
		
	}while(menu != 4);
	
	printf("Voce comprou:\n%d abacaxis\n%d macas\n%d peras",abacaxi, maca, pera);
	
	
	
	return 0;
}
