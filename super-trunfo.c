#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_NUMERIC, ""); // Ativa separadores numéricos

    // Modelo da carta 
    char estado[15];
    int codigo; // Código IBGE com 7 dígitos
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
    scanf(" %[^\n]", nome); // Lê string com espaços

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código IBGE da cidade(7 Dígitos): ");
    scanf("%d", &codigo);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    

    // Calcula propriedades
    
    pibConvertido = (double)pib * 1000000000; // Convertendo PIB para reais
    pibPerCapita = pibConvertido / populacao; // Calculo PIB per capita
    densidadePopulacional = (float)populacao / area;  // Calculo Densidade populacional

    // Exibir carta
    printf("\n╔══════════════════════════════════════════════╗\n");
    printf("║         🏙️  SUPER TRUNFO - CIDADES            ║\n");
    printf("╚══════════════════════════════════════════════╝\n");

    printf("📌  Nome: %s - %s\n", nome, estado);
    printf("🆔  Código IBGE: %d\n", codigo);
    printf("👥  População: %d habitantes\n", populacao);
    printf("🌍  Área: %.3f km²\n", area); 
    // O formato %.3f no printf exibe o número com 3 casas decimais após a vírgula
    printf("🏞️   Pontos Turísticos: %d\n", pontosTuristicos);
    printf("📏  Densidade Populacional: %.1f hab/km²\n", densidadePopulacional); 
    // O formato %.1f no printf exibe o número com 1 casa decimail após a vírgula.
    printf("💰  PIB: R$ %.2f (%.0f bilhões aproximadamente)\n", pibConvertido, pib);
    /* O formato %.2f no printf exibe o número com 2 casas decimais após a vírgula.
    Já o %.0f, mostra apenas o valor inteiro, sem decimais.*/
    printf("📊  PIB per capita: R$ %.2f\n", pibPerCapita);
    // O formato %.2f no printf exibe o número com 2 casas decimais após a vírgula.
    printf("════════════════════════════════════════════════\n");



    return 0;
}