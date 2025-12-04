#include <stdio.h>

struct Carta {
    char estado;                // Letra de A a H
    char codigo[4];             // Ex: A01 
    char nomeCidade[50];        // Nome da cidade
    float populacao;            // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB da cidade
    int pontosTuristicos;       // Quantidade de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // Novas Variáveis
    float desindade1, desindade2;   
    float pibPerCapita1, pibPerCapita2;


    printf("\n===== Cadastro da Carta 1 =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &carta1.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &carta1.nomeCidade);
   
    printf("População: ");
    scanf("%f", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: "); 
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    printf("\n===== Cadastro da Carta 2 =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &carta2.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &carta2.nomeCidade);

    printf("População: ");
    scanf("%f", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // ---- Cálculos Adcionais ---- //

    desindade1 = (float)carta1.populacao / carta1.area;
    desindade2 = (float)carta2.populacao / carta2.area;

    pibPerCapita1 = (float)carta1.pib / carta1.populacao;
    pibPerCapita2 = (float)carta2.pib / carta2.populacao;


    // Exibe os dados cadastrados
    printf("\n===== Dados das Cartas Cadastradas =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %.2f\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km²\n", desindade1);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %.2f\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km²\n", desindade2);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita2);

    return 0;

}
