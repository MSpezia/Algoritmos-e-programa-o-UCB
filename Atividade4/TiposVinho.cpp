#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Declarando variaveis
	double porTinto,porBranco,porRose,quantVinho;
	int quantTinto = 0,quantBranco = 0,quantRose = 0;
	char vinho;
	
	do{
		printf("Digite a letra equivalente ao tipo de vinho:\nT - Vinho tinto\nB - Vinho branco\nR - Vinho rose\nF - Fim\n");
		scanf("%c", &vinho);
		if(vinho == 'T' or vinho == 't')
			quantTinto++;
		if(vinho == 'B' or vinho == 'b')
			quantBranco++;
		if(vinho == 'R' or vinho == 'r')
			quantRose++;
		system("cls");
	}while(vinho != 'F' and vinho !='f');
	system("cls");
	
	quantVinho = quantTinto + quantBranco + quantRose;
	porTinto = quantTinto/(quantVinho);
	porBranco = quantBranco/(quantVinho);
	porRose = quantRose/(quantVinho);
	
	printf("Porcentagem de vinho tinto: %.2lf\n", porTinto*100);
	printf("Porcentagem de vinho branco: %.2lf\n", porBranco*100);
	printf("Porcentagem de vinho rose: %.2lf\n", porRose*100);
	printf("Quantidade total de vinhos: %.0lf", quantVinho);
	return 0;	
}
