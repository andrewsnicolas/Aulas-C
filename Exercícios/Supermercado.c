//
// Created by Nicolas on 19/05/2026.
// Dificuldade média
// Exercício 4: Simulador de mercado completo
#include <stdio.h>
#include <stdbool.h>
int codigos[50];
float precos[50];
int quantidade[50];
int maisRecente = 0;
float faturamento[50];
float saldo;
void cadastrarProduto() {
    bool valorInval = false;
    codigos[maisRecente] = maisRecente + 1;
    do {
        if (valorInval) printf("VALOR INVALIDO\n DIGITE UM VALOR MAIOR QUE ZERO\n");
        printf("Digite o preço do produto: ");
        scanf("%f", &precos[maisRecente]);
        valorInval = true;
    } while (precos[maisRecente] <= 0);
    valorInval = false;
    do {
        if (valorInval) printf("VALOR INVALIDO\n DIGITE UM VALOR MAIOR QUE ZERO\n");
        printf("Digite a quantidade do produto no estoque: ");
        scanf("%d", &quantidade[maisRecente]);
        valorInval = true;
    } while (quantidade[maisRecente] <= 0);
    faturamento[maisRecente] = 0;
    maisRecente++;
    printf("\nPRODUTO CADASTRADO COM SUCESSO\n");
}
void alterarEstoque(int codigoProduto) {
    bool valorInval = false;
    do {
        if (valorInval) printf("\nVALOR DIGITADO INVALIDO\nPOR FAVOR, DIGITE UM VALOR VALIDO\n");
        printf("Atualmente, há %d produtos desse no estoque, quantos você quer que seja a quantidade total?: ", quantidade[codigoProduto]);
        scanf("%d", quantidade[codigoProduto]);
        valorInval = true;
    } while (quantidade[codigoProduto] <= 0);
    printf("\nVALOR DO ESTOQUE ALTERADO COM SUCESSO");
}
void venderProdutos(int codigoProduto, int quantidadeVendida) {
    if (quantidade[codigoProduto] < quantidadeVendida)
        printf("\nVENDA IMPOSSIVEL DE SER EXECUTADA (VALOR VENDIDA MAIOR QUE ESTOQUE)\n");
    else {
        quantidade[codigoProduto] -= quantidadeVendida;
        faturamento[codigoProduto] += quantidadeVendida*precos[codigoProduto];
        printf("\nVENDA EXECUTADA COM SUCESSO!\n");
    }
}
int main() {
    printf("Olá! O que voce deseja fazer?");
    int decisao = 0;
    float faturamentoTotal;
    bool valorInval = false;
    int codigosProduts = 0;
    int quantidadeProduto = 0;
    do {
        faturamentoTotal = 0;
        if (valorInval && (decisao < 1 || decisao > 6)) printf("VALOR INVALIDO!\n");
        printf("\n1) Cadastrar produto\n2) Alterar estoque\n3) Vender produto\n"
               "4) Mostrar todos os produtos\n 5) Mostrar faturamento total\n6) Sair");
        scanf("%d", &decisao);
        switch (decisao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                do {
                    printf("\nDigite o codigo do produto que deseja alterar: ");
                    scanf("%d", &codigosProduts);
                    codigosProduts--;
                } while (codigosProduts < 0 || codigosProduts > maisRecente);
                alterarEstoque(codigosProduts);
                break;
            case 3:
                do {
                    printf("\nDigite o codigo do produto que deseja alterar: ");
                    scanf("%d", &codigosProduts);
                    codigosProduts--;
                } while (codigosProduts < 0 || codigosProduts > maisRecente);
                do {
                    printf("\nDigite a quantidade de produto que deseja comprar: ");
                    scanf("%d", &quantidadeProduto);
                    quantidadeProduto--;
                } while (quantidadeProduto <= 0 || quantidadeProduto > maisRecente);
                venderProdutos(codigosProduts, quantidadeProduto);
                break;
            case 4:
                for (int i = 0; i < maisRecente; i++) {
                    printf("\nCod: %d   | Prç: %.2f   | Qnt: %d   | Ftr%.2f", codigos[i], precos[i], quantidade[i], faturamento[i]);
                }
                break;
            case 5:
                for (int i = 0; i < maisRecente; i++) faturamentoTotal += faturamento[i];
                printf("O total faturado eh: %.2f", faturamentoTotal);
                break;
        }
        valorInval=true;
    } while (decisao != 6);
    return 0;
}