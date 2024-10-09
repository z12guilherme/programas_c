#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero_aleatorio, chute, tentativas = 0;

    printf("Bem vindo ao Jogo de Adivinhação!\n");
    printf("Tente adivinhar o número --> \n");

    numero_aleatorio = rand() % 100 + 1;

    while(1){
        printf("Insira seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute == numero_aleatorio){
            printf("Parabéns você acertou o número!\n");
            break;
        }
        else if  (chute < numero_aleatorio){
            printf("Número  muito baixo, tente novamente!\n");
        }
        else if (chute >  numero_aleatorio){
            printf("Número muito alto, tente novamente!\n");
        }
    }

    return 0;
}
