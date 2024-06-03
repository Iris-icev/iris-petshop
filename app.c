/*
- Todas as interações do usuários serão por meio de um MENU
- Na opção de cadastro o Algoritmo deverá permitir cadastrar no minimo 5 registros para todas as opções.
- Também na opção de Cadastro a aplicação terá que gravar as informações num arquivo texto com o nome correspondente ao cadastro (Ex. se o cadastro for de produto, deverá conter um arquivo com o mesmo nome PRODUTO.TXT)
- Aplicação deverá funcionar conforme os Menus que serão criados possibilitando o usuário executar as opçoes quantas vezes ele desejar.
- CONTROLE DE PET SHOP,  
*/
#include <stdio.h>

float valor1, valor2, res;
int operacao;
int retorno;

void MenuPrincipal (){
    printf("+===========================================+\n");
    printf("|                 Iris PetShop              |\n");
    printf("+===========================================+\n");
    printf("|    1-CADASTRO         |   2-IMPRESSÃO     |\n");
    printf("+===========================================+\n");
    printf("|    3-GERAR SERVIÇOS   |   4-FINANCEIRO    |\n");
    printf("+===========================================+\n");
    printf("|    5-VENDA            |   5-SAIR          |\n");
    printf("+===========================================+\n");
    scanf("%d", &operacao);
}

void Entrada(){
     do {
     printf("Digite o primeiro valor: \n");
     retorno = scanf("%f", &valor1);
     } while (retorno == 0);
         
     printf("Digite o segundo valor: \n");
     scanf("%f", &valor2);
} 
void Cadastro(){
    printf("+===========================================+\n");
    printf("|                 CADASTRO                  |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n");
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-RETORNAR       |\n");
    printf("+===========================================+\n");
    scanf("%d", &operacao);
}
void Impressão(){
    printf("+===========================================+\n");
    printf("|                 IMPRESSÃO                 |\n");
    printf("+===========================================+\n");
    printf("|    1-CLIENTE         |   2-PRODUTO        |\n");
    printf("+===========================================+\n");
    printf("|    3-FUNCIONÁRIO     |   4-SERVIÇO        |\n");
    printf("+===========================================+\n");
    printf("|    5-ANIMAL          |   6-RETORNAR       |\n");
    printf("+===========================================+\n");
    scanf("%d", &operacao);
}
void GerarServiços(){
    printf("+===========================================================+\n");
    printf("|                GERAR SERVIÇOS                             |\n");
    printf("+===========================================================+\n");
    printf("|       1-Criar OS         |     2-Imprimir Serviços        |\n");
    printf("+===========================================================+\n");
    printf("|                     5-RETORNAR                            |\n");
    printf("+===========================================================+\n");
    scanf("%d", &operacao);
}
void Financeiro(){
    printf("+===========================================+\n");
    printf("|                  FINANCEIRO               |\n");
    printf("+===========================================+\n");
    printf("|       1-PRODUTO       |   2-SERVIÇOS      |\n");
    printf("+===========================================+\n");
    printf("|       3-SALÁRIOS      |   4-ALUGUEL       |\n");
    printf("+===========================================+\n");
    printf("|                    5-SAIR                 |\n");
    printf("+===========================================+\n");
    scanf("%d", &operacao);
}
void Venda(){
    printf("+==============================================+\n");
    printf("|                     VENDA                    |\n");
    printf("+==============================================+\n");
    printf("|       1-GERAR VENDA   |   2-IMPRIMIR VENDAS  |\n");
    printf("+==============================================+\n");
    printf("|                    5-SAIR                    |\n");
    printf("+==============================================+\n");
    scanf("%d", &operacao);
}
int main (){
do{   
    MenuCalculadora();
    switch(operacao)
    {
        if(valor1 > 6 && valor1 < 0)
        printf("insira uma tecla valida.");
    case 1:
        system("cls");
        Entrada();
        Cadastro();
        break;
    case 2:
        system("cls");
        Entrada();
        Impressão();
        break;
    case 3:
        system("cls");
        Entrada();
        GerarServiços();
        break;
    case 4:
        system("cls");
        Entrada();
        Faturamento();
        if(valor2 == 0){
        printf("Divisor nulo. Insira numero valido.\n");
        break;}
        saida();
        break;
    case 5:
        break;
    default:
        printf("Opcao invalida! \n");
        break;
    }
}
while(operacao != 6 );
}