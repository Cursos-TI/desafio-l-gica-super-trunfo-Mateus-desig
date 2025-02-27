#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Declarando variáveis dos dados das cartas.
char state1, state2;          // Estado da cidade (letra de 'A' a 'H').
char code1[4], code2[4];      // Código da carta (ex: A01, B03).
char name1[50], name2[50];    // Nome da cidade.
int population1, population2; // População da cidade.
float area1, area2;           // Área da cidade em km².
float pib1, pib2;             // PIB da cidade em bilhões de reais.
int tourist_pt1, tourist_pt2; // Número de pontos turísticos.

// Funções
void cards();
void displayCards();
void compareCards();

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    cards(); // Cartas.

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    displayCards(); // Mostrar cartas.
    compareCards();

    return 0;
}

// cartas.
void cards()
{

    // Primeira Carta.
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &state1);
    state1 = toupper(state1); // Garante que o estado seja maiúsculo.

    // Validação do estado.
    if (state1 < 'A' || state1 > 'H')
    {
        printf("Estado inválido! Deve ser uma letra de A a H.\n");
        return 1; // Encerra o programa com erro.
    }

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", code1); // Lê até 3 caracteres (tamanho do código).

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", name1); // Lê o nome da cidade com espaços.

    printf("Digite a população da cidade: ");
    scanf("%d", &population1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &tourist_pt1);

    printf("\n");

    // Segunda Carta.
    printf("Digite o estado da segunda carta (B-Z): ");
    scanf(" %c", &state2);
    state2 = toupper(state2); // Garante que o estado seja maiúsculo.

    // Validação do estado.
    if (state2 < 'B' || state2 > 'Z')
    {
        printf("Estado inválido! Deve ser uma letra de A a H.\n");
        return 2; // Encerra o programa com erro.
    }

    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%3s", code2); // Lê até 3 caracteres (tamanho do código).

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", name2); // Lê o nome da cidade com espaços.

    printf("Digite a população da cidade: ");
    scanf("%d", &population2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &tourist_pt2);
}

// Mostrar cartas.
void displayCards()
{

    // Exibindo os dados da primeira carta.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", state1);                           // Exibe um caractere representando o estado.
    printf("Código: %s\n", code1);                            // Exibe a string do código da carta.
    printf("Nome da Cidade: %s\n", name1);                    // Exibe o nome da cidade.
    printf("População: %d\n", population1);                   // Exibe a população inteira.
    printf("Área: %.2f km²\n", area1);                        // Exibe a área com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);             // Exibe o PIB com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", tourist_pt1); // Exibe o número de pontos turísticos.

    // Exibindo os dados da segunda carta.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", state2);                           // Exibe um caractere representando o estado.
    printf("Código: %s\n", code2);                            // Exibe a string do código da carta.
    printf("Nome da Cidade: %s\n", name2);                    // Exibe o nome da cidade.
    printf("População: %d\n", population2);                   // Exibe a população inteira.
    printf("Área: %.2f km²\n", area2);                        // Exibe a área com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib2);             // Exibe o PIB com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", tourist_pt2); // Exibe o número de pontos turísticos.
}

void compareCards()
{
    // Marcar pontos das cartas.
    int score1 = 0, score2 = 0;

    // População.
    if (population1 > population2)
        score1++;
    else if (population2 > population1)
        score2++;

    // Area.
    if (area1 > area2)
        score1++;
    else if (area2 > area1)
        score2++;

    // Pib.
    if (pib1 > pib2)
        score1++;
    else if (pib2 > pib1)
        score2++;

    // Pontos turisticos.
    if (tourist_pt1 > tourist_pt2)
        score1++;
    else if (tourist_pt2 > tourist_pt1)
        score2++;

    printf("\nResultado da comparação:\n");
    if (score1 > score2)
        printf("A cidade vencedora é: %s\n", name1);
    else if (score2 > score1)
        printf("A cidade vencedora é: %s\n", name2);
    else
        printf("Empate!\n");
}