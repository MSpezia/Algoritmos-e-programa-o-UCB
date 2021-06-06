#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	int quantFuncionarios;
	float maiorSalario = 0,menorSalario = 1000000000;
	bool matriculaValida = true;
	
	//Entrada do usuario
	while(true){
		printf("Quantos funcionario existem na empresa? ");
		scanf("%d", &quantFuncionarios);
		if(quantFuncionarios < 1 or quantFuncionarios > 80){
			printf("Numero invalido, tente novamente.\n");
		} else break;
	}
	//Novas variaveis
	int matricula[quantFuncionarios];
	float salario[quantFuncionarios];
	//Novas entradas
	for(int i = 1; i <= quantFuncionarios; i++){
		do{
			printf("Qual a matricula do funcionario %d? ", i);
			scanf("%d", &matricula[i]);
			
			for(int j = 0; j < i; j++){
				if(matricula[i] == matricula[j]){
					printf("Matricula ja digitada, tente outra.\n");
					matriculaValida = true;
				}
				if(matricula[i] != matricula[j]){
					matriculaValida = false;
				}
			
			}
		
		}while(matriculaValida == true);
		printf("Qual o salario do funcionario %d? ", i);
		scanf("%f", &salario[i]);
		if(maiorSalario < salario[i])
			maiorSalario = salario[i];
		if(menorSalario > salario[i])
			menorSalario = salario[i];
	}
	
	system("cls");
	
	//Calculo e Resposta do sistema
	for(int i = 1; i <= quantFuncionarios; i++){
		printf("Matricula do funcionario %d: %d\n", i, matricula[i]);
		printf("Salario do funcionario %d: %.2f\n", i, salario[i]);
	}
	printf("Maior salario: %.2f\n", maiorSalario);
	printf("Menor salario: %.2f\n", menorSalario);
	
	return 0;	
}
