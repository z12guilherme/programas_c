#include <stdio.h>
#include <stdlib.h>

char nome[100];
int idade;
float altura;

int main() {
   // Ler nome
   printf("Insira seu nome --> ");
   scanf("%s", nome);  // Removido o '&' porque nome já é um array (ponteiro)

   // Ler idade
   printf("Insira sua Idade --> ");
   scanf("%i", &idade);  // Usando o '&' para capturar a entrada

   // Ler altura
   printf("Insira sua altura --> ");
   scanf("%f", &altura);  // Usando o '&' para capturar a entrada

   // Exibir as informações
   printf("Olá %s, você possui %i anos e tem %.2f m de altura.\n", nome, idade, altura);  // %.2f para exibir 2 casas decimais

   return 0;
}
