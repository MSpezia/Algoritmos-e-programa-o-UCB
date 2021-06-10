#include<stdio.h>//Comando de entrada e saida
#include<stdlib.h>//Limpa tela
int main(){//Inicialização do codigo
	//Variaveis
	char nome[32],sobrenome[32],senha[32],email[32],anamnese;
	int dia,mes,ano,estiloTatuagem,menuInicial,horas,minutos;
	char sexo,continuar;
	float cpf;
	//Uso do livro codifo limpo na nomeação de variaveis e redução de detalhes desnecessarios no codigo
	while(true){
		while(true){
			//Menu para o usuario escolher entre fazer registro e agendar tatuagem
			printf("Qual acao deseja realizar?\n1 - Fazer registro\n2 - Agendar uma tatuagem\n");
			scanf("%d", &menuInicial);
			if(menuInicial < 1 or menuInicial > 2){//Validação do menu
				system("cls");
				printf("Opcao invalida, tente novamente.\n");
			}else break;
		}
		system("cls");//Limpa tela
		if(menuInicial == 1){//Sitema de registro
		//Entrada de nome,sobrenome,sexo,data de nascimento,cpf,e-mail e senha pelo usuario
			printf("Nome: ");
			scanf("%s", &nome);
			printf("Sobrenome: ");
			scanf("%s", &sobrenome);
			while(true){
				printf("Sexo(M ou F): ");
				scanf("%s", &sexo);
				getchar();
				//Validando o sexo
				if(sexo != 'm' and sexo != 'M' and sexo != 'f' and sexo != 'F')
					printf("Sexo invalido, digite novamente.\n");
				else break;
			}
			while(true){
			printf("Data de nascimento(dia mes ano): ");
			scanf("%d %d %d", &dia,&mes,&ano);
			if(ano > 2003){//Se for menor de 18 o sistema fecha pois não é permitido registro de menores de 18
				printf("Voce tem menos de 18 anos.");
				return 0;
			}
			//Validação simples do dia e do mes
			if(dia > 31 or dia < 1 or mes > 12 or mes < 1){
				printf("Algo foi digitado errado, digite novamente\n");
			}else break;
		}
		while(true){
			printf("CPF: ");
			scanf("%f", &cpf);
			if(cpf < 10000000000 or cpf > 99999999999){//Validando que o cpf tenha 11 digitos
				printf("CPF invalido, por favor digite novamente.\n");
			}else break;
		}
		printf("E-mail: ");
		scanf("%s", &email);
		printf("Senha: ");
		scanf("%s", senha);
		system("cls");
		//Impressão das variaveis
		printf("Nome: %s\n", nome);
		printf("Sobrenome: %s\n", sobrenome);
		if(sexo == 'm' or sexo == 'M')
			printf("Sexo: Masculino\n");
		else
			printf("Sexo: Feminino\n");
		printf("Data de nascimento: %d/%d/%d\n", dia,mes,ano);
		printf("Cpf: %.0f\n", cpf);
		printf("E-mail: %s\n", email);
		printf("Senha: %s\n", senha);
		fflush(stdin);
		//Sistema pergunta se o usuario quer fazer mais um registro
			printf("\nDeseja fazer outro registro?\nCaso sim pressione enter 2 vezes\nCaso nao feche o sistema");
			continuar = fgetc(stdin);
			continuar = getchar();
			system("cls"); //limpar janela
		}
		
		if(menuInicial == 2){//Sistema de agendamento
		//Entrada do e-mail,senha, data e hora do agendamento, de posse da ficha de anamnese e o tipo de tatuagem pelo usuario
			printf("E-mail: ");
			scanf("%s", &email);
			printf("Senha: ");
			scanf("%s", senha);
			while(true){
				printf("Data do agendamento(dia mes): ");
				scanf("%d %d", &dia,&mes);
				if(dia > 31 or dia < 1 or mes > 12 or mes < 1){
				printf("Algo foi digitado errado, digite novamente\n");
				}else break;
			}
			while(true){
				printf("Horario do agendamento(horas minutos): ");
				scanf("%d %d", &horas,&minutos);
				if(horas > 24 or horas < 0 or minutos > 59 or minutos < 0){
				printf("Algo foi digitado errado, digite novamente\n");
				}else break;
			}
			fflush(stdin);
			while(true){
				printf("Possui ficha de anamnese?(s ou n): ");
				scanf("%c", &anamnese);
				getchar();
				//Validando a ficha
				if(anamnese != 's' and anamnese != 'S' and anamnese != 'n' and anamnese != 'N'){
					printf("Reposta invalida, digite novamente.\n");
				}else break;
			}
			while(true){
				printf("Qual estilo de tatuagem deseja fazer?(Digite o numero ao lado do estilo)\n");
				printf("Old School - 1\nNew School e Bold Line - 2\nTribal e Oriental - 3\nDesenhos geometricos - 4\nAquarela e Portrait - 5\n ");
				scanf("%d", &estiloTatuagem);
				if(estiloTatuagem > 5 or estiloTatuagem < 1){//Validação do menu de tatuagem
					printf("Opcao nao existente, digite novamente.\n");
				}else break;
			}
			system("cls");
			//Impressão das variaveis
			printf("REVISAO DO AGENDAMENTO:\n");
			printf("Data: %d/%d\n", dia, mes);
			printf("Horario: %d:%d\n", horas,minutos);
			if(anamnese == 's' or anamnese == 'S')
				printf("Ficha de anamnese: sim\n");
			else
				printf("Ficha de anamnese: nao\n");
			printf("Estilo de tatuagem: ");
			switch(estiloTatuagem){//switch com as opções de tatuagem
				case 1: printf("Old School\n"); break;
				case 2: printf("New School e Bold Line\n");break;
				case 3: printf("Tribal e Oriental\n");break;
				case 4: printf("Desenhos Geometricos\n");break;
				case 5: printf("Aquarela e Portrait\n"); break;
			}
			//Sistema pergunta se o usuario quer fazer mais um agendamento
			printf("\nDeseja fazer outro agendamento?\nCaso sim pressione enter 2 vezes\nCaso nao feche o sistema");
			continuar = fgetc(stdin);
			continuar = getchar();
			system("cls"); //limpar janela
		}
	}
	return 0;
}
