#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//limpa tela
int main(){
	//Variaveis
	float altura, mediaAltMulheres, maiorAltura = 0, menorAltura = 10000,somaAltMulheres;
	int quantHomens,quantMulheres;
	char sexo;
	
	for(int i = 1; i <= 10; i++){
		while(true){
			printf("Qual o sexo da pessoa %d(m ou f)? ", i);
			scanf("%c", &sexo);
			if(sexo != 'm' and sexo != 'f'){
				printf("Sexo invalido.\n");
			} else{break;}
		}
		while(true){
			printf("Qual a altura da pessoa %d? ", i);
			scanf("%f", &altura);
			if(altura < 0.1){
				printf("Altura invalida.\n");
			} else{break;}
		}
		if(altura > maiorAltura)
			maiorAltura = altura;
		if(altura < menorAltura)
			menorAltura = altura;
		if(sexo == 'm')
			quantHomens++;
		if(sexo == 'f'){
			quantMulheres++;
			somaAltMulheres += altura;
		}
		
		getchar();
		system("cls");
	}
	
	mediaAltMulheres = somaAltMulheres/quantMulheres;
	
	printf("Maior Altura: %.2f\n", maiorAltura);
	printf("Menor Altura: %.2f\n", menorAltura);
	printf("Media da altura das mulheres: %.2f\n", mediaAltMulheres);
	printf("Quantidade de homens: %d", quantHomens);
	
	
	return 0;
}
