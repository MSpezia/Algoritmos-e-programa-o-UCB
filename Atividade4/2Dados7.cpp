#include<stdio.h>//Comando de entrada e saida
int main(){
	//Declaração de variaveis
	int n1,n2,soma;
	
	//Calculo do sistema
	for(n1 = 0; n1<=6; n1++){
		for(n2 = 0;n2<=6;n2 ++ ){
			if(n1 + n2 == 7){
				printf("Dado 1: %d Dado 2: %d\n", n1,n2);
			}
		}
	}
	
	return 0;
}
