#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar tela
int main(){
	//Declarando variaveis
	int voto;
	float porVotos[6], totalVotos, quantVotos[6];
	quantVotos[1]=0;
	do{
		totalVotos++;
		//Entrada do usuario
		printf("Digite o numero designado para a opcao que deseja:\n0 = sair;\n1, 2, 3, 4 = voto para os respectivos candidatos;\n5 = voto nulo;\n6 = voto em branco\n");
		scanf("%d", &voto);
		switch(voto){
			case 1: quantVotos[1]++; break;
			case 2: quantVotos[2]++; break;
			case 3: quantVotos[3]++; break;
			case 4: quantVotos[4]++; break;
			case 5: quantVotos[5]++; break;
			case 6: quantVotos[6]++; break;
		}
		system("cls");
	}while(voto != 0);
	system("cls");
	//Calculo e resposta do sistema
	porVotos[1] = quantVotos[1]*100/totalVotos;
	porVotos[2] = quantVotos[2]*100/totalVotos;
	porVotos[3] = quantVotos[3]*100/totalVotos;
	porVotos[4] = quantVotos[4]*100/totalVotos;
	porVotos[5] = quantVotos[5]*100/totalVotos;
	porVotos[6] = quantVotos[6]*100/totalVotos;
	
	fflush(stdin);
	printf("Quantidade de votos do candidato 1: %.0f , %.2f porcento dos votos\n",quantVotos[1],porVotos[1]);
	printf("Quantidade de votos do candidato 2: %.0f , %.2f porcento dos votos\n",quantVotos[2],porVotos[2]);
	printf("Quantidade de votos do candidato 3: %.0f , %.2f porcento dos votos\n",quantVotos[3],porVotos[3]);
	printf("Quantidade de votos do candidato 4: %.0f , %.2f porcento dos votos\n",quantVotos[4],porVotos[4]);
	printf("Quantidade de votos do nulos: %.0f , %.2f porcento dos votos\n",quantVotos[5],porVotos[5]);
	printf("Quantidade de votos em branco: %.0f , %.2f porcento dos votos",quantVotos[6],porVotos[6]);
	return 0;	
}
