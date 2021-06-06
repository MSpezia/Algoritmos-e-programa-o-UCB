#include<stdio.h>//Comando de entra e saida
#include<stdlib.h>//Limpa tela
int main(){
	//Variaveis
	float porCriancaMorta, porMeninoMorto, por24Meses;
	int criancaNascida, criancaMorta = 0, quantMeses, i = 0, meninoMorto = 0, menos24Meses = 0;
	char sexo;
	
	//Entrada do usuario
	printf("Quantas criancas nasceram nesse periodo?");
	scanf("%d", &criancaNascida);
	
	do{
		i++;
		getchar();
		while(true){
			printf("Qual o sexo da crianca %d(m ou f)? ", i);
			scanf("%c", &sexo);
			
			if(sexo != 'm' and sexo != 'f' and sexo !='v'){
				printf("Sexo invalido.\n");
			} else{break;}
		}
		if(sexo == 'v'){
			break;
		}
		printf("Quantos meses a criança %d viveu? ", i);
		scanf("%d", &quantMeses);
		
		criancaMorta++;
		if(sexo == 'm')
			meninoMorto++;
		if(quantMeses <= 24)
			menos24Meses++;
	}while(sexo != 'v');
	
	//Calculo do sistema
	porCriancaMorta = criancaMorta * 100/criancaNascida;
	porMeninoMorto = meninoMorto * 100/criancaNascida;
	por24Meses = menos24Meses * 100/criancaNascida;
	
	system("cls");//Limpa tela
	//Resposta do sistema
	printf("%.2f por cento das criancas desse periodo morreram.\n", porCriancaMorta);
	printf("%.2f por cento das criancas desse periodo eram menino e morreram.\n", porMeninoMorto);
	printf("%.2f por cento das criancas desse periodo morreram com 24 meses ou menos.", por24Meses);
	
	return 0;
}
