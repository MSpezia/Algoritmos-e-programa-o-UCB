//Nome:Matheus Spezia Freire Lorenz Matricula:UC21103938
#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Necessario para limpar a tela
#include<windows.h>//Necessario para colorir o texto
int main(){//Começo do programa
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//Variaveis
	char destino[32];
	int quantAssentos, idade, menuAcao, reserva, cancelamento, compra;
	float preco;
	
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
	//Entrada da idade do usuario usando while e if para validar a entrada
	while(true){
		printf("Qual sua idade? ");
		scanf("%d", &idade);
		if(idade < 0){
		system("cls");
		printf("Idade invalida, tente novamente.\n");
		}else break;
	}
	//Caso a idade seja menor ou igual a 5 anos a passagem tem metade do preço
	if(idade <= 5){
		preco = preco/2;
	}
	
	system("cls");//Limpa tela
	
	char ocupacao[quantAssentos];//Nova variavel usada mais tarde para verificações
	//Sistema for para imprimir o mapa de assentos e guardar o estado do assento
	for(int i = 1; i <= quantAssentos; i++){
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
		while(true){
			printf("Qual assento deseja reservar? ");
			scanf("%d", &reserva);
			if(ocupacao[reserva] != 'R' and ocupacao[reserva] != 'C' and ocupacao[reserva] != 'D'){
				printf("Opcao invalida, tente novamente.\n");
			}else if(ocupacao[reserva] == 'R'){
				printf("Assento ja reservado, escolha outro.\n");
			}else if(ocupacao[reserva] == 'C'){
				printf("Assento ja comprado, escolha outro.\n");
			}else break;
		}
		system("cls");
		//Resposta do sistema
		printf("RESERVA EFETUADA COM SUCESSO!\nDESTINO: %s\nPRECO: %.2f REAIS\nNUMERO DO ASSENTO: %d\nOBRIGADO POR ESCOLHER SALUMAR LINHAS AEREAS!", destino, preco, reserva);
	}
	//Sistema de cancelamento de reserva com while e if para validar se o assento ja foi reservado
	if(menuAcao == 2){
		while(true){
			printf("Qual assento deseja cancelar a reserva? ");
			scanf("%d", &cancelamento);
			if(ocupacao[cancelamento] != 'R' and ocupacao[cancelamento] != 'C' and ocupacao[cancelamento] != 'D'){
				printf("Opcao invalida, tente novamente.\n");
			}else if(ocupacao[cancelamento] == 'C'){
				printf("Assento ja comprado e nao pode ser cancelado, escolha outro.\n");
			}else if(ocupacao[cancelamento] == 'D'){
				printf("Assento nao reservado, escolha outro.\n");
			}else if(ocupacao[cancelamento] == 'R'){
				break;
			}
		}
		system("cls");
		//Resposta do sistema
		printf("CANCELAMENTO EFETUADO COM SUCESSO!\nDESTINO: %s\nNUMERO DO ASSENTO: %d\nADEUS.", destino, cancelamento);
	}
	//Sistema de confirmação de compra usando o while e if para verificar se o assento ja foi reservado
	if(menuAcao == 3){
		while(true){
			printf("Qual assento deseja confirmar a compra? ");
			scanf("%d", &compra);
			if(ocupacao[compra] != 'R' and ocupacao[compra] != 'C' and ocupacao[compra] != 'D'){
				printf("Opcao invalida, tente novamente.\n");
			}else if(ocupacao[compra] == 'C'){
				printf("Assento ja comprado, escolha outro.\n");
			}else if(ocupacao[compra] == 'D'){
				printf("E necessario reservar um assento antes de comprar, escolha outro.\n");
			}else if(ocupacao[compra] == 'R'){
				break;
			}
		}	
		system("cls");
		//Resposta do sistema
		printf("COMPRA EFETUADA COM SUCESSO!\nDESTINO: %s\nPRECO: %.2f REAIS\nNUMERO DO ASSENTO: %d\nOBRIGADO POR ESCOLHER SALUMAR LINHAS AEREAS!", destino, preco, compra);
	}
	
	return 0;//Fim do programa
}
