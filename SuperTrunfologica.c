#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn

int main() {

    // Declaração de variáveis
    char estado1[50], estado2[50], codigo1[10], codigo2[10], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
    char buffer[100]; // Buffer para capturar entradas
    int opcao;

    // Lendo os dados da primeira carta
    printf("Digite o estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; // Remove o '\n'

    printf("Digite o código: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    populacao1 = atoi(buffer);

    printf("Digite a área (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    area1 = atof(buffer);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    pib1 = atof(buffer);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    pontos_turisticos1 = atoi(buffer);

    // Calculando a densidade populacional e o PIB per capita
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // Calculando o Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + (1 / densidade_populacional1) + pib_per_capita1;

    // Lendo os dados da segunda carta
    printf("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o código: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    populacao2 = atoi(buffer);

    printf("Digite a área (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    area2 = atof(buffer);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    pib2 = atof(buffer);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    pontos_turisticos2 = atoi(buffer);

    // Calculando a densidade populacional e o PIB per capita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Calculando o Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + (1 / densidade_populacional2) + pib_per_capita2;

    // Exibindo as duas cartas
    printf("\n**Dados da primeira carta:**\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n**Dados da segunda carta:**\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Menu interativo para escolher o atributo de comparação
    printf("\nEscolha o atributo para comparar entre as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada: ");
    fgets(buffer, sizeof(buffer), stdin);
    opcao = atoi(buffer);

    printf("\n**Comparação de Cartas:**\n");
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", nome_cidade1, populacao1);
            printf("%s: %d\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome_cidade1, area1);
            printf("%s: %.2f km²\n", nome_cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", nome_cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", nome_cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d\n", nome_cidade1, pontos_turisticos1);
            printf("%s: %d\n", nome_cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", nome_cidade1, densidade_populacional1);
            printf("%s: %.2f habitantes/km²\n", nome_cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", nome_cidade1, pib_per_capita1);
            printf("%s: %.2f reais\n", nome_cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", nome_cidade1, super_poder1);
            printf("%s: %.2f\n", nome_cidade2, super_poder2);
            if (super_poder1 > super_poder2) {
                printf("Vencedor: %s\n", nome_cidade1);
            } else if (super_poder2 > super_poder1) {
                printf("Vencedor: %s\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 7.\n");
            break;
    }

    return 0;
}
