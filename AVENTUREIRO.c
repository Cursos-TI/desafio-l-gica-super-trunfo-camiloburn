#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;
} Carta;

int main() {
    Carta c1, c2;
    int opcao;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", c1.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", c1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", c1.cidade);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area (km²): ");
    scanf("%f", &c1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    c1.densidadePop = c1.populacao / c1.area;
    c1.pibPerCapita = c1.pib / c1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", c2.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", c2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", c2.cidade);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area (km²): ");
    scanf("%f", &c2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    c2.densidadePop = c2.populacao / c2.area;
    c2.pibPerCapita = c2.pib / c2.populacao;

    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\n=== Comparacao ===\n");

    switch(opcao) {
        case 1:
            printf("Populacao: %d x %d\n", c1.populacao, c2.populacao);
            if (c1.populacao > c2.populacao) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.populacao > c1.populacao) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Area: %.2f x %.2f\n", c1.area, c2.area);
            if (c1.area > c2.area) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.area > c1.area) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f x %.2f\n", c1.pib, c2.pib);
            if (c1.pib > c2.pib) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.pib > c1.pib) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turisticos: %d x %d\n", c1.pontosTuristicos, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.pontosTuristicos > c1.pontosTuristicos) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional: %.2f x %.2f\n", c1.densidadePop, c2.densidadePop);
            if (c1.densidadePop < c2.densidadePop) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.densidadePop < c1.densidadePop) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        case 6:
            printf("PIB per capita: %.2f x %.2f\n", c1.pibPerCapita, c2.pibPerCapita);
            if (c1.pibPerCapita > c2.pibPerCapita) printf("Vencedor: %s\n", c1.cidade);
            else if (c2.pibPerCapita > c1.pibPerCapita) printf("Vencedor: %s\n", c2.cidade);
            else printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
''
