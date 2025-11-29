#include <stdio.h>

struct Carta {
    char estado;                // Letra de A a H
    char codigo[4];             // Ex: A01 
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB da cidade
    int pontosTuristicos;       // Quantidade de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    printf("\n===== Cadastro da Carta 1 =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", carta1.nomeCidade);
