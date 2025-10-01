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

    // Comparação fixa - População
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", c1.cidade, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", c2.cidade, c2.estado, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.cidade);
    } else if (c2.populacao > c1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
