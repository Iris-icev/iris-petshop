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
    char cargo[30];
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
        printf("Deseja cadastrar novo cliente?: 1 - SIM 2 - NÃO\n");
        

        scanf("%d", &controller);
        
    } while(controller == 1);
}

void Cadastro()
{
    // 1
    printf("+===========================================+\n");
    printf("|                 CADASTRO                  |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n");
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
        // funcao para produto
        break;
    case 3:
        // funcao para funcionario
        break;
    case 4:
        //funcao para servico
        break;
    case 5:
        // funcao para animal
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