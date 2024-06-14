/*
- Todas as interações do usuários serão por meio de um MENU
- Na opção de cadastro o Algoritmo deverá permitir cadastrar no minimo 5 registros para todas as opções.
- Também na opção de Cadastro a aplicação terá que gravar as informações num arquivo texto com o nome correspondente ao cadastro (Ex. se o cadastro for de produto, deverá conter um arquivo com o mesmo nome PRODUTO.TXT)
- Aplicação deverá funcionar conforme os Menus que serão criados possibilitando o usuário executar as opçoes quantas vezes ele desejar.
- CONTROLE DE PET SHOP,
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


FILE *arquivoCliente;
FILE *arquivoProduto;
FILE *arquivoFuncionario;
FILE *arquivoServico;
FILE *arquivoAnimal;
FILE *arquivoVenda;

int qtdCliente = 0;
int qtdProduto = 0;
int qtdFuncionario = 0;
int qtdServico = 0;
int qtdAnimal = 0;
int qtdVenda = 0;

// =========================== CADASTRO ==================================================
struct cadastroCliente
{
    char nome[50];
    char dataNasc[20];
    char cpf[30];
};

struct cadastroProduto {
    char nome[50];
    float preco;
    char codigo_de_barras[50];
};

struct cadastroFuncionario {
    char nome[50];
    char dataNasc[30];
    char cpf[30];
};

struct cadastroServico {
    char nome[50];
    float preco;
};

struct cadastroAnimal {
    char nome[50];
    float peso;
    char raca[50];
};

struct cadastroVenda {
    char tipo[30];
    char descricao[50];
    float total;
};

void SalvarCliente(struct cadastroCliente newCliente) {
    arquivoCliente = fopen("../Cliente.txt", "a");
    if (arquivoCliente == 0) {
        printf("Erro na leitura do arquivo!");
    }
    fprintf(arquivoCliente, "Nome: %s | Data de Nascimento: %s | CPF: %s\n", newCliente.nome, newCliente.dataNasc, newCliente.cpf);
    fclose(arquivoCliente);
}

void SalvarProduto (struct cadastroProduto newProduto) {
    arquivoProduto = fopen("../Produto.txt", "a");
    if (arquivoProduto == 0) {
        printf("Erro na leitura do arquivo\n");
    }
    fprintf(arquivoProduto, "Produto: %s | Preço: %.2lf | Código de barras: %s\n", newProduto.nome, newProduto.preco, newProduto.codigo_de_barras);
    fclose(arquivoProduto);
}

void SalvarFuncionario(struct cadastroFuncionario newFuncionario) {
    arquivoFuncionario = fopen("../Funcionario.txt", "a");
    if (arquivoFuncionario == 0) {
        printf("Erro na leitura do arquivo\n");
    }
    fprintf(arquivoFuncionario, "Nome: %s | Data de Nascimento: %s | CPF: %s\n", newFuncionario.nome, newFuncionario.dataNasc, newFuncionario.cpf);
    fclose(arquivoFuncionario);
}

void SalvarServico(struct cadastroServico newServico) {
    arquivoServico = fopen("../Servico.txt", "a");
    if (arquivoServico == 0) {
        printf("Erro ao ler o arquivo\n");
    }
    fprintf(arquivoServico, "Servico: %s | Preço: %.2lf\n", newServico.nome, newServico.preco);
    fclose(arquivoFuncionario);
}

void SalvarAnimal(struct cadastroAnimal newAnimal) {
    arquivoAnimal = fopen("../Animal.txt", "a");
    if (arquivoAnimal == 0) {
        printf("Erro ao ler o arquivo\n");
    }
    fprintf(arquivoAnimal, "Nome: %s | Peso: %.2lf | Raça: %s\n", newAnimal.nome, newAnimal.peso, newAnimal.raca);
    fclose(arquivoAnimal);
}

void SalvarVenda(struct cadastroVenda newVenda) {
    arquivoVenda = fopen("../Venda.txt", "a");
    if (arquivoVenda == 0) {
        printf("Erro na leitura do arquivo\n");
    }
    fprintf(arquivoVenda, "Tipo de venda: %s | Descrição: %s | Valor total: R$ %.2lf\n", newVenda.tipo, newVenda.descricao, newVenda.total);
    fclose(arquivoVenda);
}


void CadastroVenda() {
    int controller = 1;
    do {
        struct cadastroVenda venda;
        printf("Insira o tipo de venda (Serviço ou Produto): \n");
        scanf("%s", &venda.tipo);
        printf("Insira a descrição da venda: \n");
        scanf("%s", &venda.descricao);
        printf("Insira o valor total: \n");
        scanf("%f", &venda.total);
        SalvarVenda(venda);
        printf("Deseja cadastrar outra venda? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);

    } while (controller == 1);
    Cadastro();
};

void CadastroCliente() {
    int controller = 1;
    do {
        struct cadastroCliente cliente;
        printf("Insira o nome do cliente: \n");
        scanf("%s", &cliente.nome);
        printf("Insira a data de nascimento: \n");
        scanf("%s", &cliente.dataNasc);
        printf("Insira o cpf:\n");
        scanf("%s", &cliente.cpf);
        SalvarCliente(cliente);
        printf("Deseja cadastrar novo cliente? 1 - SIM 2 - NÃO\n");

        scanf("%d", &controller);
        
    } while(controller == 1);
     Cadastro();
}

void CadastroProduto() {
    int controller = 1;
    do {
        struct cadastroProduto produto;
        printf("Insira o nome do produto: \n");
        scanf("%s", &produto.nome);
        printf("Insira o preço do produto: \n");
        scanf("%f", &produto.preco);
        printf("Insira o código de barras: \n");
        scanf("%s", &produto.codigo_de_barras);
        SalvarProduto(produto);
        printf("Deseja cadastrar novo produto? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
    Cadastro();
}

void CadastroFuncionario() {
    int controller = 1;
    do {
        struct cadastroFuncionario funcionario;
        printf("Insira o nome do funcionário: \n");
        scanf("%s", &funcionario.nome);
        printf("Insira a data de nascimento do funcionário: \n");
        scanf("%s", &funcionario.dataNasc);
        printf("Insira o cpf do funcionário: \n");
        scanf("%s", &funcionario.cpf);
        SalvarFuncionario(funcionario);
        printf("Deseja cadastrar novo funcionario? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
    Cadastro();
}

void CadastroServico() {
    int controller = 1;
    do {
        struct cadastroServico servico;
        printf("Insira o nome do serviço: \n");
        scanf("%s", &servico.nome);
        printf("Insira o preço do serviço: \n");
        scanf("%f", &servico.preco);
        SalvarServico(servico);
        printf("Deseja cadastrar novo serviço? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
    Cadastro();
}

void CadastroAnimal() {
    int controller = 1;
    do {
        struct cadastroAnimal animal;
        printf("Insira o nome do animal: \n");
        scanf("%s", animal.nome);
        printf("Insira o peso do animal: \n");
        scanf("%f", &animal.peso);
        printf("Insira a raça do animal: \n");
        scanf("%s", &animal.raca);
        SalvarAnimal(animal);
        printf("Deseja cadastrar novo animal? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
    Cadastro();
}

void Cadastro()
{
    int option;
    // 1
    printf("+===========================================+\n");
    printf("|                 CADASTRO                  |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n"); 
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-VENDA          |\n");
    printf("+===========================================+\n");
    printf("|                 7-RETORNAR                |\n");
    printf("+===========================================+\n");
    printf("|           INSIRA A OPÇÃO DESEJADA         |\n");
    printf("+===========================================+\n");
    scanf("%d", &option);
    
    switch (option)
    {
    case 1:
        CadastroCliente();
        break;
    case 2:
        CadastroProduto();
        break;
    case 3:
        CadastroFuncionario();
        break;
    case 4:
        CadastroServico();
        break;
    case 5:
        CadastroAnimal();
        break;
    case 6:
        CadastroVenda();
        break;
    case 7:
        main();
        break;
    default:
        break;
    }
}

// ========================== CADASTRO =======================================

// ========================== IMPRESSÃO ==========================================

void ImprimirCliente() {
    char linha[250]; 
    char tecla[50   ];

    arquivoCliente = fopen("../Cliente.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoCliente) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoCliente);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void ImprimirProduto() {
    char linha[250]; 
    char tecla[50];

    arquivoProduto = fopen("../Produto.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoProduto) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoProduto);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void ImprimirFuncionario() {
    char linha[250]; 
    char tecla[50];

    arquivoFuncionario = fopen("../Funcionario.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoFuncionario) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoFuncionario);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void ImprimirServico() {
    char linha[250]; 
    char tecla[50];

    arquivoServico = fopen("../Servico.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoServico) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoServico);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void ImprimirAnimal() {
    char linha[250]; 
    char tecla[50];

    arquivoAnimal = fopen("../Animal.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoAnimal) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoAnimal);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void ImprimirVenda() {
    char linha[250]; 
    char tecla[50];

    arquivoVenda = fopen("../Venda.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoVenda) != NULL){
        printf("%s", linha);
    }
    fclose(arquivoVenda);
    printf("==============================================\n");
    printf("Aperte uma tecla e aperte enter para continuar\n");
    printf("==============================================\n");
    scanf("%s", tecla);
}
void Impressao()
{
  int option;
    // 1
    printf("+===========================================+\n");
    printf("|                 IMPRESSÃO                 |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n"); // trocar serviço por venda
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-VENDA          |\n");
    printf("+===========================================+\n");
    printf("|                 7-RETORNAR                |\n");
    printf("+===========================================+\n");
    printf("|           INSIRA A OPÇÃO DESEJADA         |\n");
    printf("+===========================================+\n");
    scanf("%d", &option);
    
    switch (option)
    {
    case 1:
        ImprimirCliente();
        Impressao();
        break;
    case 2:
        ImprimirProduto();
        Impressao();
        break;
    case 3:
        ImprimirFuncionario();
        Impressao();
        break;
    case 4:
        ImprimirServico();
        Impressao();
        break;
    case 5:
        ImprimirAnimal();
        Impressao();
        break;
    case 6:
        ImprimirVenda();
        Impressao();
        break;
    case 7:
        main();
        break;
    default:
        break;
    }
}


// ================================= VENDA =====================================


// ================================ FINANCEIRO =================================
void Financeiro()
{
    // 4
    char tecla[10];
    char linha[100];
    arquivoFuncionario = fopen("../Funcionario.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoFuncionario) != NULL){
        qtdFuncionario++;
    }
    arquivoCliente = fopen("../Cliente.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoCliente) != NULL){
        qtdCliente++;
    }
    arquivoProduto = fopen("../Produto.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoProduto) != NULL){
        qtdProduto++;
    }
    arquivoServico = fopen("../Servico.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoServico) != NULL){
        qtdServico++;
    }
    arquivoAnimal = fopen("../Animal.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoAnimal) != NULL){
        qtdAnimal++;
    }
    arquivoVenda = fopen("../Venda.txt", "r");
    while(fgets(linha, sizeof(linha), arquivoVenda) != NULL){
        qtdVenda++;
    }
    fclose(arquivoAnimal);
    fclose(arquivoVenda);
    fclose(arquivoServico);
    fclose(arquivoProduto);
    fclose(arquivoCliente);
    fclose(arquivoFuncionario);
    printf("+=====================================================+\n");
    printf("|                        RELATÓRIO                    |\n");
    printf("+=====================================================+\n");
    printf("|      Clientes cadastrados:        %d                 |\n", qtdCliente);
    printf("+=====================================================+\n");
    printf("|      Produtos cadastrados:        %d                 |\n", qtdProduto);
    printf("+=====================================================+\n");
    printf("|      Funcionários cadastrados:    %d                 |\n", qtdFuncionario);
    printf("+=====================================================+\n");
    printf("|      Serviços cadastrados:        %d                 |\n", qtdServico);
    printf("+=====================================================+\n");
    printf("|      Animais cadastrados:         %d                 |\n", qtdAnimal);
    printf("+=====================================================+\n");
    printf("|      Vendas cadastradas:          %d                 |\n", qtdVenda);
    printf("+=====================================================+\n");
    printf("|      DIGITE UMA TECLA E APERTE ENTER PARA VOLTAR    |\n");
    printf("+=====================================================+\n");
    qtdCliente = 0;
    qtdProduto = 0;
    qtdFuncionario = 0;
    qtdServico = 0;
    qtdAnimal = 0;
    qtdVenda = 0;
    scanf("%s", &tecla);
    MenuPrincipal();
}

void MenuPrincipal()
{
    // 0
    printf("+===========================================+\n");
    printf("|                 Iris PetShop              |\n");
    printf("+===========================================+\n");
    printf("|    1-CADASTRO         |   2-IMPRESSÃO     |\n");
    printf("+===========================================+\n");
    printf("|    3-RELATÓRIO        |   4-SAIR          |\n"); // tirar serviço e venda
    printf("+===========================================+\n");
    printf("|           INSIRA A OPÇÃO DESEJADA         |\n");
    printf("+===========================================+\n");
    
}

int main()
{   
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    setlocale(LC_ALL, "Brazilian_Portuguese");
    
    
    int controller = 1;
    MenuPrincipal();
    do {
    int menu = 0;
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        Cadastro();
        break;
    case 2:
        Impressao();
        break;
    case 3:
        Financeiro(); 
        break;
    case 4:
        controller = 0;
        break;
    default:
        printf("Insira uma opção válida\n");
        break;
    }
    } while (controller == 1);

}
