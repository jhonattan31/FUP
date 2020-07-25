#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

Cliente le_cliente()
{
	Cliente c;
	printf("Digite o codigo do cliente:\n");
	scanf("%d", &c.codigo_cliente);
	setbuf(stdin, NULL);
	printf("\n");
	printf("Digite o nome do cliente:\n");
	fgets(c.nome, sizeof(c.nome), stdin);
	c.nome[strlen(c.nome) - 1] = 0;
	printf("\n");
	printf("Digite o cpf do cliente:\n");
	fgets(c.cpf, sizeof(c.cpf), stdin);
	c.cpf[strlen(c.cpf) - 1] = 0;
	printf("\n");
	printf("Digite a cidade do cliente:\n");
	fgets(c.cidade, sizeof(c.cidade), stdin);
	c.cidade[strlen(c.cidade) - 1] = 0;
	return c;
}
Cliente* insere_cliente(Cliente *vetor_clientes, int *quantidade_cliente, Cliente novo_cliente)
{
	vetor_clientes = (Cliente*) realloc(vetor_clientes, (*quantidade_cliente + 1)*sizeof(Cliente));
	if(vetor_clientes == 0){
		return 0;
	}
    vetor_clientes[*quantidade_cliente] = novo_cliente;
    (*quantidade_cliente)++;
    return vetor_clientes;
}
Cliente* remove_cliente(Cliente *vetor_clientes, int *quantidade_cliente, int cliente_remover)
{
	 int i;
     for(i = 0; i < *quantidade_cliente; i++){
        if(vetor_clientes[i].codigo_cliente == cliente_remover){
             vetor_clientes[i] = vetor_clientes[*quantidade_cliente - 1];
             vetor_clientes = (Cliente*) realloc(vetor_clientes, (*quantidade_cliente - 1)*sizeof(Cliente));
             (*quantidade_cliente)--;
             if(vetor_clientes == 0){
				return 0;
             }
             break;
        }
     }
     return vetor_clientes;
}
Remedio le_remedio()
{
	Remedio d;
	printf("Digite o codigo do produto:\n");
	scanf("%d", &d.codigo);
	setbuf(stdin, NULL);
	printf("\n");
	printf("Digite o nome do produto:\n");
	fgets(d.descricao, sizeof(d.descricao), stdin);
	d.descricao[strlen(d.descricao) - 1] = 0;
	printf("\n");
	printf("Digite o preco do produto:\n");
	scanf("%f", &d.preco);
	printf("\n");
	printf("Digite a quantidade de produtos:\n");
	scanf("%d", &d.quantidade);
	printf("\n");
	return d;
}
Remedio* insere_remedio(Remedio *vetor_remedios, int *quantidade_remedio, Remedio novo_remedio)
{
	vetor_remedios = (Remedio*) realloc(vetor_remedios, (*quantidade_remedio + 1)*sizeof(Remedio));
	if(vetor_remedios == 0){
		return 0;
	}
    vetor_remedios[*quantidade_remedio] = novo_remedio;
    (*quantidade_remedio)++;
    return vetor_remedios;
}
Remedio* remove_remedio(Remedio *vetor_remedios, int *quantidade_remedio, int codigo)
{
	int i;
    for(i = 0; i < *quantidade_remedio; i++){
       if(vetor_remedios[i].codigo == codigo){
            vetor_remedios[i] = vetor_remedios[*quantidade_remedio - 1];
            vetor_remedios = (Remedio*) realloc(vetor_remedios, (*quantidade_remedio - 1)*sizeof(Remedio));
            (*quantidade_remedio)--;
            if(vetor_remedios == 0){
				return 0;
            }
            break;
       }
     }
     return vetor_remedios;
}
Relatorio_vendas* insere_compra(Relatorio_vendas *relator, int *quantidade_compras, Relatorio_vendas nova_compra)
{
	relator = (Relatorio_vendas*) realloc(relator, (*quantidade_compras + 1)*sizeof(Relatorio_vendas));
	if(relator == 0){
		return 0;
	}
    relator[*quantidade_compras] = nova_compra;
    (*quantidade_compras)++;
    return relator;
}
Remedio* comprar_remedio(Remedio *vetor_remedios, int *quantidade_remedio, int codigo, int qtd_compra)
{
	int i;
    for(i = 0; i < *quantidade_remedio; i++){
       if((vetor_remedios[i].codigo == codigo) && (vetor_remedios[i].quantidade > 0) && (qtd_compra <= vetor_remedios[i].quantidade)) {
            vetor_remedios[i].quantidade -= qtd_compra;
            printf("\n");
			printf("Compra realizada com sucesso!\n");
			printf("\n");
			printf("Aperte enter para voltar ao menu...");
			getchar();
            break;
	   }
       if(((vetor_remedios[i].codigo == codigo) && (vetor_remedios[i].quantidade == 0)) || (qtd_compra > vetor_remedios[i].quantidade)){
				printf("\n");
				printf("Produto fora de estoque!\n");
				printf("\n");
				printf("Aperte enter para voltar ao menu...");
				getchar();
       }
    }
    return vetor_remedios;
}
Relatorio_vendas total_compra(Remedio *vetor_remedios, Cliente *vetor_clientes, int *quantidade_remedios, int *quantidade_clientes, int cod_remedio, int cod_cliente, int qtd_adquirida)
{
	Relatorio_vendas nova_compra;
	for(int i = 0; i < *quantidade_remedios;i++){
		if(cod_remedio == vetor_remedios[i].codigo){
			strcpy(nova_compra.nome_remedio, vetor_remedios[i].descricao);
			nova_compra.quantidade_compra = qtd_adquirida;
			nova_compra.preco_total = qtd_adquirida * vetor_remedios[i].preco;
			nova_compra.data_compra = time(0);
		}
	}
	for(int j = 0; j < *quantidade_clientes; j++){
		if(cod_cliente == vetor_clientes[j].codigo_cliente){
			strcpy(nova_compra.nome_cliente, vetor_clientes[j].nome);
		}
	}
	return nova_compra;
}
void menu()
{
	printf(" --------------------------\n");
	printf("|**************************|\n");
	printf("|*******|FARMACIA V1|******|\n");
	printf("|**************************|\n");
	printf(" --------------------------");
	printf("\n");
	printf("\n");
	printf("Selecione uma das opcoes abaixo:\n");
	printf("\n");
	printf("1- Cadastrar um remedio\n");
	printf("2- Remover um remedio\n");
	printf("3- Listar todos os remedios\n");
	printf("4- Cadastrar um cliente\n");
	printf("5- Remover um cliente\n");
	printf("6- Listar todos os clientes\n");
	printf("7- Efetuar uma compra\n");
	printf("8- Relatório de compras\n");
	printf("0- Sair do programa");
	printf("\n");
	printf("\n");
	printf("\n");
}
int salvar_arquivo_remedios(Remedio *vetor_remedios, int *quantidade_remedio)
{
	FILE *f_remedio = fopen("remedios.txt", "w");
	if(f_remedio == 0){
		printf("Erro: nao foi possivel abrir arquivo!");
		return 0;
	}else{

		for(int i = 0; i < *quantidade_remedio; i++){
			fprintf(f_remedio, "%d\n%s\n%.2f\n%d\n", vetor_remedios[i].codigo, vetor_remedios[i].descricao, vetor_remedios[i].preco, vetor_remedios[i].quantidade);
		}
		fclose(f_remedio);
		return 1;
	}
}
int salvar_arquivo_clientes(Cliente *vetor_clientes, int *quantidade_cliente)
{
	FILE *f_cliente = fopen("clientes.txt", "w");
	if(f_cliente == 0){
		printf("Erro: nao foi possivel abrir arquivo!");
		return 0;
	}else{

		for(int i = 0; i < *quantidade_cliente; i++){
			fprintf(f_cliente, "%d\n%s\n%s\n%s\n", vetor_clientes[i].codigo_cliente, vetor_clientes[i].nome, vetor_clientes[i].cpf, vetor_clientes[i].cidade);
		}
		fclose(f_cliente);
		return 1;
	}
}
int salvar_arquivo_relatorio(Relatorio_vendas *relator, int *quantidade_compras)
{
	FILE *f_vendas = fopen("relatorio_vendas.txt", "w");
	if(f_vendas == 0){
		printf("Erro: nao foi possivel abrir arquivo!");
		return 0;
	}else{
		for(int i = 0; i < *quantidade_compras; i++){
			fprintf(f_vendas, "%d\n%s\n%s\n%.2f\n%ld\n", relator[i].quantidade_compra, relator[i].nome_cliente, relator[i].nome_remedio, relator[i].preco_total, relator[i].data_compra);
		}
		fclose(f_vendas);
		return 1;
	}
}
Remedio* carregar_arquivo_remedio(Remedio *vetor_remedios, int *quantidade_remedio)
{
	Remedio remedio_novo;
	FILE *f_remedio = fopen("remedios.txt", "r");
	
	if (f_remedio == 0) {
		return 0;
	}
	
	while(fscanf(f_remedio, "%d\n", &remedio_novo.codigo) == 1){
		fgets(remedio_novo.descricao, sizeof(remedio_novo.descricao), f_remedio);
		remedio_novo.descricao[strlen(remedio_novo.descricao)-1] = 0;
		fscanf(f_remedio, "%f\n", &remedio_novo.preco);
		fscanf(f_remedio, "%d\n", &remedio_novo.quantidade);
		vetor_remedios = insere_remedio(vetor_remedios, quantidade_remedio, remedio_novo);
	}
	
	fclose(f_remedio);
	return vetor_remedios;
}
Cliente* carregar_arquivo_cliente(Cliente *vetor_clientes, int *quantidade_cliente)
{
	Cliente cliente_novo;
	FILE *f_cliente = fopen("clientes.txt", "r");
	
	if (f_cliente == 0) {
		return 0;
	}
	
	while(fscanf(f_cliente, "%d\n", &cliente_novo.codigo_cliente) == 1){
		fgets(cliente_novo.nome, sizeof(cliente_novo.nome), f_cliente);
		cliente_novo.nome[strlen(cliente_novo.nome)-1] = 0;
		fgets(cliente_novo.cpf, sizeof(cliente_novo.cpf), f_cliente);
		cliente_novo.cpf[strlen(cliente_novo.cpf)-1] = 0;
		fgets(cliente_novo.cidade, sizeof(cliente_novo.cidade), f_cliente);
		cliente_novo.cidade[strlen(cliente_novo.cidade)-1] = 0;
		vetor_clientes = insere_cliente(vetor_clientes, quantidade_cliente, cliente_novo);
	}
	
	fclose(f_cliente);
	return vetor_clientes;
}
Relatorio_vendas* carregar_arquivo_compras(Relatorio_vendas *relator, int *quantidade_compras)
{
	Relatorio_vendas compra_nova;
	FILE *f_vendas = fopen("relatorio_vendas.txt", "r");
	if (f_vendas == 0) {
		return 0;
	}
	
	while(fscanf(f_vendas, "%d\n", &compra_nova.quantidade_compra) == 1){
		fgets(compra_nova.nome_cliente, sizeof(compra_nova.nome_cliente), f_vendas);
		compra_nova.nome_cliente[strlen(compra_nova.nome_cliente)-1] = 0;
		fgets(compra_nova.nome_remedio, sizeof(compra_nova.nome_remedio), f_vendas);
		compra_nova.nome_remedio[strlen(compra_nova.nome_remedio)-1] = 0;
		fscanf(f_vendas,"%f\n", &compra_nova.preco_total);
		fscanf(f_vendas,"%ld\n", &compra_nova.data_compra);
		relator = insere_compra(relator, quantidade_compras, compra_nova);
	}
	
	fclose(f_vendas);
	return relator;
}