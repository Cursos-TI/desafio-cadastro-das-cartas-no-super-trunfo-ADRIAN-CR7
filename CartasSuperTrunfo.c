#include <stdio.h>
#include <string.h>

int main() {
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, codigo1, codigo2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;
    float densipopu1, densipopu2;
    float pibpercapita1, pibpercapita2;

    // Lendo primeira cidade
    printf("Digite o nome da primeira cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove o \n

    printf("Codigo da cidade: ");
    scanf("%d", &codigo1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos1);

    getchar(); // limpa buffer para o próximo fgets

    // Lendo segunda cidade
    printf("\nDigite o nome da segunda cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Codigo da cidade: ");
    scanf("%d", &codigo2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos2);

    // Cálculos
    densipopu1 = populacao1 / area1;
    densipopu2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Resultados organizados
    printf("\n===== RESULTADOS =====\n");
    printf("Cidade: %s (Codigo %d)\n", cidade1, codigo1);
    printf(" Populacao: %d\n", populacao1);
    printf(" Area: %.2f km2\n", area1);
    printf(" PIB: %.2f\n", pib1);
    printf(" Pontos turisticos: %d\n", p_turisticos1);
    printf(" Densidade populacional: %.2f hab/km2\n", densipopu1);
    printf(" PIB per capita: %.2f\n", pibpercapita1);

    printf("\nCidade: %s (Codigo %d)\n", cidade2, codigo2);
    printf(" Populacao: %d\n", populacao2);
    printf(" Area: %.2f km2\n", area2);
    printf(" PIB: %.2f\n", pib2);
    printf(" Pontos turisticos: %d\n", p_turisticos2);
    printf(" Densidade populacional: %.2f hab/km2\n", densipopu2);
    printf(" PIB per capita: %.2f\n", pibpercapita2);

    return 0;
}
