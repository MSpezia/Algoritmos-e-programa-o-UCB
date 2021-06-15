//Nome:Matheus Spezia Freire Lorenz Matricula:UC21103938
#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Necessario para limpar a tela
#include<windows.h>//Necessario para colorir o texto
int main(){//Começo do programa
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//Necessario para mudar a cor do texto
	//Variaveis
	char destino[32];
	int quantAssentos, menuAcao, quantPessoas, i;
	float preco, custoFinal;
	
	SetConsoleTextAttribute(hConsole, 15);//Pinta o texto de branco
	//Entrada do destino pelo usuario
	printf("Digite o nome do destino: ");
	scanf("%s", &destino);
	
	system("cls");//Limpa tela
	//Entrada da quantidade de assentos pelo usuario usando while e if para validar a entrada
	while(true){
		printf("Quantos assentos o voo possui?(De 90 a 200) ");
		scanf("%d", &quantAssentos);
		if(quantAssentos > 200 or quantAssentos < 90){
			system("cls");
			printf("Quantidade invalida, tente novamente.\n");
		}else break;
	}
	
	system("cls");//Limpa tela
	//Entrada do preço da passagem
	printf("Qual o preco da passagem? ");
	scanf("%f", &preco);
	
	system("cls");//Limpa tela
	//Entrada da quantidade de pessoas usando while e if para validar a entrada
	while(true){
		printf("Quantas pessoas irao viajar? ");
		scanf("%d", &quantPessoas);
		if(quantPessoas >= quantAssentos){
			system("cls");
			printf("Quantidade invalida, digite novamente.\n");
		}else break;
	}
	
	//Novas variaveis
	int idade[quantPessoas], reserva[quantPessoas], cancelamento[quantPessoas], compra[quantPessoas];
	//Entrada da idade dos pessoas usando while e if para validar a entrada
	for(i = 1; i <= quantPessoas; i++){
		while(true){
			printf("Qual a idade da pessoa %d? ", i);
			scanf("%d", &idade[i]);
			if(idade < 0){
			system("cls");
			printf("Idade invalida, tente novamente.\n");
			}else break;
		}
	//Caso a idade seja menor ou igual a 5 anos a passagem tem metade do preço
		if(idade[i] <= 5){
			custoFinal += preco/2;
		}else{
			custoFinal += preco;
		}
	}
	
	system("cls");//Limpa tela
	
	char ocupacao[quantAssentos];//Nova variavel usada mais tarde para verificações
	//Sistema for para imprimir o mapa de assentos e guardar o estado do assento
	for(i = 1; i <= quantAssentos; i++){
		if(i % 7 == 0 or i % 13 == 0){
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);//Pinta texto de vermelho
			printf("R");
			ocupacao[i]='R';
		}else if(i % 11 == 0 or i % 17 == 0){
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);//Pinta texto de azul
			printf("C");
			ocupacao[i]='C';
		}else{
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);//Pinta texto de verde
			printf("D");
			ocupacao[i]='D';
		}
		if(i % 3 == 0)
			printf(" ");
		if(i % 9 == 0)
			printf("\n");
	}
	SetConsoleTextAttribute(hConsole, 15);//Volta a cor do texto para branco
	//Menu para o usuario escolher sua ação com while e if para validar a ação
	while(true){
		printf("\nO que voce deseja fazer?\n1 - Efetuar uma reserva\n2 - Cancelar uma reserva\n3 - Confirmar a compra da reserva\n");
		scanf("%d", &menuAcao);
		if(menuAcao < 1 or menuAcao > 3){
			system("cls");
			printf("Opcao invalida, tente novamente.\n");
		}else break;
	}
	//Sistema para reservar um assento usando while e if para validar se o assento esta disponivel
	if(menuAcao == 1){
		for(i = 1; i <= quantPessoas; i++){
			while(true){
				printf("Qual assento deseja reservar? ");
				scanf("%d", &reserva[i]);
				if(ocupacao[reserva[i]] != 'R' and ocupacao[reserva[i]] != 'C' and ocupacao[reserva[i]] != 'D'){
					printf("Opcao invalida, tente novamente.\n");
				}else if(ocupacao[reserva[i]] == 'R'){
					printf("Assento ja reservado, escolha outro.\n");
				}else if(ocupacao[reserva[i]] == 'C'){
					printf("Assento ja comprado, escolha outro.\n");
				}else break;
			}
			ocupacao[reserva[i]] = 'R';
		}
		system("cls");
		//Resposta do sistema
		printf("RESERVA EFETUADA COM SUCESSO!\nDESTINO: %s\nPRECO: %.2f REAIS\nNUMERO DO ASSENTO: ",destino, custoFinal);
		for(i = 1; i <= quantPessoas; i++){
			printf("%d",reserva[i]);
			if(i < quantPessoas){
				printf(", ");
			}
		}
		printf("\nOBRIGADO POR ESCOLHER SALUMAR LINHAS AEREAS!");
	}
	//Sistema de cancelamento de reserva com while e if para validar se o assento ja foi reservado
	if(menuAcao == 2){
		for(i = 1; i <= quantPessoas; i++){
			while(true){
				printf("Qual assento deseja cancelar a reserva? ");
				scanf("%d", &cancelamento[i]);
				if(ocupacao[cancelamento[i]] != 'R' and ocupacao[cancelamento[i]] != 'C' and ocupacao[cancelamento[i]] != 'D'){
					printf("Opcao invalida, tente novamente.\n");
				}else if(ocupacao[cancelamento[i]] == 'C'){
					printf("Assento ja comprado e nao pode ser cancelado, escolha outro.\n");
				}else if(ocupacao[cancelamento[i]] == 'D'){
					printf("Assento nao reservado, escolha outro.\n");
				}else if(ocupacao[cancelamento[i]] == 'R'){
					break;
				}
			}
			ocupacao[cancelamento[i]] = 'D';
		}
		system("cls");
		//Resposta do sistema
		printf("CANCELAMENTO EFETUADO COM SUCESSO!\nDESTINO: %s\nNUMERO DOS ASSENTOS CANCELADOS: ", destino);
		for(i = 1; i <= quantPessoas; i++){
			printf("%d",cancelamento[i]);
			if(i < quantPessoas){
				printf(", ");
			}
		}
		printf("\nADEUS.");
	}
	//Sistema de confirmação de compra usando o while e if para verificar se o assento ja foi reservado
	if(menuAcao == 3){
		for(i = 1; i <= quantPessoas; i++){
			while(true){
				printf("Qual assento deseja confirmar a compra? ");
				scanf("%d", &compra[i]);
				if(ocupacao[compra[i]] != 'R' and ocupacao[compra[i]] != 'C' and ocupacao[compra[i]] != 'D'){
					printf("Opcao invalida, tente novamente.\n");
				}else if(ocupacao[compra[i]] == 'C'){
					printf("Assento ja comprado, escolha outro.\n");
				}else if(ocupacao[compra[i]] == 'D'){
					printf("E necessario reservar um assento antes de comprar, escolha outro.\n");
				}else if(ocupacao[compra[i]] == 'R'){
					break;
				}
			}
			ocupacao[compra[i]] = 'C';	
		}
		system("cls");
		//Resposta do sistema
		printf("COMPRA EFETUADA COM SUCESSO!\nDESTINO: %s\nNUMERO DOS ASSENTOS COMPRADOS: ", destino);
		for(i = 1; i <= quantPessoas; i++){
			printf("%d",compra[i]);
			if(i < quantPessoas){
				printf(", ");
			}
		}
		printf("\nOBRIGADO POR ESCOLHER SALUMAR LINHAS AEREAS!");
	}
	
	return 0;//Fim do programa
}
