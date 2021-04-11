#include<stdio.h>//Comando de entra e saida
int main(){
	//Definindo variaveis
	char nome[32];
	char sexo;
	double altura, peso;
	//Input do Usuario
	printf("Digite o seu nome: ");
	fgets(nome , sizeof(nome) , stdin);
	printf("Digite o seu sexo: ");
	scanf("%s", &sexo);
	printf("Digite sua altura: ");
	scanf("%lf", &altura);
	
	//Teste e resposta do sistema
	if(sexo == 'm' or sexo == 'M'){
		peso = (72.5 * altura) - 58;
		printf("Ilmo Sr "); puts(nome);
		printf("Seu peso ideal e: %lf", peso);
		return 0;
	}else{
		peso = (62.1 * altura) - 44.7;
		printf("Ilma Sra "); puts(nome);
		printf("Seu peso ideal e: %lf", peso);
	}
	
	return 0;
}
