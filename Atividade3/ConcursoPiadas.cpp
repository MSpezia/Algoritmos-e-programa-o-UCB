#include<stdio.h>//Comando de entrada e saida
#include<string.h>//Manipulação de string
#include<stdlib.h>//Limpa de sistema
int main(){
	//Declarando variaveis
	char finalista1[32], finalista2[32], finalista3[32];
	int quantJuiz, totalPontos1 = 0, totalPontos2 = 0, totalPontos3 =0, i = 0;
	
	//Entrada do usuario
	printf("Digite o nome do primeiro finalista: ");
	fgets(finalista1, sizeof(finalista1), stdin);
	finalista1[strcspn(finalista1, "\n")] = 0;
	printf("Digite o nome do segundo finalista: ");
	fgets(finalista2, sizeof(finalista2), stdin);
	finalista2[strcspn(finalista2, "\n")] = 0;
	printf("Digite o nome do terceiro finalista: ");
	fgets(finalista3, sizeof(finalista3), stdin);
	finalista3[strcspn(finalista3, "\n")] = 0;
	printf("Digite a quantidade de juizes: ");
	scanf("%d", &quantJuiz);
	
	//Novas variaveis
	int notaFinalista1[quantJuiz], notaFinalista2[quantJuiz], notaFinalista3[quantJuiz];
	
	//Novas entradas usando for
	for(i = 0; i < quantJuiz; i++){
		while(true){
			printf("Qual a nota do juiz %d para o finalista 1(de 0 a 100): ", i+1);
			scanf("%d", &notaFinalista1[i]);
			if(notaFinalista1[i] < 0 or notaFinalista1[i] > 100){
				printf("Nota invalida.\n");
			}else{break;}
		}
		while(true){
			printf("Qual a nota do juiz %d para o finalista 2(de 0 a 100): ", i+1);
			scanf("%d", &notaFinalista2[i]);
			if(notaFinalista2[i] < 0 or notaFinalista2[i] > 100){
				printf("Nota invalida.\n");
			}else{break;}
		}
		while(true){
			printf("Qual a nota do juiz %d para o finalista 3(de 0 a 100): ", i+1);
			scanf("%d", &notaFinalista3[i]);
			if(notaFinalista3[i] < 0 or notaFinalista3[i] > 100){
				printf("Nota invalida.\n");
			}else{break;}
		}
	
	}
	system("cls");
	//calculo do sistema
	for(i = 0; i < quantJuiz; i++){
		totalPontos1 += notaFinalista1[i];
	}
	for(i = 0; i < quantJuiz; i++){
		totalPontos2 += notaFinalista2[i];
	}
	for(i = 0; i < quantJuiz; i++){
		totalPontos3 += notaFinalista3[i];
	}
	//Reposta do sistema 
	printf("Participante 1: "); puts(finalista1);
	printf("Quantidade de pontos: %d\n", totalPontos1);
	printf("Participante 2: "); puts(finalista2);
	printf("Quantidade de pontos: %d\n", totalPontos2);
	printf("Participante 3: "); puts(finalista3);
	printf("Quantidade de pontos: %d\n", totalPontos3);
	
	//Pausa para ler as informações e função para continuar apos a leitura
	char continuar;
	printf("\n\nAperte enter duas vezes para continuar.");
	continuar = fgetc(stdin);
	continuar = getchar();
	system("cls");
	
	if(totalPontos1 > totalPontos2 and totalPontos1 > totalPontos3){
		printf("O vencedor e ");puts(finalista1);
		printf("Com %d pontos", totalPontos1);
	}
	if(totalPontos2 > totalPontos1 and totalPontos2 > totalPontos3){
		printf("O vencedor e ");puts(finalista2);
		printf("Com %d pontos", totalPontos2);
	}
	if(totalPontos3 > totalPontos2 and totalPontos3 > totalPontos1){
		printf("O vencedor e ");puts(finalista3);
		printf("Com %d pontos", totalPontos3);
	}
	return 0;
}
