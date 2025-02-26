#include <stdio.h>

    int main() {
        // Variáveis para armazenar os dados de duas cidades
        char estado1[3], estado2[3];  
        int codcarta1, codcarta2, populacao1, populacao2, numturistico1, numturistico2;
        char cidade1[50], cidade2[50]; 
        float area1, area2, pib1, pib2;
    
        // Cadastro da primeira carta
        printf("Cadastro da primeira carta:\n");
    
        printf("Digite um estado (sigla ex: SP): ");
        scanf("%s", estado1);
    
        printf("O código da cidade é: ");
        scanf("%d", &codcarta1);
    
        printf("O nome da cidade é: ");
        scanf("%s", cidade1);
    
        printf("A população é: ");
        scanf("%d", &populacao1);
    
        printf("A área total é (em km²): ");
        scanf("%f", &area1);
    
        printf("O PIB é (em bilhões): ");
        scanf("%f", &pib1);
    
        printf("Número de pontos turísticos: ");
        scanf("%d", &numturistico1);
    
        // Cadastro da segunda carta
        printf("\nCadastro da segunda carta:\n");
    
        printf("Digite um estado (sigla ex: SP): ");
        scanf("%s", estado2);
    
        printf("O código da cidade é: ");
        scanf("%d", &codcarta2);
    
        printf("O nome da cidade é: ");
        scanf("%s", cidade2);
    
        printf("A população é: ");
        scanf("%d", &populacao2);
    
        printf("A área total é (em km²): ");
        scanf("%f", &area2);
    
        printf("O PIB é (em bilhões): ");
        scanf("%f", &pib2);
    
        printf("Número de pontos turísticos: ");
        scanf("%d", &numturistico2);
    
        // Exibição dos dados 
        printf("\n=== Dados das Cartas ===\n");
    
        printf("\nCidade 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código da cidade: %d\n", codcarta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Pontos turísticos: %d\n", numturistico1);
    
        printf("\nCidade 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da cidade: %d\n", codcarta2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Pontos turísticos: %d\n", numturistico2);
    
        return 0;
    }