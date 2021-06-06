#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Declarando variaveis
	int N1,N2,i,j;
	bool primo;
	//Entrada do usuario
	while(true){
		printf("Digite o primeiro numero: ");
		scanf("%d", &N1);
		printf("Digite o segundo numero: ");
		scanf("%d", &N2);
		if(N1 > N2 or N1 < 0 or N2 < 0){
			system("cls");
			printf("Numeros invalidos.\n");
		}else{break;}
	}
	
	//Resposta do sistema
	printf("Numeros primos:\n");
	for(i = N1; i <= N2; i++){
		primo = true;
		for(j = 2; j < i; j++){
			if(i % j == 0){
			primo = false;
			}
		}
		if(primo){
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}
