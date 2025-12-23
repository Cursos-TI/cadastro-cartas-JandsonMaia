#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    char estado;                // Letra de A a Z
    char codigo[4];             // Ex: A01 
    char nomeCidade[50];        // Nome da cidade
    float populacao;            // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB da cidade
    int pontosTuristicos;       // Quantidade de pontos turísticos
};

int main(){
    struct Carta carta1, carta2;
    
    //Variáveis
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    int opcao;

    srand(time(0));

    //Cadastro de Dados
        printf("\n==== Cadastro da Carta 1 ====\n");

    printf("Estado (A-Z): ");
    scanf("%s", &carta1.estado);

    printf("Código da Carta(ex: A01): "); 
    scanf("%s", &carta1.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &carta1.nomeCidade);

    printf("População: ");
    scanf("%f", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


        printf("\n==== Cadastro da Carta 2 ====\n");

    printf("Estado (A-Z): ");
    scanf("%s", &carta2.estado);

    printf("Código da Carta(ex: A01): "); 
    scanf("%s", &carta2.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &carta2.nomeCidade);

    printf("População: ");
    scanf("%f", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    //Cálculos
    densidade1 = (float)carta1.populacao / carta1.area;
    densidade2 = (float)carta2.populacao / carta2.area;

    pibPerCapita1 = (float)carta1.pib / carta1.populacao;
    pibPerCapita2 = (float)carta2.pib / carta2.populacao;

    //Exibição dos Dados Cadastrados
        printf("\n==== Dados das Cartas Cadastradas====\n");

    printf("\n---Carta 1 ---\n");
    
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %.2f \n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita1);

        printf("\n---Carta 2 ---\n");
    
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %.2f\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita2);

    // ================= COMPARAÇÃO DE ATRIBUTOS =================

    // Primeiro menu
    printf("\n==== Escolha o PRIMEIRO atributo ====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Segundo menu (dinâmico)
    printf("\n==== Escolha o SEGUNDO atributo ====\n");

    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");

    printf("Opção: ");
    scanf("%d", &atributo2);

    // ================= ATRIBUTO 1 =================
    switch (atributo1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            valor1_c1 = carta1.pontosTuristicos;
            valor1_c2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        case 6:
            valor1_c1 = pibPerCapita1;
            valor1_c2 = pibPerCapita2;
            break;
    }

    // ================= ATRIBUTO 2 =================
    switch (atributo2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            valor2_c1 = carta1.pontosTuristicos;
            valor2_c2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        case 6:
            valor2_c1 = pibPerCapita1;
            valor2_c2 = pibPerCapita2;
            break;
    }

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // ================= RESULTADO =================
    printf("\n==== RESULTADO DA COMPARAÇÃO ====\n");

    printf("\nCidade 1: %s\n", carta1.nomeCidade);
    printf("Atributo 1: %.2f\n", valor1_c1);
    printf("Atributo 2: %.2f\n", valor2_c1);
    printf("Soma: %.2f\n", soma1);

    printf("\nCidade 2: %s\n", carta2.nomeCidade);
    printf("Atributo 1: %.2f\n", valor1_c2);
    printf("Atributo 2: %.2f\n", valor2_c2);
    printf("Soma: %.2f\n", soma2);

    if (soma1 > soma2) {
        printf("\n🏆 Vencedor(a): %s\n", carta1.nomeCidade);
    } else if (soma2 > soma1) {
        printf("\n🏆 Vencedor(a): %s\n", carta2.nomeCidade);
    } else {
        printf("\n⚖️ Empate!\n");
    }

    return 0;
}
