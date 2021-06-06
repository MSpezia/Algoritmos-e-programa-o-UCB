#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpar sistema
int main(){
	//Definindo variaveis
	float altura[10];
	int i;
	float menorAltura = 100;
	//Pedir ao usuario as variaveis
	for(i = 0; i < 10; i++){
		printf("Digite a altura da pessoa %d: ", i+1);
		scanf("%f", &altura[i]);
	}
	//Calculo e reposta do sistema
	system("cls");
	i = 0;
	while(i < 10){
		 if(altura[i] < menorAltura ){
		 	menorAltura = altura[i];
		 }
		 i++;
	}
	printf("A menor altura e: %f", menorAltura);
	return 0;
}
