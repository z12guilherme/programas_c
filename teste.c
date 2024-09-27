#include <stdio.h>
#include <stdlib.h>

#define ERRO 1

// Função para realizar a operação matemática
int realizarOperacao(int n1, int n2, char oper) {
    int resu;
    switch (oper) {
        case '+':
            resu = n1 + n2;
            break;
        case '-':
            resu = n1 - n2;
            break;
        case '*':
            resu = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                resu = n1 / n2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                exit(ERRO);
            }
            break;
        default:
            printf("Operador inválido!\n");
            exit(ERRO);
    }
    return resu;
}

int main() {
    int n1, n2, resu;
    char oper;

    // Lê a entrada do usuário
    printf("Insira o Primeiro Número --> ");
    if (scanf("%d", &n1) != 1) {
        printf("Erro: Entrada inválida.\n");
        return ERRO;
    }

    printf("Insira a Operação (+, -, *, /) --> ");
    if (scanf(" %c", &oper) != 1) {
        printf("Erro: Entrada inválida.\n");
        return ERRO;
    }

    printf("Insira o Segundo Número --> ");
    if (scanf("%d", &n2) != 1) {
        printf("Erro: Entrada inválida.\n");
        return ERRO;
    }

    // Realiza a operação matemática
    resu = realizarOperacao(n1, n2, oper);

    // Imprime o resultado
    printf("Seu resultado é --> %d\n", resu);

    return 0;
}