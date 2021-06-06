#include<stdio.h>//Comando de entrada e saida
int main(){
	//Variaveis
	char sexo;
	
	//Entrada do usuario
	while(true){
		printf("Digite a letra inicial do seu sexo(m ou f): ");
		scanf("%c", &sexo);
		//Resposta do sistema
		if(sexo == 'm'){
			printf("Seu sexo e masculino.");
			break;
		}
		if(sexo == 'f'){
			printf("Seu sexo e feminino.");
			break;
		}
		if(sexo != 'm' and sexo != 'f'){
			printf("Inicial invalida.\n");
		}
		getchar();
	}

	
	return 0;
}
