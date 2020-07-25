#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funcoes.h"
int main()
{
	int quantidade_cliente = 0, quantidade_remedio = 0, quantidade_compras = 0;
	int opcao, existe = 0;
	Cliente *vetor_clientes = 0;
	Cliente c;
	Remedio *vetor_remedios = 0;
	Remedio r;
	Relatorio_vendas *relator = 0;
	Relatorio_vendas nova_compra;
	vetor_remedios = carregar_arquivo_remedio(vetor_remedios, &quantidade_remedio);
	vetor_clientes = carregar_arquivo_cliente(vetor_clientes, &quantidade_cliente);
	relator = carregar_arquivo_compras(relator, &quantidade_compras);
	char* dia_semana[] = {"dom", "seg", "ter", "qua", "qui", "sex", "sab"};
	do{
		menu();
		scanf("%d", &opcao);
		setbuf(stdin, NULL);
		system("clear");
		switch(opcao){
		int codigo_remover, cliente_remover, codigo_compra;
		int total, cliente_compra;
		case 1: //CADASTRAR produtos
			r = le_remedio();
			vetor_remedios = insere_remedio(vetor_remedios, &quantidade_remedio, r);
			setbuf(stdin, NULL);
			system("clear");
			break;

		case 2://REMOVER REMEDIOS
			printf("Digite o codigo do remedio a ser removido:\n");
			scanf("%d", &codigo_remover);
			vetor_remedios = remove_remedio(vetor_remedios, &quantidade_remedio, codigo_remover);
			system("clear");
			break;

		case 3://LISTAR TODOS OS REMEDIOS
			printf(" --------------------------\n");
			printf("|**************************|\n");
			printf("|****|LISTA DE REMEDIOS|***|\n");
			printf("|**************************|\n");
			printf(" --------------------------");
			printf("\n");
			printf("\n");
			if(quantidade_remedio == 0){
					printf("Nenhum remédio cadastrado\n");
					printf("\n");

			}
			else{
				for(int i = 0; i < quantidade_remedio; i++){
					printf("Codigo: %d   Nome: %s    Preco: %.2f    Quantidade: %d\n", vetor_remedios[i].codigo, vetor_remedios[i].descricao, vetor_remedios[i].preco, vetor_remedios[i].quantidade);
					printf("\n");
				}
			}
			printf("Aperte enter para voltar ao menu...");
			getchar();
			system("clear");
			break;

		case 4://CADASTRAR CLIENTES
			c = le_cliente();
			vetor_clientes = insere_cliente(vetor_clientes, &quantidade_cliente, c);
			system("clear");
			break;

		case 5://REMOVER CLIENTES
			printf("Digite o codigo do cliente a ser removido:\n");
			scanf("%d", &cliente_remover);
			vetor_clientes = remove_cliente(vetor_clientes, &quantidade_cliente, cliente_remover);
			system("clear");
			break;

		case 6://LISTAR TODOS OS CLIENTES
			printf(" --------------------------\n");
			printf("|**************************|\n");
			printf("|****|LISTA DE CLIENTES|***|\n");
			printf("|**************************|\n");
			printf(" --------------------------");
			printf("\n");
			printf("\n");
			if(quantidade_cliente == 0){
					printf("Nenhum cliente cadastrado\n");
					printf("\n");
			}
			else{
				for (int i = 0; i < quantidade_cliente; i++){
					printf("Codigo: %d   Nome: %s    CPF: %s    Cidade: %s\n", vetor_clientes[i].codigo_cliente, vetor_clientes[i].nome, vetor_clientes[i].cpf, vetor_clientes[i].cidade);
					printf("\n");
				}
			}
			printf("Aperte enter para voltar ao menu...");
			getchar();
			system("clear");
			break;

		case 7://FUNCAO COMPRA
			system("clear");
			printf(" --------------------------\n");
			printf("|**************************|\n");
			printf("|****|LISTA DE REMEDIOS|***|\n");
			printf("|**************************|\n");
			printf(" --------------------------");
			printf("\n");
			printf("\n");
			for(int i = 0; i < quantidade_remedio; i++){
					printf("Codigo: %d   Nome: %s    Preco: %.2f    Quantidade: %d\n", vetor_remedios[i].codigo, vetor_remedios[i].descricao, vetor_remedios[i].preco, vetor_remedios[i].quantidade);
					printf("\n");
				}
			printf("Insira o código do remédio desejado:\n");
			scanf("%d", &codigo_compra);
			setbuf(stdin,NULL);
			printf("\n");
			printf("Quantidade de remedios desejadas:\n");
			scanf("%d", &total);
			setbuf(stdin,NULL);
			printf("\n");
			printf("Insira o código do cliente que deseja realizar a compra:\n");
			scanf("%d", &cliente_compra);
			setbuf(stdin,NULL);
			printf("\n");
			vetor_remedios = comprar_remedio(vetor_remedios, &quantidade_remedio, codigo_compra, total);
			nova_compra = total_compra(vetor_remedios, vetor_clientes, &quantidade_remedio, &quantidade_cliente, codigo_compra, cliente_compra, total);
			relator = insere_compra(relator, &quantidade_compras, nova_compra);
			system("clear");
			break;

		case 8://RELATÓRIO DE COMPRAS
			printf(" --------------------------\n");
			printf("|**************************|\n");
			printf("|****|LISTA DE COMPRAS|****|\n");
			printf("|**************************|\n");
			printf(" --------------------------");
			printf("\n");
			printf("\n");
			if(quantidade_compras == 0){
					printf("Nenhuma compra realizada\n");
					printf("\n");
					printf("Aperte enter para voltar ao menu...");
					getchar();
					system("clear");
			}
			else{
				int dia, mes, ano;
				float compras_dia = 0.0;
				printf("Dia ");
				scanf("%d", &dia);
				printf("Mes ");
				scanf("%d", &mes);
				printf("Ano ");
				scanf("%d", &ano);
				getchar();
				for (int i = 0; i < quantidade_compras; i++){
					struct tm *t = gmtime(&relator[i].data_compra);
					if (t->tm_mday == dia && t->tm_mon+1 == mes && t->tm_year + 1900 == ano){
						compras_dia = relator[i].preco_total + compras_dia;
						printf("Venda total do dia: %.2f\n", &compras_dia);
						printf("Cliente: %s   Remedio: %s    Quantidade: %d    Valor Pago: %.2f   Data: %s\n ", relator[i].nome_cliente, relator[i].nome_remedio, relator[i].quantidade_compra, relator[i].preco_total, ctime(&relator[i].data_compra));
						printf("\n");
					}
				}
			printf("Aperte enter para voltar ao menu...");
			getchar();
			system("clear");
			}
			break;

		default:
			system("clear");
			printf(" --------------------------\n");
			printf("|**************************|\n");
			printf("|*****|VOLTE SEMPRE!|******|\n");
			printf("|**************************|\n");
			printf(" --------------------------");
		}
	}while(opcao != 0);
	int existe_r = salvar_arquivo_remedios(vetor_remedios, &quantidade_remedio);
	if(existe_r == 0){
		printf("Arquivo nao gerado");
	}

	int existe_c = salvar_arquivo_clientes(vetor_clientes, &quantidade_cliente);
	if(existe_c == 0){
		printf("Arquivo nao gerado");
	}
	existe = salvar_arquivo_relatorio(relator, &quantidade_compras);
	if(existe == 0){
		printf("Arquivo nao gerado");
	}
	free(vetor_remedios);
	free(vetor_clientes);
	free(relator);
}
