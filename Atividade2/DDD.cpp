#include<stdio.h>
int main(){
	int ddd;
	
	printf("Digite o DDD: ");
	scanf("%d", &ddd);
	
	switch(ddd){
		case 61: printf("Brasilia"); break;
		case 62: printf("Goias"); break;
		case 71: printf("Salvador"); break;
		case 11: printf("Sao Paulo"); break;
		case 21: printf("Rio de Janeiro"); break;
		case 32: printf("Juiz de Fora"); break;
		case 19: printf("Campinas"); break;
		case 27: printf("Vitoria"); break;
		case 31: printf("Belo Horizonte"); break;
		default: printf("DDD invalido"); break;
	}
	return 0;
}
