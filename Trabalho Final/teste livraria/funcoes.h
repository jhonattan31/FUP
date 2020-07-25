typedef struct
{
	char nome[100];
	char cpf[13];
	char cidade[30];
	int codigo_cliente;
}Cliente;
typedef struct
{
	int codigo;
	char descricao[100];
	float preco;
	int quantidade;
}Remedio;
typedef struct
{
	char nome_cliente[100];
	char nome_remedio[100];
	int quantidade_compra;
	float preco_total;
	time_t data_compra;
}Relatorio_vendas;

Cliente le_cliente();
Cliente* insere_cliente(Cliente *vetor_clientes, int *quantidade_cliente, Cliente novo_cliente);
Cliente* remove_cliente(Cliente *vetor_clientes, int *quantidade_cliente, int cliente_remover);
Remedio le_remedio();
Remedio* insere_remedio(Remedio *vetor_remedios, int *quantidade_remedio, Remedio novo_remedio);
Remedio* remove_remedio(Remedio *vetor_remedios, int *quantidade_remedio, int codigo);
Relatorio_vendas* insere_compra(Relatorio_vendas *relator, int *quantidade_compras, Relatorio_vendas nova_compra);
Remedio* comprar_remedio(Remedio *vetor_remedios, int *quantidade_remedio, int codigo, int qtd_compra);
Relatorio_vendas total_compra(Remedio *vetor_remedios, Cliente *vetor_clientes, int *quantidade_remedios, int *quantidade_clientes, int cod_remedio, int cod_cliente, int qtd_adquirida);
void menu();
int salvar_arquivo_remedios(Remedio *vetor_remedios, int *quantidade_remedio);
int salvar_arquivo_clientes(Cliente *vetor_clientes, int *quantidade_cliente);
int salvar_arquivo_relatorio(Relatorio_vendas *relator, int *quantidade_compras);
Remedio* carregar_arquivo_remedio(Remedio *vetor_remedios, int *quantidade_remedio);
Cliente* carregar_arquivo_cliente(Cliente *vetor_clientes, int *quantidade_cliente);
Relatorio_vendas* carregar_arquivo_compras(Relatorio_vendas *relator, int *quantidade_compras);
