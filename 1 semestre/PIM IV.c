#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Variáveis 
	int menu = 9, empresaParceira, idade, pessoaJuridica, diarias, cortesia;
	char nomeCliente[];
	float valorTotal, descontoTotal, valor, desconto;
	
//Constantes
	const float valorDiaria = 70.00;
	
//Funções do programa
	void menuPrincipal();
	void efetuarLocacao();
	void controleFuncionarios();
	void controleVeiculos();
	void controleAgendamento();
	void descontoPromocao();
	void sobre();
	void sair();

void main() {
	//Permite acentuação
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
	printf("\t[1] -> Efetuar locação \n");
	printf("\t[2] -> Controle de Funcionários \n");
	printf("\t[3] -> Controle de Veículos \n");
	printf("\t[4] -> Controle de Agendamento de Locação \n");
	printf("\t[5] -> Descontos e Promoções \n");
	printf("\t[6] -> Sobre a Legal Rent a Car \n\n");
	printf("\t[0] -> Sair \n\n");
	
	printf("\nDigite a opção desejada: ");
	scanf("%d", &menu);
	
	
	//Executa a função correspondente a opção escolhida do Menu Principal
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
			//Caso digite um número que não está no menu, imprime um erro e volta ao Menu Principal
			printf("\nComando inválido. Tente novamente.\n\n\n");
			system("pause");
			menuPrincipal();
	}
	
}

void efetuarLocacao(){
	system("cls");
	printf("****************************************************************************** \n\n \t\t\tEfetuar Locação \n\n******************************************************************************\n");
	printf("\t[1] -> Nova Locação\n");
	printf("\t[0] -> Voltar\n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1 :
			system("cls");
			
			printf("O cliente é pessoa jurídica(CNPJ)? 1-Sim / 0-Não\n");
			scanf("%d", &pessoaJuridica);			
			if(pessoaJuridica == 1){
				printf("\nÉ empresa parceira?  1-Sim / 0-Não\n");
				scanf("%d", &empresaParceira);
			}			
			printf("\nNome cliente: ");
			scanf("%s", &nomeCliente);			
			if(pessoaJuridica == 0){
				printf("\n Idade cliente: ");
				scanf("%d", &idade);
			}			
			printf("\nQuantas diárias irá contratar?\n");
			scanf("%d", &diarias);
			
			if(diarias >= 5){
				printf("Você tem direito a uma diária cortesia, gostaria de utilizá-la?  1-Sim / 0-Não\n");
				scanf("%d", &cortesia);
			}
			
			
			system("cls");
			
			//Imprimir Ticket da Locação
				printf("Ticket da Locação\n\n");
				
				printf("Cliente: %s\n", nomeCliente);
				
				//Verifica se é pessoa jurídica
				if(pessoaJuridica == 0){
					printf("Idade cliente: %d\n", idade);
				}
				
				
				printf("Diárias contratadas: %d\n", diarias);
				printf("Data e hora: \n");
				printf("Devolução:\n\n");
				
				
				//Verifica se é pessoa jurídica E parceiro da ONG
				if(pessoaJuridica == 1 && empresaParceira == 1){
					printf("Por ser parceiro da ONG, você receberá desconto de 5%%.\n\n");
					desconto = 5.00;
				}
				
				//Verifica se é idoso
				if(idade >= 65){
					printf("Idosos tem desconto de 10%% no valor total.\n\n");
					desconto = 10.00;
				}
				
				//Calcula o valor total a ser pago, já com os descontos de idade e parceiro
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
			//Caso digite um número que não está no menu, imprime um erro e volta ao menu
			printf("\nComando inválido. Tente novamente.\n\n\n");
			system("pause");
			efetuarLocacao();
	}
	
}

void controleFuncionarios(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Controle de Funcionários");
	printf("\n\n******************************************************************************\n");
}

void controleVeiculos(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Controle de Veículos");
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
	printf("Descontos e Promoções");
	printf("\n\n******************************************************************************\n");
}

void sobre(){
	system("cls");
	printf("******************************************************************************\n\n\t\t\t");
	printf("Sobre a Legal Rent a Car");
	printf("\n\n******************************************************************************\n");
	
	printf("\n A Legal Rent a Car é uma empresa que oferece serviço de locação de veículos KM free, ou seja,\n é cobrado um valor por diária, independente da quilometragem rodada.\n\n");
	printf("Sofware desenvolvido por:\n");
	printf("\t Cecília\n");
	printf("\t Cláudia \n");
	printf("\t Francisco \n");
	printf("\t Gabriel \n");
	printf("\t Hyago \n");
	printf("\t Paulo \n\n\n\n\n\n");
	
	system("pause");
	menuPrincipal();
}

void sair(){
	system("cls");
	printf("\n\n\tObrigado por usar nosso sistema! Até mais.\n\n\n");
}
