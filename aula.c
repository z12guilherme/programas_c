#include <stdio.h>
#include <stdlib.h>

char nome[100];
float nota[3], media = 0.0;
int i;

int main() {
   // Ler o nome do aluno
   printf("Insira seu Nome: ");
   scanf("%s", nome);  // Removido o & para nome

   // Ler as três notas
   for (i = 0; i < 3; i++) {
       printf("Insira sua %d° nota --> ", i + 1);  // Corrigido o printf para exibir a ordem da nota
       scanf("%f", &nota[i]);
       media += nota[i];  // Somando as notas para calcular a média
   }

   // Calcular e exibir a média
   media = media / 3;
   printf("Nome: %s\n", nome);
   printf("Média das notas: %.2f\n", media);  // Exibir a média com duas casas decimais

   return 0;
}