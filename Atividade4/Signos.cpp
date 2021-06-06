#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declarando variaveis
	int dia,mes;
	//Entrada do usuario
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mes: ");
	scanf("%d", &mes);
	//Verificação e resposta do sistema
	if(mes == 1){
		if(dia < 20){
			printf("Seu signo e Capricornio.");
		}else{printf("Seu signo e Aquario.");}
	}
	
	if(mes == 2){
		if(dia < 18){
			printf("Seu signo e Aquario.");
		}else{printf("Seu signo e Peixes.");}
	}
	
	if(mes == 3){
		if(dia < 20){
			printf("Seu signo e Peixes.");
		}else{printf("Seu signo e Aries.");}
	}
	
	if(mes == 4){
		if(dia < 20){
			printf("Seu signo e Aries.");
		}else{printf("Seu signo e Touro.");}
	}
	
	if(mes == 5){
		if(dia < 20){
			printf("Seu signo e Touro.");
		}else{printf("Seu signo e Gemeos.");}
	}
	
	if(mes == 6){
		if(dia < 20){
			printf("Seu signo e Gemeos.");
		}else{printf("Seu signo e Cancer.");}
	}
	
	if(mes == 7){
		if(dia < 22){
			printf("Seu signo e Cancer.");
		}else{printf("Seu signo e Leao.");}
	}
	
	if(mes == 8){
		if(dia < 22){
			printf("Seu signo e Leao.");
		}else{printf("Seu signo e Virgem.");}
	}
	
	if(mes == 9){
		if(dia < 22){
			printf("Seu signo e Virgem.");
		}else{printf("Seu signo e Libra.");}
	}
	
	if(mes == 10){
		if(dia < 22){
			printf("Seu signo e Libra.");
		}else{printf("Seu signo e Escorpiao.");}
	}
	
	if(mes == 11){
		if(dia < 21){
			printf("Seu signo e Escorpiao.");
		}else{printf("Seu signo e Sagitario.");}
	}
	
	if(mes == 12){
		if(dia < 21){
			printf("Seu signo e Sagitario.");
		}else{printf("Seu signo e Capricornio.");}
	}
	return 0;
}
