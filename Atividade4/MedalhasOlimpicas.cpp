#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Comando de limpar tela
int main(){
	//Declarando variaveis
	char pais1[32], pais2[32], pais3[32];
	int quantOuro[3], quantPrata[3], quantBronze[3], pontuacao[3];
	//Entradas do usuario
	printf("Qual o nome do primeiro pais? ");
	scanf("%s", &pais1);
	printf("Quantas medalhas de ouro %s ganhou? ", pais1);
	scanf("%d", &quantOuro[1]);
	printf("Quantas medalhas de prata %s ganhou? ", pais1);
	scanf("%d", &quantPrata[1]);
	printf("Quantas medalhas de bronze %s ganhou? ", pais1);
	scanf("%d", &quantBronze[1]);
	
	system("cls");
	
	printf("Qual o nome do segundo pais? ");
	scanf("%s", &pais2);
	printf("Quantas medalhas de ouro %s ganhou? ", pais2);
	scanf("%d", &quantOuro[2]);
	printf("Quantas medalhas de prata %s ganhou? ", pais2);
	scanf("%d", &quantPrata[2]);
	printf("Quantas medalhas de bronze %s ganhou? ", pais2);
	scanf("%d", &quantBronze[2]);
	
	system("cls");
	
	printf("Qual o nome do terceiro pais? ");
	scanf("%s", &pais3);
	printf("Quantas medalhas de ouro %s ganhou? ", pais3);
	scanf("%d", &quantOuro[3]);
	printf("Quantas medalhas de prata %s ganhou? ", pais3);
	scanf("%d", &quantPrata[3]);
	printf("Quantas medalhas de bronze %s ganhou? ", pais3);
	scanf("%d", &quantBronze[3]);
	
	system("cls");
	
	pontuacao[1] = quantOuro[1]*3 + quantPrata[1]*2 + quantBronze[1];
	pontuacao[2] = quantOuro[2]*3 + quantPrata[2]*2 + quantBronze[2];
	pontuacao[3] = quantOuro[3]*3 + quantPrata[3]*2 + quantBronze[3];
	
	if(pontuacao[1]>pontuacao[2] and pontuacao[1]>pontuacao[3]){
		printf("Vencedor: %s", pais1);
	}
	if(pontuacao[2]>pontuacao[1] and pontuacao[2]>pontuacao[3]){
		printf("Vencedor: %s", pais2);
	}
	if(pontuacao[3]>pontuacao[2] and pontuacao[3]>pontuacao[1]){
		printf("Vencedor: %s", pais3);
	}
	return 0;
}
