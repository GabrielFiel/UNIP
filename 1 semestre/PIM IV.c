#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Vari�veis 
	int menu = 9, empresaParceira, idade, pessoaJuridica, diarias, cortesia;
	char nomeCliente[];
	float valorTotal, descontoTotal, valor, desconto;
	
//Constantes
	const float valorDiaria = 70.00;
	
//Fun��es do programa
	void menuPrincipal();
	void efetuarLocacao();
	void controleFuncionarios();
	void controleVeiculos();
	void controleAgendamento();
	void descontoPromocao();
	void sobre();
	void sair();

void main() {
	//Permite acentua��o
	setlocale(LC_ALL,"Portuguese");
	
	menuPrincipal();
}

void menuPrincipal(){
	system("cls");
	
	printf("******************************************************************************\n\n\t\t");
	printf("Sistema Legal Rent a Car");
	printf("\n\n******************************************************************************\n");
	
	//Menu Principal
	printf("\n Menu Principal\n\n");
	printf("\t[1] -> Efetuar loca��o \n");
	printf("\t[2] -> Controle de Funcion�rios \n");
	printf("\t[3] -> Controle de Ve�culos \n");
	printf("\t[4] -> Controle de Agendamento de Loca��o \n");
	printf("\t[5] -> Descontos e Promo��es \n");
	printf("\t[6] -> Sobre a Legal Rent a Car \n\n");
	printf("\t[0] -> Sair \n\n");
	
	printf("\nDigite a op��o desejada: ");
	scanf("%d", &menu);
	
	
	//Executa a fun��o correspondente a op��o escolhida do Menu Principal
	switch(menu){
		case 1 :
			efetuarLocacao();
			break;
		
		case 2 :
			controleFuncionarios();
			break;
			
		case 3 :
			controleVeiculos();
			break;
			
		case 4 :
			controleAgendamento();
			break;
			
		case 5 :
			descontoPromocao();
			break;
			
		case 6 :
			sobre();
			break;
			
		case 0 :
			sair();
			break;
			
		default:
			fflush(stdin);
			//Caso digite um n�mero que n�o est� no menu, imprime um erro e volta ao Menu Principal
			printf("\nComando inv�lido. Tente novamente.\n\n\n");
			system("pause");
			menuPrincipal();
	}
	
}

void efetuarLocacao(){
	system("cls");
	printf("****************************************************************************** \n\n \t\t\tEfetuar Loca��o \n\n******************************************************************************\n");
	printf("\t[1] -> Nova Loca��o\n");
	printf("\t[0] -> Voltar\n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1 :
			system("cls");
			
			printf("O cliente � pessoa jur�dica(CNPJ)? 1-Sim / 0-N�o\n");
			scanf("%d", &pessoaJuridica);			
			if(pessoaJuridica == 1){
				printf("\n� empresa parceira?  1-Sim / 0-N�o\n");
				scanf("%d", &empresaParceira);
			}			
			printf("\nNome cliente: ");
			scanf("%s", &nomeCliente);			
			if(pessoaJuridica == 0){
				printf("\n Idade cliente: ");
				scanf("%d", &idade);
			}			
			printf("\nQuantas di�rias ir� contratar?\n");
			scanf("%d", &diarias);
			
			if(diarias >= 5){
				printf("Voc� tem direito a uma di�ria cortesia, gostaria de utiliz�-la?  1-Sim / 0-N�o\n");
				scanf("%d", &cortesia);
			}
			
			
			system("cls");
			
			//Imprimir Ticket da Loca��o
				printf("Ticket da Loca��o\n\n");
				
				printf("Cliente: %s\n", nomeCliente);
				
				//Verifica se � pessoa jur�dica
				if(pessoaJuridica == 0){
					printf("Idade cliente: %d\n", idade);
				}
				
				
				printf("Di�rias contratadas: %d\n", diarias);
				printf("Data e hora: \n");
				printf("Devolu��o:\n\n");
				
				
				//Verifica se � pessoa jur�dica E parceiro da ONG
				if(pessoaJuridica == 1 && empresaParceira == 1){
					printf("Por ser parceiro da ONG, voc� receber� desconto de 5%%.\n\n");
					desconto = 5.00;
				}
				
				//Verifica se � idoso
				if(idade >= 65){
					printf("Idosos tem desconto de 10%% no valor total.\n\n");
					desconto = 10.00;
				}
				
				//Calcula o valor total a ser pago, j� com os descontos de idade e parceiro
				valor = valorDiaria * diarias;
				descontoTotal = valor * (desconto/100);
				valorTotal = valor - descontoTotal;
				
				if(descontoTotal > 0){
					printf("Desconto: -R$ %.2f\n", descontoTotal);
				}
				printf("Valor a ser pago: R$ %.2f\n\n", valorTotal);
			
			system("pause");
			menuPrincipal();		
			break;
			
		case 0 :
			menuPrincipal();
			break;
			
		default:
			fflush(stdin);
			//Caso digite um n�mero que n�o est� no menu, imprime um erro e volta ao menu
			printf("\nComando inv�lido. Tente novamente.\n\n\n");
			system("pause");
			efetuarLocacao();
	}
	
}

void controleFuncionarios(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Controle de Funcion�rios");
	printf("\n\n******************************************************************************\n");
}

void controleVeiculos(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Controle de Ve�culos");
	printf("\n\n******************************************************************************\n");
}

void controleAgendamento(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Controle de Agendamentos");
	printf("\n\n******************************************************************************\n");
}

void descontoPromocao(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Descontos e Promo��es");
	printf("\n\n******************************************************************************\n");
}

void sobre(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Sobre a Legal Rent a Car");
	printf("\n\n******************************************************************************\n");
	
	printf("\n A Legal Rent a Car � uma empresa que oferece servi�o de loca��o de ve�culos KM free, ou seja,\n � cobrado um valor por di�ria, independente da quilometragem rodada.\n\n");
	printf("Sofware desenvolvido por:\n");
	printf("\t Cec�lia\n");
	printf("\t Cl�udia \n");
	printf("\t Francisco \n");
	printf("\t Gabriel \n");
	printf("\t Hyago \n");
	printf("\t Paulo \n\n\n\n\n\n");
	
	system("pause");
	menuPrincipal();
}

void sair(){
	system("cls");
	printf("\n\n\tObrigado por usar nosso sistema! At� mais.\n\n\n");
}
