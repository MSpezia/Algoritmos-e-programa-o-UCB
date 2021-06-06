#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	int quantVotos, voto, votoPele = 0, votoMaradona = 0, votoBranco = 0, votoNulo = 0;
	char confirmacao;
	//Entrada do usuario e calculo do sistema
	printf("Quantas pessoas votarao? ");
	scanf("%d", &quantVotos);
	system("cls");//Limpa tela
	for(int i = 0; i < quantVotos; i++){
		while(true){
			printf("Digite o numero que ao lado do jogador para votar nele:\n25 - Pele\n33 - Maradona\n0 - Voto em branco\n");
			scanf("%d", &voto);
			system("cls");//Limpa tela
			while(true){
				printf("Voce tem certeza de seu voto?(s ou n) ");
				scanf("%c", &confirmacao);
				if(confirmacao != 's' and confirmacao != 'n'){
					printf("Resposta invalida.");
					system("cls");//Limpar tela
				}else{break;}
			}
			system("cls");//Limpa tela
			if(confirmacao == 'n'){
			}else{break;}
		}
		switch(voto){
			case 0: votoBranco++;break;
			case 25: votoPele++;break;
			case 33: votoMaradona++;break;
			default: votoNulo++;break;
		}
	}
		
	system("cls");
	printf("Votos para o Pele: %d\n", votoPele);
	printf("Votos para o Maradona: %d\n", votoMaradona);
	printf("Votos em branco: %d\n", votoBranco);
	printf("Votos nulos: %d\n", votoNulo);
	if(votoPele > votoMaradona){
		printf("Vencedor: Pele");
		return 0;	
	}
	if(votoMaradona > votoPele){
		printf("Vencedor: Maradona");
		return 0;
	}
	if(votoMaradona == votoPele){
		printf("Vencedor: Empate");
	}
	
	return 0;
}
