/**
 * - Na opção de cadastro o Algoritmo deverá permitir cadastrar no minimo 5 registros para todas as opções.
- Também na opção de Cadastro a aplicação terá que gravar as informações num arquivo texto com o nome
  correspondente ao cadastro (Ex. se o cadastro for de produto, deverá conter um arquivo com o mesmo nome PRODUTO.TXT)
*/

#include <stdio.h>

float valor1, valor2, res;
int operacao;
int retorno;

void MenuPrincipal (){
    printf("+=======================================+\n");
    printf("|               Iris PetShop            |\n");
    printf("+=======================================+\n");
    printf("|    1-CADASTRO       |   2-SUBTRACAO   |\n");
    printf("+=======================================+\n");
    printf("|    3-MULTIPLICACAO  |   4-DIVISAO     |\n");
    printf("+=======================================+\n");
    printf("|                  5-SAIR               |\n");
    printf("+=======================================+\n");
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
void somar(){
    res = valor1 + valor2;
}
void subtrair(){
    res = valor1 - valor2;
}
void multiplicar(){
    res = valor1*valor2;
}
void dividir(){
    res = valor1/valor2;
}
void Potencia(){
    res = pow(valor1, valor2);
}
void saida(){
    printf("O resultado da operacao e: %.2lf\n", res);
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
        somar();
        saida();
        break;
    case 2:
        system("cls");
        Entrada();
        subtrair();
        saida();
        break;
    case 3:
        system("cls");
        Entrada();
        multiplicar();
        saida();
        break;
    case 4:
        system("cls");
        Entrada();
        dividir();
        if(valor2 == 0){
        printf("Divisor nulo. Insira numero valido.\n");
        break;}
        saida();
        break;
    case 5:
        system("cls");
        Entrada();
        Potencia();
        saida();
        break;
    case 6:
        break;
    default:
        printf("Opcao invalida! \n");
        break;
    }
}
while(operacao != 6 );
}