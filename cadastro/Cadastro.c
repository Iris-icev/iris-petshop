#include <stdio.h>

int option;

struct cadastroCliente
{
    char nome[50];
    char dataNasc[20];
    char cpf[30];
};

struct cadastroProduto {
    char nome[50];
    float preco;
    int codigo_de_barras;
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

void CadastroCliente() {
    int controller = 1;
    do {
        struct cadastroCliente cliente;
        printf("Insira o nome do cliente: \n");
        scanf("%s", cliente.nome);
        printf("Insira a data de nascimento: \n");
        scanf("%s", cliente.dataNasc);
        printf("Insira o cpf:\n");
        scanf("%s", cliente.cpf);
        // funcao para inserir cliente no arquivo
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
        scanf("%s", produto.nome);
        printf("Insira o preço do produto: \n");
        scanf("%f", &produto.preco);
        printf("Insira o código de barras: \n");
        scanf("%d", &produto.codigo_de_barras);
        // FUNCAO PARA INSERIR PRODUTO NO ARQUIVO
        printf("Deseja cadastrar novo produto? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
}

void CadastroFuncionario() {
    int controller = 1;
    do {
        struct cadastroFuncionario funcionario;
        printf("Insira o nome do funcionário: \n");
        scanf("%s", funcionario.nome);
        printf("Insira a data de nascimento do funcionário: \n");
        scanf("%s", funcionario.dataNasc);
        printf("Insira o cpf do funcionário: \n");
        scanf("%s", funcionario.cpf);
        // FUNCAO PARA INSERIR funcionario NO ARQUIVO
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
        scanf("%s", servico.nome);
        printf("Insira o preço do serviço: \n");
        scanf("%f", &servico.preco);
        // FUNCAO PARA INSERIR funcionario NO ARQUIVO
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
        printf("Insira o preso do animal: \n");
        scanf("%f", &animal.peso);
        printf("Insira a raça do animal: \n");
        scanf("%s", animal.raca);
        // FUNCAO PARA INSERIR funcionario NO ARQUIVO
        printf("Deseja cadastrar novo animal? 1 - SIM 2 - NÃO\n");
        scanf("%d", &controller);
    } while (controller == 1);
}

void Cadastro()
{
    // 1
    printf("+===========================================+\n");
    printf("|                 CADASTRO                  |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n"); // trocar serviço por venda
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-RETORNAR       |\n");
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
        //funcao para retornar
    default:
        break;
    }

}

int main() {
    Cadastro();
}