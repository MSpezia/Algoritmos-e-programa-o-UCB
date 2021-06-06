#include<stdio.h>//Comando de entrada e saida
#include<string.h>//neccesario para strcmp
#include<stdlib.h>//Limpa sistema
int main(){
	//Declaracão de variaveis
	double porcentagemMulheres;
	int idade, maiorIdade = 0, mulheresB = 0, i = 0;
	char sexo, corOlhos[40], corCabelos[40];
	//do...while com entrada do usuario e calculo de meior idade e de mulheres com a descrição da B
	do{
		i++;
		while(true){
			printf("Qual o sexo da pessoa %d(m ou f)? ", i);
			scanf("%c", &sexo);
			if(sexo != 'm' and sexo != 'f'){
				printf("Sexo invalido.\n");
			} else{break;}
		}
		while(true){
			printf("Qual a cor dos olhos da pessoa %d(azuis, verdes, castanhos, pretos)? ", i);
			scanf("%s", &corOlhos);
			if(strcmp(corOlhos,"azuis") != 0 and strcmp(corOlhos,"verdes") != 0 and strcmp(corOlhos,"castanhos") != 0 and strcmp(corOlhos,"pretos") != 0){
				printf("Cor de olhos invalido.\n");
			} else{break;}
		}
		while(true){
			printf("Qual a cor do cabelo da pessoa %d(loiros, castanhos, pretos)? ", i);
			scanf("%s", &corCabelos);
			if(strcmp(corCabelos,"loiros") != 0 and strcmp(corCabelos,"castanhos") != 0 and strcmp(corCabelos,"pretos") != 0){
				printf("Cor de cabelo invalida.\n");
			} else{break;}
		}
		while(true){
			printf("Qual a idade da pessoa %d? ", i);
			scanf("%d", &idade);
			if(idade < -1){
				printf("Idade invalida.\n");
			} else{break;}
		}
		if(idade > maiorIdade){
			maiorIdade = idade;
		}
		if(sexo == 'f' and idade > 17 and idade < 36 and strcmp(corOlhos,"verdes") == 0 and strcmp(corCabelos,"loiros") == 0){
			mulheresB++;
		}
		getchar();
		system("cls");
	}while(idade != -1);
	i--;
	//Calculo e resposta do sistema
	
	system("cls");
	printf("Maior idade:%d\n", maiorIdade);
	porcentagemMulheres = 100 * mulheresB/i;
	printf("Porcentagem de mulheres adultas, loiras de olhos verdes: %.2lf", porcentagemMulheres);
	
	
	return 0;
}
