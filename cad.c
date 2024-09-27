#include <stdio.h>
#include <stdlib.h>

char nome[4][100];  // 4 nomes, cada um com até 100 caracteres
int i;

int main() {
    
    // Coletar os nomes
    for (i = 0; i < 4; i++) {
        printf("Digite seu Nome --> ");
        scanf(" %[^\n]", nome[i]);  // Lê uma string com espaços
    }

    // Exibir a lista de nomes
    printf("Sua lista de nomes:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", nome[i]);  // Exibe cada nome
    }
    
    return 0;
}
