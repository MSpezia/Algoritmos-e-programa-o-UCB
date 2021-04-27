//Nome: Matheus Spezia Freire Lorenz	Matrícula:UC21103938
#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<stdlib.h>//Biblioteca contendo o comando para limpar a tela
#include<string.h>
int main(){//inicialização do programa
	//Declaração de variaveis
	char filme[32],nome[32];
	int idade, quantPessoas, quantSessoes;
	int i = 0;//variavel interação de for
	double ganho;
	//Uso do código limpo na nomenclatura das variaveis e organização do código
	//Entrada e leitura do nome do filme
	while (true){
		printf("Qual o nome do filme assistido? ");
		fgets(filme, sizeof(filme), stdin);
		filme[strcspn(filme, "\n")] = 0;
		//invalidando o nome do filme "vazio":
			if(filme[0] == '\0'){
				printf("Nome do filme invalido.\n\n");
			}else{break;}
	}
	//Entrada e leitura da quantidade de sessões
	while (true){
		printf("\nQuantas sessoes foram apresentadas?(obrigatoriamente duas) ");
		scanf("%d", &quantSessoes);
		//Invalidando se ouver mais ou menos de 2 sessoes:
			if(quantSessoes != 2){
				printf("Quantidade de sessoes invalidas, pecisam ser 2 sessoes\n");
			}else{break;}
	}
	//Entrada e leitura da quantidade de pessoas
	while (true){
		printf("\nQuantas pessoas assistiram o filme?(minimo de dez pessoas) ");
		scanf("%d", &quantPessoas);
		//Invalidando se a quantidade de pessoas for menor que 10
			if(quantPessoas < 10){
				printf("Quantidade de pessoas invalida, minimo de 10 pessoas\n");
			}else{break;}
	}
	
	fflush(stdin);//Limpa memoria
	
	//arrays para ler o sexo e a idade
	char sexos[quantPessoas];
	int idades[quantPessoas];
	for(i = 0; i < quantPessoas; i++){
		printf("\nQual o sexo da pessoa %d?(m ou f) ", i+1);
		scanf("%c", &sexos[i]);
		//Checando se o sexo é valido
		if(sexos[i] == 'm' or sexos[i] == 'M' or sexos[i] == 'f' or sexos[i] == 'F'){
		}else {
			printf("Sexo invalido.");
			i--;
		}
		
		fflush(stdin);
	}
	for(i=0; i < quantPessoas; i++){
		printf("\nQual a idade da pessoa %d? ", i+1);
		scanf("%d", &idades[i]);
		//checando se a idade e valida
		if(idades[i] < 3 or idades[i] > 100){
			printf("Idade invalida, a pessoa nao pode ter menos de 3 anos ou mais de 100 anos.");
			i--;
		}
	}
	//variaveis e sistema usando for para contar quantidade de homens e mulheres
	int homens = 0;
	int mulheres = 0;
	for(i = 0; i < quantPessoas; i++){
		if(sexos[i] == 'm' or sexos[i] == 'M'){
			homens++;
		}else{
			mulheres++;
		}
	}
		
	//variaveis e sistema usando for para contar a quantidade de pessoas em cada classificação indicativa
	int crianca = 0;
	int adolescente = 0;
	int adulto = 0;
	int idoso = 0;
	for(i = 0; i < quantPessoas; i++){
		if(idades[i] > 64){
			idoso++;
		} else if (idades[i] > 17){
			adulto ++;
		} else if (idades[i] > 12){
			adolescente ++;
		} else {
			crianca ++;
		}
	}
	system("cls"); //limpar janela
	
	//apresentando o nome do filme, a quantidade de homens e mulheres e a quantidade de pessoas por faixa etaria
	printf("Nome do filme: "); puts(filme);
	printf("Quantidade de homens: %d", homens);
	printf("\n\nQuantidade de mulheres: %d", mulheres);
	printf("\n\nQuantidade de criancas: %d", crianca);
	printf("\n\nQuantidade de adolescentes: %d", adolescente);
	printf("\n\nQuantidade de adultos: %d", adulto);
	printf("\n\nQuantidade de idosos: %d", idoso);
	
	//Pausa para ler a tabela e função para continuar apos a leitura
	char continuar;
	printf("\n\nAperte enter duas vezes para continuar.");
	continuar = fgetc(stdin);
	continuar = getchar();
	system("cls"); //limpar janela
	
	//variaveis e sistema usando for para ler a quantidade de maiores de idade que sao homens ou mulheres
	int mulherMaisDezoito = 0;
	int homemMaisDezoito = 0;
	for (i = 0; i < quantPessoas; i++){
		if(idades[i] > 17 and sexos[i] == 'm'){
			homemMaisDezoito++;
		}
		if(idades[i] > 17 and sexos[i] == 'M'){
			homemMaisDezoito++;
		}
		if(idades[i] > 17 and sexos[i] == 'f'){
			mulherMaisDezoito++;
		}
		if(idades[i] > 17 and sexos[i] == 'F'){
			mulherMaisDezoito++;
		}
	}
	//apresentando quanridade de homens e mulhere maiores de idade
	printf("Quantidade de maiores de idade do sexo feminino: %d", mulherMaisDezoito);
	printf("\n\nQuantidade de maiores de idade do sexo masculino: %d", homemMaisDezoito);
	
	//Calculo do ganho do cinema sabendo que cada ingresso é 15 reais e criancas e idosos pagam metade
	ganho = 15*adulto + 7.5*crianca + 7.5*idoso + 15*adolescente;
	//Impressao da quantidade ganhada pelo cinema
	printf("\n\nO cinema ganhou: %.2lf reais por sessao", ganho);
	
	
	return 0;//fim do programa
}
