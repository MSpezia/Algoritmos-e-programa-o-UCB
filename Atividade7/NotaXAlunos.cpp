#include<stdio.h>//Comando de entrada e saida
int main(){
	//Variaveis
	int quantAlunos;
	
	//Entrada do usuario
	while(true){
		printf("Quantos alunos ha na sala? ");
		scanf("%d", &quantAlunos);
		if(quantAlunos < 1 or quantAlunos > 50){
			printf("Quantidade de alunos invalida, tente novamente.\n");
		}else break;
	}
	float vetor[quantAlunos];	//Nova variavel
	for(int i = 0; i < 30; i++){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	return 0;
}
