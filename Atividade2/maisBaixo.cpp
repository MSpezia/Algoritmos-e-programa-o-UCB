#include<stdio.h>//Comando de entrada e saida
int main(){
	//Definindo variaveis
	char nome1[32], nome2[32], nome3[32];
	double altura1, altura2, altura3;
	
	//Input do Usuario
	printf("Digite o nome da primeira pessoa: ");
	scanf("%s", nome1);
	fflush(stdin);
	printf("Digite a altura da primeira pessoa: ");
	scanf("%lf", &altura1);
	printf("Digite o nome da segunda pessoa: ");
	scanf("%s", nome2);
	printf("Digite a altura da segunda pessoa: ");
	scanf("%lf", &altura2);
	printf("Digite o nome da terceira pessoa: ");
	scanf("%s", nome3);
	printf("Digite a altura da terceira pessoa: ");
	scanf("%lf", &altura3);
	
	//Analise e resposta do sistema
	if(altura1 < altura2 and altura1 < altura3){
		printf("%.2lf e a menor altura pertencente a ", altura1); puts(nome1);
		return 0;
	}
	if(altura2 < altura1 and altura2 < altura3){
		printf("%.2lf e a menor altura pertencente a ", altura2); puts(nome2);
		return 0;
	}
	if(altura3 < altura2 and altura3 < altura1){
		printf("%.2lf e a menor altura pertencente a ", altura3); puts(nome3);
		return 0;
	}
	if(altura1 == altura2 or altura1 == altura3 or altura2 == altura3){
		printf("Mais de uma pessao e a mais baixa");
	}
	

	return 0;
}
