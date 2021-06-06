#include<stdio.h>
#include<stdlib.h>
int main (){
	int quantDados;
	float total;

	printf("Digite a quantidade de dados: ");
	scanf("%d", &quantDados);
	system("cls");
	
	float dados[quantDados];
	int i = 0;
	
	for(i = 0; i < quantDados; i++){
		printf("Escreva o dado %d: ", i + 1);
		scanf("%f", &dados[i]);
		system("cls");
	}
	
	for(i = 0; i < quantDados; i++){
		total += dados[i];
	}
	
	printf("Soma = %f.2", total);
	
	return 0;
}
