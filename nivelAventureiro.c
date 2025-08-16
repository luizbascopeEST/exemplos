#include <stdio.h> 
#include <string.h> // biblioteca necessária para a função strcspn

int main() { 
    
    // declaração das variáveis
    int populacao1, populacao2, pontosT1, pontosT2;
    char estado1, estado2; 
    char cidade1[50], cidade2[50], codigo1[4], codigo2[4]; 
    float area1, area2, pib1, pib2; 
    float DensidadePop1, DensidadePop2; // População / Área
    float PIBperCapita1, PIBperCapita2; // PIB / População

    // Preenchimento de dados da carta 1
    printf("Cadastro da carta 1:\n\n");

    printf("Digite o código do Estado 1 (uma letra de A a H): ");
    /* Pesquisei que para ignorar qualquer tipo de lixo de fila causado pelo uso do enter, 
    o espaço antes de %c é fundamental. */
    scanf(" %c", &estado1); 

    printf("Digite o código da carta 1 (com 3 dígitos, ex: A01): "); 
    scanf("%s", codigo1); 
    getchar();  // Limpa o Enter deixado pelo scanf anterior para o fgets funcionar

    printf("Digite o nome da cidade 1: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; /* fgets inclui o '\n' na string, então essa linha 
    é necessária para removê-lo. */

    printf("Digite a população da cidade 1 (somente números): "); 
    scanf("%d", &populacao1); 

    printf("Digite a área da cidade 1 (em km2) (somente números): "); 
    scanf("%f", &area1); 

    printf("Digite o PIB da cidade 1 (em bilhões) (somente números): "); 
    scanf("%f", &pib1); 

    printf("Digite o número de pontos turísticos da cidade 1 (somente números): "); 
    scanf("%d", &pontosT1); 

    DensidadePop1 = populacao1/area1;
    PIBperCapita1 = (pib1 * 1000000000) / populacao1;
 
    // Preenchimento da carta 2 

    printf("Cadastro da carta 2:\n\n");
    
    printf("\n\nDigite o código do Estado 2 (uma letra de A a H): ");
    /* Pesquisei que para ignorar qualquer tipo de lixo de fila causado pelo uso do enter, 
    o espaço antes de %c é fundamental. */
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (com 3 dígitos, ex: A01): "); 
    scanf("%s", codigo2); 
    getchar();   // Limpa o Enter deixado pelo scanf anterior para o fgets funcionar

    printf("Digite o nome da cidade 2: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; /* fgets inclui o '\n' na string, então essa linha 
    é necessária para removê-lo. */

    printf("Digite a população da cidade 2 (somente números): "); 
    scanf("%d", &populacao2); 

    printf("Digite a área da cidade 2 (em km2) (somente números): "); 
    scanf("%f", &area2); 

    printf("Digite o PIB da cidade 2 (em bilhões) (somente números): "); 
    scanf("%f", &pib2); 

    printf("Digite o número de pontos turísticos da cidade 2 (somente números): "); 
    scanf("%d", &pontosT2); 

    DensidadePop2 = populacao2/area2;
    PIBperCapita2 = (pib2 * 1000000000) / populacao2;

    // Cartas cadastradas

    printf("\n\nDados da Carta 1\n\n"); 

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1); 
    printf("Área: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Número de pontos turísticos: %d\n", pontosT1);
    printf("Densidade Populacional: %.2f\n", DensidadePop1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);

    printf("\nDados da Carta 2\n\n"); 

    // CORREÇÃO: Para imprimir um char, usa-se %c
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2); 
    printf("Área: %.2f km2\n", area2); 
    printf("PIB: %.2f bilhões de reais\n", pib2); 
    printf("Número de pontos turísticos: %d\n", pontosT2);
    printf("Densidade Populacional: %.2f\n", DensidadePop2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);

    return 0; 
}