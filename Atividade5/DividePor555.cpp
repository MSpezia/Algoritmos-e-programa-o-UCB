#include<stdio.h>//Comando de entrada e saida
int main(){
	//Variaveis
	double numero, resultado;
	
	//Entrada do usuario
	printf("Digite um numero: ");
	scanf("%lf", &numero);
	//Calculo e reposta do sistema
	resultado = numero * 100/555;
	
	printf("Resultado: %lf porcento.", resultado);
	
	return 0;
}
