#include <stdio.h>

int i, enc;
float n1, n2, resu;
char oper;

int main() {
    i = 0;  // Inicializa a variável i corretamente

    while (i == 0) {
        printf("Digite um Número --> ");
        scanf("%f", &n1);

        // Limpar o buffer de entrada antes de ler o operador
        while (getchar() != '\n');  // Isso vai ler qualquer caractere extra, incluindo o '\n'

        printf("Digite um operador (+, -, *, /) --> ");
        scanf("%c", &oper);

        printf("Digite outro Número --> ");
        scanf("%f", &n2);

        // Verificação do operador e cálculo
        if (oper == '+') {
            resu = n1 + n2;
        } else if (oper == '-') {
            resu = n1 - n2;
        } else if (oper == '*') {
            resu = n1 * n2;
        } else if (oper == '/') {
            if (n2 != 0) {
                resu = n1 / n2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                continue;  // Continua o loop sem sair do programa
            }
        } else {
            printf("Operador inválido!\n");
            continue;  // Continua o loop se o operador for inválido
        }

        // Exibir o resultado
        printf("Seu resultado é --> %.2f\n", resu);

        // Perguntar se deseja encerrar
        printf("Deseja encerrar? 1 - Sim | 2 - Não --> ");
        scanf("%d", &enc);  // Corrigido para leitura de inteiro

        if (enc == 1) {
            printf("Programa encerrado.\n");
            return 0;  // Sai do programa
        } else if (enc == 2) {
            i = 0;  // Continua o loop
        } else {
            printf("Entrada inválida. Continuando...\n");
        }
    }

    return 0;
}
