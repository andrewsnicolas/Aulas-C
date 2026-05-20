//
// Created by Nicolas on 19/05/2026.
// Exercício nível fácil
// 1° Exercicio: Caixa eletrônico
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
float validar(char acao[10]) {
    bool valorInval = false;
    float quantia = 0;
    while (quantia<=0) {
        if (valorInval) printf("\nVALOR DIGITADO E INVALIDO!\nPOR FAVOR, DIGITE OUTRO VALOR");
        printf("\nDigite o valor a ser %s: ", acao);
        scanf("%f", &quantia);
        valorInval = true;
    }
    return quantia;
}
float sacar(float saldoAtual) {
    float quantia = validar("sacar");
    if (saldoAtual<quantia) {
        printf("\nSALDO INSUFICIENTE\nSALDO ATUAL: %.2f", saldoAtual);
        return saldoAtual;
    }
    else printf("\nSAQUE REALIZADO COM SUCESSO");
    return saldoAtual-quantia;
}
float depositar(float saldoAtual) {
    float quantia = validar("depositar");
    return saldoAtual+quantia;
}
int main() {
    setlocale(LC_ALL, "");
    bool valorInval = false;
    float saldo = 1000;
    char nome[50];
    while (strlen(nome) == 0) {
        if (valorInval) printf("VALOR DIGITADO INVALIDO");
        printf("Digite o seu nome:\n");
        scanf("%s", &nome);
        valorInval = true;
    }
    int decisao = 0;
    bool primeiraVez = true;
    valorInval = false;
    do {
        if (primeiraVez)
            printf("BEM VINDO, %s! Voce tem R$%.2f na conta, o que voce deseja fazer?", nome, saldo);
        if (valorInval) printf("VALOR INVALIDO! DIGITE UM VALOR ENTRE 1 E 4");
        printf("\n1) Sacar dinheiro\n2) Depositar dinheiro\n 3) Mostrar saldo\n 4) Sair\n");
        printf("O que deseja fazer?: ");
        scanf("%d", &decisao);
        switch (decisao) {
            case 1:
                saldo = sacar(saldo);
                break;
            case 2:
                saldo = depositar(saldo);
                break;
            case 3:
                printf("\nO saldo atual é: %.2f\n", saldo);
                break;
        }
        primeiraVez = false;
        valorInval = true;
    } while (decisao != 4);


    return 0;
}
