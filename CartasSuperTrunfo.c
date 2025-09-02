#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;

    printf("Digite o nome da primeira cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  // Remove o \n do final

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &p_turisticos1);

    getchar(); // Limpa o \n que ficou no buffer depois do último scanf

    printf("\nDigite o nome da segunda cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove o \n do final

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &p_turisticos2);

    // Imprime só para conferir se leu tudo certo:
    printf("\nDados da primeira cidade:\n");
    printf("Nome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n",
        cidade1, populacao1, area1, pib1, p_turisticos1);

    printf("\nDados da segunda cidade:\n");
    printf("Nome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n",
        cidade2, populacao2, area2, pib2, p_turisticos2);
        

    return 0;
}


