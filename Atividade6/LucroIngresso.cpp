#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	float ingresso = 15, lucro;
	int quantIngresso = 120;
	
	for(int i = 0; i < 5; i++){
		lucro = (ingresso * quantIngresso) - 600;
		printf("Preco do ingresso: %.2f Quantidade de ingressos vendidos: %d  Lucro: %.2f\n", ingresso,quantIngresso,lucro);
		ingresso -= 3;
		quantIngresso += 26;
	}
	
	
	
	return 0;
}
