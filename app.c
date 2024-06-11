/*
- Todas as interações do usuários serão por meio de um MENU
- Na opção de cadastro o Algoritmo deverá permitir cadastrar no minimo 5 registros para todas as opções.
- Também na opção de Cadastro a aplicação terá que gravar as informações num arquivo texto com o nome correspondente ao cadastro (Ex. se o cadastro for de produto, deverá conter um arquivo com o mesmo nome PRODUTO.TXT)
- Aplicação deverá funcionar conforme os Menus que serão criados possibilitando o usuário executar as opçoes quantas vezes ele desejar.
- CONTROLE DE PET SHOP,
*/
#include <stdio.h>
#include "cadastro/Cadastro.h"
#include "impressao/Impressao.h"
#include "servicos/GerarServicos.h"
#include "financeiro/Financeiro.h"
#include "venda/Venda.h"

void Cadastro();
void Impressao();
void GerarServicos();
void Financeiro();
void Venda();

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
    
}

int main()
{   
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
    } while (controller = 1);

}
