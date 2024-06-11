/*
- Todas as interações do usuários serão por meio de um MENU
- Na opção de cadastro o Algoritmo deverá permitir cadastrar no minimo 5 registros para todas as opções.
- Também na opção de Cadastro a aplicação terá que gravar as informações num arquivo texto com o nome correspondente ao cadastro (Ex. se o cadastro for de produto, deverá conter um arquivo com o mesmo nome PRODUTO.TXT)
- Aplicação deverá funcionar conforme os Menus que serão criados possibilitando o usuário executar as opçoes quantas vezes ele desejar.
- CONTROLE DE PET SHOP,
*/
#include <stdio.h>

float valor1, valor2, res;
int retorno;
int operacaoMenu;

void MenuPrincipal()
{
    // 0
    printf("+===========================================+\n");
    printf("|                 Iris PetShop              |\n");
    printf("+===========================================+\n");
    printf("|    1-CADASTRO         |   2-IMPRESSÃO     |\n");
    printf("+===========================================+\n");
    printf("|    3-GERAR SERVIÇOS   |   4-FINANCEIRO    |\n");
    printf("+===========================================+\n");
    printf("|    5-VENDA            |   6-SAIR          |\n");
    printf("+===========================================+\n");
    printf("|           INSIRA A OPÇÃO DESEJADA         |\n");
    printf("+===========================================+\n");
    scanf("%d", &operacaoMenu);
}

void Entrada()
{
    do
    {
        printf("Digite o primeiro valor: \n");
        retorno = scanf("%f", &valor1);
    } while (retorno == 0);

    printf("Digite o segundo valor: \n");
    scanf("%f", &valor2);
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
}
void Impressao()
{
    // 2
    printf("+===========================================+\n");
    printf("|                 IMPRESSÃO                 |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n");
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-RETORNAR       |\n");
    printf("+===========================================+\n");
}
void GerarServicos()
{
    // 3
    printf("+==========================================================+\n");
    printf("|                     GERAR SERVIÇOS                       |\n");
    printf("+==========================================================+\n");
    printf("|       1-Criar OS         |     2-Imprimir Serviço        |\n");
    printf("+==========================================================+\n");
    printf("|                     5-RETORNAR                           |\n");
    printf("+==========================================================+\n");
}
void Financeiro()
{
    // 4
    printf("+===========================================+\n");
    printf("|                  FINANCEIRO               |\n");
    printf("+===========================================+\n");
    printf("|       1-PRODUTO       |   2-SERVIÇOS      |\n");
    printf("+===========================================+\n");
    printf("|       3-SALÁRIOS      |   4-ALUGUEL       |\n");
    printf("+===========================================+\n");
    printf("|                  5-RETORNAR               |\n");
    printf("+===========================================+\n");
}
void Venda()
{
    // 5
    printf("+==============================================+\n");
    printf("|                     VENDA                    |\n");
    printf("+==============================================+\n");
    printf("|       1-GERAR VENDA   |   2-IMPRIMIR VENDAS  |\n");
    printf("+==============================================+\n");
    printf("|                  5-RETORNAR                  |\n");
    printf("+==============================================+\n");
}
int main()
{
    int menu = 0;
    switch (menu)
    {
    case 0:
        MenuPrincipal();
        break;
    case 1:
        Cadastro();
        break;
    case 2:
        Impressao();
        break;
    case 3:
        GerarServicos();
        break;
    case 4:
        Financeiro();
        break;
    case 5:
        Venda();
        break;
    default:
        break;
    }
}