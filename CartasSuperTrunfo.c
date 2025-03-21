#include <stdio.h>

int main (){

    // primeira carta 
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //entrada de dados para a primeira carta 
    printf("Digite a letra do primeiro estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): \n");
    scanf(" %3s", codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %[^\n]", cidade1);                  // para ler a string

    printf("Informe a população: \n");
    scanf("%d", &populacao1);

    printf("informe a área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //entrada de dados para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //entrada de dados da segunda carta
    printf("Digite a letra do segundo estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", cidade2);                  // para ler a string

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("informe a área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    return 0;
}

