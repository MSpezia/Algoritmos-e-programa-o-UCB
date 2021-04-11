#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definido variaveis
	double lado1, lado2, lado3;
	
	//Input do Usuario
	printf("Por favor inserir o primeiro lado do triangulo: ");
	scanf("%lf", &lado1);
	printf("Por favor inserir o segundo lado do triangulo: ");
	scanf("%lf", &lado2);
	printf("Por favor inserir o terceiro lado do triangulo: ");
	scanf("%lf", &lado3);
	
	//Calculo e reposta do sistema
	if(lado1 > lado2 + lado3 or lado2 > lado1 + lado3 or lado3 > lado1 + lado2){
		printf("Esse triangulo nao existe.");
		return 0;
	}
	if(lado1 == lado2 and lado1 == lado3 and lado2 == lado3){
		printf("Esse triangulo existe e e equilatero.");
		return 0;
	}
	if(lado1 == lado2 or lado1 == lado3 or lado2 == lado3){
		printf("Esse triangulo existe e e isoceles.");
		return 0;
	}
	printf("Esse triangulo existe e e escaleno.");
	return 0;
}
