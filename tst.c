#include <stdio.h>
#include <stdlib.h>

int n1, n;  // Vamos tratar ambos como inteiros, já que estamos contando

int main() {
    printf("Insira um Número --> ");
    scanf("%d", &n1);  // Corrigido para ler um inteiro

    // Contagem regressiva de n1 até 1
    for (n = n1; n > 0; n--) {
        printf("Os números anteriores a este são: %d\n", n);  // %d para inteiros
    }
    

    return 0;
}