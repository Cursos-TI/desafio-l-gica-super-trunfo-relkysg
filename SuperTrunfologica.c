/*Estado (string)
Código da carta - CDC(string)
Cidade(string)
População - POP (Int)
Pib (float)
Area (float)
Pontos Turísticos (int)
Densidade populacional: pop/area
Pib per Capita: PIB/Pop
Comparar atributo escolhido

Determinar Carta vencedora
Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
Para Densidade Populacional, a carta com o menor valor vence.

Exibir o resultado da comparação
Comparação de cartas (Atributo: População):
Carta 1 - São Paulo (SP): 12.300.000
Carta 2 - Rio de Janeiro (RJ): 6.000.000
Resultado: Carta 1 (São Paulo) venceu!

Não é necessário implementar menus interativos neste nível. Foque na lógica de comparação utilizando if e if-else
A escolha do atributo para comparação será feita diretamente no código, não haverá interação com o usuário para escolher o atributo.
*/

#include <stdio.h>
#include <string.h>

    int main(){
        char estado1[50], estado2[50], cidade1[50], cidade2[50], cdc1[50], cdc2[50];
        int pop1, pop2, pontos1, pontos2;
        float pib1, pib2, area1, area2, densidade1, densidade2, pibpc1, pibpc2;
        char atributo[50];

        //Entrada de dados

        printf("Digite o estado da carta 1: ");
        scanf("%s", estado1);
        printf("Digite o código da carta 1: ");
        scanf("%s", cdc1);
        printf("Digite a cidade da carta 1: ");
        scanf("%s", cidade1);
        printf("Digite a população da carta 1: ");
        scanf("%d", &pop1);
        printf("Digite o PIB da carta 1: ");
        scanf("%f", &pib1);
        printf("Digite a área da carta 1: ");
        scanf("%f", &area1);
        printf("Digite os pontos turísticos da carta 1: ");
        scanf("%d", &pontos1);

        printf("Digite o estado da carta 2: ");
        scanf("%s", estado2);
        printf("Digite o código da carta 2: ");
        scanf("%s", cdc2);
        printf("Digite a cidade da carta 2: ");
        scanf("%s", cidade2);
        printf("Digite a população da carta 2: ");
        scanf("%d", &pop2);
        printf("Digite o PIB da carta 2: ");
        scanf("%f", &pib2);
        printf("Digite a área da carta 2: ");
        scanf("%f", &area2);
        printf("Digite os pontos turísticos da carta 2: ");
        scanf("%d", &pontos2);

        //Calculo dos atributos

        densidade1 = pop1/area1;
        densidade2 = pop2/area2;
        pibpc1 = pib1/pop1;
        pibpc2 = pib2/pop2;

        // Imprimindo Cartas
        
        printf("Dados da Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Código da Carta: %s\n", cdc1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", pop1);
        printf("PIB: %.2f\n", pib1);
        printf("Área: %.2f\n", area1);
        printf("Pontos Turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capita: %.2f\n", pibpc1);

        printf("Dados da Carta 2\n");
        printf("Estado: %s\n", estado2);
        printf("Código da Carta: %s\n", cdc2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", pop2);
        printf("PIB: %.2f\n", pib2);
        printf("Área: %.2f\n", area2);
        printf("Pontos Turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per Capita: %.2f\n", pibpc2);

        // Printf Comparação de Cartas

        printf("Comparação de Cartas (Atributo: População)\n");

        //Comparação de atributos

        if (pop1 > pop2)
        {
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pop2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        
        } else if (pop2 > pop1)
        {
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pop2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }   

    

        return 0;
}