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

int compara(float v1, float v2, int densidade) {
    if (densidade) return (v1 < v2) ? 1 : (v2 < v1 ? 2 : 0);
    else return (v1 > v2) ? 1 : (v2 > v1 ? 2 : 0);
}

int main() {
    Carta c1 = {"SP", "C01", "São Paulo", 12300000, 1521.0, 699000000000.0, 50, 0, 0};
    Carta c2 = {"RJ", "C02", "Rio de Janeiro", 6700000, 1200.0, 400000000000.0, 40, 0, 0};

    c1.densidadePop = c1.populacao / c1.area;
    c2.densidadePop = c2.populacao / c2.area;

    c1.pibPerCapita = c1.pib / c1.populacao;
    c2.pibPerCapita = c2.pib / c2.populacao;

    int op1, op2;
    int pontos1 = 0, pontos2 = 0;

    printf("=== MENU DE ATRIBUTOS ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &op1);
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: os atributos devem ser diferentes!\n");
        return 0;
    }

    float valores1[7] = {0, c1.populacao, c1.area, c1.pib, c1.pontosTuristicos, c1.densidadePop, c1.pibPerCapita};
    float valores2[7] = {0, c2.populacao, c2.area, c2.pib, c2.pontosTuristicos, c2.densidadePop, c2.pibPerCapita};

    int r1 = compara(valores1[op1], valores2[op1], op1 == 5);
    int r2 = compara(valores1[op2], valores2[op2], op2 == 5);

    if (r1 == 1) pontos1++; else if (r1 == 2) pontos2++;
    if (r2 == 1) pontos1++; else if (r2 == 2) pontos2++;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s: %d pontos\n", c1.cidade, pontos1);
    printf("%s: %d pontos\n", c2.cidade, pontos2);

    if (pontos1 > pontos2) printf("Vencedor: %s\n", c1.cidade);
    else if (pontos2 > pontos1) printf("Vencedor: %s\n", c2.cidade);
    else printf("Empate!\n");

    return 0;
}
