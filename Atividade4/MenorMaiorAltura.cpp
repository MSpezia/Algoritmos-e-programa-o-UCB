#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Declarando Variaveis
	char sexo;
	int quantMulheres = 0, i;
	float menorAltura = 1000, maiorAltura = 0, altura, somaAltura = 0, mediaAltura;
	
	//Entrada do usuario e calculo do sistema
	for(i = 0; i<50; i++){
		while(true){
			printf("Qual o sexo da pessoa %d? ", i+1);
			scanf("%c", &sexo);
			if(sexo != 'm' and sexo != 'f'){
				printf("Sexo invalido, digite novamente.\n");
			}else{break;}
			getchar();
		}
		printf("Qual a altura da pessoa %d? ", i+1);
		scanf("%f", &altura);
		getchar();
		if(altura > maiorAltura){
			maiorAltura = altura;
		}
		if(altura < menorAltura){
			menorAltura = altura;
		}
		if(sexo == 'f'){
			quantMulheres++;
			somaAltura += altura;
		}
	}
	
	system("cls");
	//Reposta do sistema
	printf("Maior altura: %.2f\n", maiorAltura);
	printf("Menor altura: %.2f\n", menorAltura);
	mediaAltura = somaAltura/quantMulheres;
	printf("Media de altura das mulheres: %.2f", mediaAltura);
	
	
	return 0;
}
