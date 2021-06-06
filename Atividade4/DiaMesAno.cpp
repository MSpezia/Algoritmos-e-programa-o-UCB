#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declarando variaveis
	int dia,mes,ano;
	//Entrada do usuario
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mes: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	//Verificação e Resposta do sistema
	if(mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12){
		if(dia <= 31 or dia == 0){
			printf("Data valida.");
		}else{printf("Data invalida.");}
	}
	
	if(mes == 4 or mes == 6 or mes == 9 or mes == 11){
		if(dia <= 30 or dia == 0){
			printf("Data valida.");
		}else{printf("Data invalida.");}
	}
	
	if(mes == 2 and ano % 4 == 0 and ano % 100 != 0){
		if(dia <= 29 or dia == 0){
			printf("Data valida.");
		}else{printf("Data invalida.");}
	}else if(mes == 2){
		if(dia <= 28 or dia == 0){
			printf("Data valida.");
		}else{printf("Data invalida.");}
	}
	
	if(mes > 12 or mes == 0){
		printf("Data invalida.");
	}
	return 0;
}
