#include <stdio.h>

typedef struct
{
  char estado;
  char codigo[10];
  char nomedacidade[50];
  int populacao;
  float area;
  float pib;
  int pturisticos;
  float densidadepopulacional;
  float pibpercapita;
  float superPower;
} Carta;

int main()
{
  Carta carta1;
  Carta carta2;
  int numeroDoPrimeiroAtributo, numeroDoSegundoAtributo;
  double somaDaPrimeiraCarta = 0, somaDaSegundaCarta = 0;

  printf("Digite o estado da primeira carta: \n");
  scanf("%c", &carta1.estado);

  printf("Digite o código da primeira carta: \n");
  scanf("%s", carta1.codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", carta1.nomedacidade);

  printf("Digite a população da primeira carta: \n");
  scanf("%d", &carta1.populacao);

  printf("Digite a área da primeira carta: \n");
  scanf("%f", &carta1.area);

  printf("Digite o pib da primeira carta: \n");
  scanf("%f", &carta1.pib);

  printf("Digite o número de pontos turísticos da primeira carta: \n");
  scanf("%d", &carta1.pturisticos);

  // Segunda carta

  printf("Agora vamos para a segunda carta, digite o estado dela: \n");
  scanf(" %c", &carta2.estado);

  printf("Digite o código da segunda carta: \n");
  scanf("%s", carta2.codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", carta2.nomedacidade);

  printf("Digite a população da segunda carta: \n");
  scanf("%d", &carta2.populacao);

  printf("Digite a área da segunda carta: \n");
  scanf("%f", &carta2.area);

  printf("Digite o pib da segunda carta: \n");
  scanf("%f", &carta2.pib);

  printf("Digite o número de pontos turísticos da segunda carta: \n");
  scanf("%d", &carta2.pturisticos);

  // Calculando as densidades populacionais da primeria e segunda carta

  carta1.densidadepopulacional = (float)carta1.populacao / (float)carta1.area;
  carta1.pibpercapita = (float)carta1.pib / (float)carta1.populacao;
  carta1.superPower = (float)carta1.populacao + (float)carta1.area + (float)carta1.pib + (float)carta1.pturisticos + (float)carta1.pibpercapita;

  carta2.densidadepopulacional = (float)carta2.populacao / (float)carta2.area;
  carta2.pibpercapita = (float)carta2.pib / (float)carta2.populacao;
  carta2.superPower = (float)carta2.populacao + (float)carta2.area + (float)carta2.pib + (float)carta2.pturisticos + (float)carta2.pibpercapita;

  // Carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c \n", carta1.estado);
  printf("Código: %s \n", carta1.codigo);
  printf("Nome da cidade: %s \n", carta1.nomedacidade);
  printf("População: %d \n", carta1.populacao);
  printf("Área: %f Km2\n", carta1.area);
  printf("PIB: %f \n", carta1.pib);
  printf("Número de Pontos Turísticos: %d \n", carta1.pturisticos);
  printf("Densidade populacional: %.2f hab/km2\n", carta1.densidadepopulacional);
  printf("PIB per Capita: %.2f reais\n", carta1.pibpercapita);

  // Carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %c \n", carta2.estado);
  printf("Código: %s \n", carta2.codigo);
  printf("Nome da cidade: %s \n", carta2.nomedacidade);
  printf("População: %d \n", carta2.populacao);
  printf("Área: %f \n", carta2.area);
  printf("PIB: %f \n", carta2.pib);
  printf("Número de Pontos Turísticos: %d \n", carta2.pturisticos);
  printf("Densidade populacional: %.2f hab/km2\n", carta2.densidadepopulacional);
  printf("PIB per Capita: %.2f reais\n", carta2.pibpercapita);

  // Comparação de cartas
  // printf("\nComparação de cartas: \n");
  // printf("População: %s\n", carta1.populacao > carta2.populacao ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("Área: %s\n", carta1.area > carta2.area ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("PIB: %s\n", carta1.pib > carta2.pib ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("Pontos turísticos: %s\n", carta1.pturisticos > carta2.pturisticos ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("Densidade populacional: %s\n", carta1.densidadepopulacional < carta2.densidadepopulacional ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("PIB per Capita: %s\n", carta1.pibpercapita > carta2.pibpercapita ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("Super poder: %s\n", carta1.superPower > carta2.superPower ? "Carta 1 venceu" : "Carta 2 venceu");
  // printf("Super poder Carta 1: %f. Carta 2: %f.", carta1.superPower, carta2.superPower);

  printf("\n*** Qual o primeiro atributo que será usado para comparação? ***\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Número do primeiro atributo: \n");
  scanf("%d", &numeroDoPrimeiroAtributo);

  printf("\n*** Qual o segundo atributo que será usado para comparação? ***\n");
  numeroDoPrimeiroAtributo != 1 && printf("1. População\n");
  numeroDoPrimeiroAtributo != 2 && printf("2. Área\n");
  numeroDoPrimeiroAtributo != 3 && printf("3. PIB\n");
  numeroDoPrimeiroAtributo != 4 && printf("4. Número de pontos turísticos\n");
  numeroDoPrimeiroAtributo != 5 && printf("5. Densidade demográfica\n");
  printf("Número do segundo atributo: \n");
  scanf("%d", &numeroDoSegundoAtributo);

  switch (numeroDoPrimeiroAtributo)
  {
  case 1:
    printf("\nPrimeiro atributo escolhido: População\n");
    printf("População: %s\n", carta1.populacao > carta2.populacao ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta = carta1.populacao;
    somaDaSegundaCarta = carta2.populacao;
    break;

  case 2:
    printf("\nPrimeiro atributo escolhido: Área\n");
    printf("Área: %s\n", carta1.area > carta2.area ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta = carta1.area;
    somaDaSegundaCarta = carta2.area;
    break;

  case 3:
    printf("\nPrimeiro atributo escolhido: PIB\n");
    printf("PIB: %s\n", carta1.pib > carta2.pib ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta = carta1.pib;
    somaDaSegundaCarta = carta2.pib;
    break;

  case 4:
    printf("\nPrimeiro atributo escolhido: Número de pontos turísticos\n");
    printf("Pontos turísticos: %s\n", carta1.pturisticos > carta2.pturisticos ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta = carta1.pturisticos;
    somaDaSegundaCarta = carta2.pturisticos;
    break;

  case 5:
    printf("\nPrimeiro atributo escolhido: Densidade demográfica\n");
    printf("Densidade demográfica: %s\n", carta1.densidadepopulacional < carta2.densidadepopulacional ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta = carta1.densidadepopulacional;
    somaDaSegundaCarta = carta2.densidadepopulacional;
    break;

  default:
    break;
  }

  switch (numeroDoSegundoAtributo)
  {
  case 1:
    printf("\nSegundo atributo escolhido: População\n");
    printf("População: %s\n", carta1.populacao > carta2.populacao ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta += carta1.populacao;
    somaDaSegundaCarta += carta2.populacao;
    break;

  case 2:
    printf("\nSegundo atributo escolhido: Área\n");
    printf("Área: %s\n", carta1.area > carta2.area ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta += carta1.area;
    somaDaSegundaCarta += carta2.area;
    break;

  case 3:
    printf("\nSegundo atributo escolhido: PIB\n");
    printf("PIB: %s\n", carta1.pib > carta2.pib ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta += carta1.pib;
    somaDaSegundaCarta += carta2.pib;
    break;

  case 4:
    printf("\nSegundo atributo escolhido: Número de pontos turísticos\n");
    printf("Pontos turísticos: %s\n", carta1.pturisticos > carta2.pturisticos ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta += carta1.pturisticos;
    somaDaSegundaCarta += carta2.pturisticos;
    break;

  case 5:
    printf("\nSegundo atributo escolhido: Densidade demográfica\n");
    printf("Densidade demográfica: %s\n", carta1.densidadepopulacional < carta2.densidadepopulacional ? "Carta 1 venceu" : "Carta 2 venceu");
    somaDaPrimeiraCarta += carta1.densidadepopulacional;
    somaDaSegundaCarta += carta2.densidadepopulacional;
    break;

  default:
    break;
  }

  printf("\n*** RODADA ***\n");
  printf("Soma dos atributos da primeira carta: %f\n", somaDaPrimeiraCarta);
  printf("Soma dos atributos da segunda carta: %f\n", somaDaSegundaCarta);

  if (somaDaPrimeiraCarta > somaDaSegundaCarta) {
    printf("\nCarta 1 venceu a rodada!");
  } else if (somaDaPrimeiraCarta < somaDaSegundaCarta) {
    printf("\nCarta 2 venceu a rodada!");
  } else {
    printf("\nA rodada empatou!");
  }

  return 0;
}