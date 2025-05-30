#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis para a primeira carta
    char cidade1[30];
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Variáveis para a segunda carta
    char cidade2[30];
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Cadastro da primeira carta
   printf("Cadastro da carta 1:\n");
   printf("Nome da Cidade: ");
   scanf("%s", cidade1);

   printf("Código da cidade (ex: A01): ");
   scanf("%s", codigo1);

   printf("População: ");
   scanf("%d", &populacao1);

   printf("Área (em km²): ");
   scanf("%f", &area1);

   printf("PIB (em bilhões): ");
   scanf("%f", &pib1);

   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos1);

   printf("\n");

   //Cadastro da segunda carta
   printf("Cadastro da carta2:\n");
   printf("Nome da cidade: ");
   scanf("%s", cidade2);

   printf("Código da cidade (ex: B02): ");
   scanf("%s", codigo2);

   printf("População: ");
   scanf("%d", &populacao2);

   printf("Área (em km²): ");
   scanf("%f", &area2);

   printf("PIB (em bilhões):");
   scanf("%f", &pib2);

   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos2);

   printf("\n");

   //Exibição dos dados da primeira carta
   printf("Carta 1\n");
   printf("Cidade: %s\n", cidade1);
   printf("Código: %s\n", codigo1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões\n", pib1);
   printf("Pontos turísticos: %d\n", pontos1);

   printf("\n");

   //Exibição dos dados da segunda carta
   printf("Carta 2\n");
   printf("Cidade: %s\n", cidade2);
   printf("Código: %s\n", codigo2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões\n", pib2);
   printf("Pontos turísticos: %d\n", pontos2);


    return 0;
}
