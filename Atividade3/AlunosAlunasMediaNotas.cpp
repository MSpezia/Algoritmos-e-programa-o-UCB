#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa sistema
int main(){
	//Declarando variaveis
	int quantAlunos, i, alunos = 0, alunas = 0;
	float mediaAlunos = 0, mediaAlunas = 0;
	//Pedir ao usuario as variaveis
	printf("Quantos alunos ha na sala? ");
	scanf("%d", &quantAlunos);
	//Novas variaveis
	fflush(stdin);
	char sexo[quantAlunos];
	float nota[quantAlunos];
	//Pedir ao usuario as novas variaveis
	for(i = 0; i < quantAlunos; i++){
		printf("\nQual o sexo do aluno %d?(m ou f) ", i+1);
		scanf("%c", &sexo[i]);
		//Checando se o sexo é valido
		if(sexo[i] == 'm' or sexo[i] == 'f'){
		}else {
			printf("Sexo invalido.");
			i--;
		}
		
		fflush(stdin);
	}
	system("cls");
	
	for(i=0; i < quantAlunos; i++){
		printf("\nQual a nota do aluno %d? ", i+1);
		scanf("%f", &nota[i]);
	}
	
	system("cls");
	
	for(i = 0; i < quantAlunos; i++){
		if(sexo[i] == 'm'){
			alunos++;
		}else{
			alunas++;
		}
	}
	
	for(i = 0; i < quantAlunos; i++){
		if(sexo[i] == 'm'){
			mediaAlunos += nota[i]/alunos;
		}else{
			mediaAlunas += nota[i]/alunas;
		}
	}
	printf("Media alunos: %.2f", mediaAlunos);
	printf("\nMedia alunas: %.2f", mediaAlunas);
	
	return 0;
}
