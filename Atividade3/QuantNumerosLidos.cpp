#include<stdio.h>//Comando entrada e saida
#include<stdlib.h>//Limpa sistema
int main(){
	//Declarando variaveis
	float numero;
	int i = 0;
	//do...while com entrada do usuario
	do{
		printf("Digite um numero: ");
		scanf("%f", &numero);
		i++;
	}while(i < 100 and numero > -1);
	
	system("cls");
	//resposta do sistema
	printf("Quantidade de numeros lidos: %d", i);
	
	return 0;
}
