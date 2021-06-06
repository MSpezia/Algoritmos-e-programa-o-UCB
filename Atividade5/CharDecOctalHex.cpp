#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main (){
	//Variaveis
	char a;
	
	//Entrada do usuario
	printf("Digite um caractere: ");
	scanf("%c", &a);
	
	system("cls");
	//Reposta do sistema
	printf("Caractere: %c\nDecimal: %i\nOctal: %o\nHexadecimal: %x", a,a,a,a);
	
	
	
	return 0;
}
