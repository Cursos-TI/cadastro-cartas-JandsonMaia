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