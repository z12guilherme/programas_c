#include <stdio.h>
#include <string.h>

// Função para codificar a mensagem usando cifra de César
void codificar(char mensagem[], int chave) {
    int i;
    char ch;
    
    for(i = 0; mensagem[i] != '\0'; ++i) {
        ch = mensagem[i];
        
        // Codifica letras maiúsculas
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + chave;
            
            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            
            mensagem[i] = ch;
        }
        // Codifica letras minúsculas
        else if(ch >= 'a' && ch <= 'z') {
            ch = ch + chave;
            
            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            
            mensagem[i] = ch;
        }
    }
}

// Função para decodificar a mensagem
void decodificar(char mensagem[], int chave) {
    int i;
    char ch;
    
    for(i = 0; mensagem[i] != '\0'; ++i) {
        ch = mensagem[i];
        
        // Decodifica letras maiúsculas
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch - chave;
            
            if(ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            
            mensagem[i] = ch;
        }
        // Decodifica letras minúsculas
        else if(ch >= 'a' && ch <= 'z') {
            ch = ch - chave;
            
            if(ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            
            mensagem[i] = ch;
        }
    }
}

int main() {
    char mensagem[100];
    int chave, opcao;
    
    printf("Digite uma mensagem: ");
    scanf("%s", mensagem);

    
    printf("Digite a chave de deslocamento: ");
    scanf("%d", &chave);  // Lê a chave de deslocamento
    
    printf("Escolha uma opção:\n1. Codificar\n2. Decodificar\n");
    scanf("%d", &opcao);  // Escolhe codificar ou decodificar
    
    if(opcao == 1) {
        codificar(mensagem, chave);
        printf("Mensagem codificada: %s\n", mensagem);
    }
    else if(opcao == 2) {
        decodificar(mensagem, chave);
        printf("Mensagem decodificada: %s\n", mensagem);
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
