#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	float alturaAnacleto, alturaFelisberto;
	int anos;
	alturaAnacleto = 1.5;
	alturaFelisberto = 1.1;
	do{
		alturaAnacleto += 0.2;
		alturaFelisberto += 0.3;
		anos++;
	}while(alturaAnacleto > alturaFelisberto);
	
	printf("Felisberto sera mais alto que Anacleto em %d anos.", anos);
	
	return 0;
}
