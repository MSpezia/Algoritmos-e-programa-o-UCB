//Entrada: a,b,c
//Saida:x',x''
//Processamento: calculo
#include<stdio.h>//biblioteca para entrada e saida de dados: scanf e printf
#include<math.h>//biblioteca matematica
int main () {//inicio do algoritmo : fun��o main
	double a,b,c,x1,x2,delta;
	printf("Digite o valor de A: ");
	scanf("%lf", &a);//codigo formata��o - codigo de endere�o - variavel
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	printf("Digite o valor de C: ");
	scanf("%lf", &c);
	
	//Condi��o: n�o posso cdividir por zero
	//se (A = 0) Ent�o
	//escreva(Impossivel calcular)
	//sen�o calcule
	delta = pow(b,2) - 4*a*c;
	
	if(a== 0 or delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	x1 = (-(b) + sqrt(delta))/2*a;
	x2 = (-(b) - sqrt(delta))/2*a;

	
	printf("x1 = %lf\nx2 = %lf\n", x1,x2);


return 0;//retorno da fun��o
	
}//final do algoritmo
