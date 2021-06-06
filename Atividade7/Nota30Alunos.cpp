#include<stdio.h>//Comando de entrada e saida
int main(){
	//Variaveis
	float vetor[30];
	
	//Entrada do usuario
	for(int i = 0; i < 30; i++){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	return 0;
}
