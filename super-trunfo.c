#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_NUMERIC, ""); // Ativa separadores numéricos

    // Modelo da carta 
    char estado[15];
    char codigo[10];
    char nome[50];
    int populacao;
    float pib; // em bilhões de reais
    float area; // em km²
    int pontosTuristicos;
    float densidadePopulacional;
    double pibConvertido;
    double pibPerCapita;

    // Entrada de dados
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código IBGE da cidade: ");
    scanf("%s", &codigo);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    

    // Calcula propriedades
    
    pibConvertido = (double)pib * 1000000000;
    pibPerCapita = pibConvertido / populacao;
    densidadePopulacional = (float)populacao / area;

    // Exibir carta
    printf("\n╔══════════════════════════════════════════════╗\n");
    printf("║         🏙️  SUPER TRUNFO - CIDADES            ║\n");
    printf("╚══════════════════════════════════════════════╝\n");

    printf("📌  %s - %s\n", nome, estado);
    printf("🆔  Código IBGE: %d\n", codigo);
    printf("🏷️  Nome: %s\n", nome);
    printf("👥  População: %d habitantes\n", populacao);
    printf("🌍  Área: %.2f km²\n", area);
    printf("🏞️  Pontos Turísticos: %d\n", pontosTuristicos);
    printf("📏  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("💰  PIB: R$ %.2f (%.0f bilhões aproximadamente)\n", pibConvertido, pib);
    printf("📊  PIB per capita: R$ %.2f\n", pibPerCapita);
    printf("════════════════════════════════════════════════\n");



    return 0;
}