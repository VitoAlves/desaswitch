#include <stdio.h>

int main() {
    char  carta[20] = "Carta 1", carta2[20] = "Carta 2", estado, estado2, nomecidade [20], nomecidade2 [20], codigocarta [5], codigocarta2 [5];
    int populacao, populacao2, pontosturistico, pontoturistico2, resultado, comparacao;
    float area, area2, pib, pib2, pibc, dp, dp2, pibc2, sp1, sp2, superpoder, superpoder2;

    printf("\n");
    printf("Crie duas cartas para o desafio!!\n");
    
    printf("\n");
    
    printf("%s:\n", carta);

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Números de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturistico);

    dp = (float) populacao / area;

    pibc = (float) pib / populacao;

    printf("\n");

    printf("%s:\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f Km²\n", area);
    printf("PIB: %.3f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontosturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", dp);
    printf("PIB per Capita: %.2f reais\n", pibc);
   
    printf("\n");

    printf("%s:\n", carta2);

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos da cidade: \n");
    scanf("%d", &pontoturistico2);

    dp2 = (float) populacao2 / area2;

    pibc2 = (float) pib2 / populacao2;
    
    printf("\n");

    printf("%s:\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: %.2f reais\n", pibc2);

    printf("\n");

    printf("Comparação de cartas:\n");

    superpoder = (float) (populacao + area + pib + pontosturistico + pibc + dp);
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontoturistico2 + pibc2 + dp2);

    resultado = populacao > populacao2;
    printf("População: a %s venceu? (%d)\n", carta, resultado);
    resultado = area > area2;
    printf("Área: a %s venceu? (%d)\n", carta, resultado);
    resultado = pib > pib2;
    printf("PIB: a %s venceu? (%d)\n", carta, resultado);
    resultado = pontosturistico > pontoturistico2;
    printf("Ponto Turístico: a %s venceu? (%d)\n", carta, resultado);
    resultado = dp < dp2;
    printf("Densidade Populacional: a %s venceu? (%d)\n", carta2, resultado);
    resultado = pibc > pibc2;
    printf("PIB per capita: a %s venceu? (%d)\n", carta, resultado);
    resultado = superpoder > superpoder2;
    printf("Super Poder: a %s venceu? (%d)\n", carta, resultado);

    printf("\n");

    printf("Escolha um atributo para comparar as cartas!!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Escolha: \n");
    scanf("%d", &comparacao);

    switch (comparacao)
    {
    case 1:

        if(populacao > populacao2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, populacao);

        } else if(populacao == populacao2) {

        printf("As duas cartas tem a mesma população!!\n");

        } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, populacao2);

        } 

    break;

    case 2:

        if(area > area2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, area);

        } else if(area == area2) {

            printf("As duas cartas tem a mesma área!!\n");
    
            } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, area2);

        } 

    break;

    case 3:

        if(pib > pib2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, pib);

        } else if(pib == pib2) {

            printf("As duas cartas tem o mesmo PIB!!\n");
    
            } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, pib2);

        } 

    break;
    
    case 4:

        if(pontosturistico > pontoturistico2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, pontosturistico);

        } else if(pontosturistico == pontoturistico2) {

            printf("As duas cartas tem as mesmas quantidades de pontos turísticos!!\n");
    
            } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, pontoturistico2);

        } 

    break;

    case 5:

        if(dp > dp2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, dp);

        } else if(dp == dp2) {

            printf("As duas cartas tem a mesma densidade populacional!!\n");
    
            } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, dp2);

        } 

    break;

    case 6:

        if(pibc > pibc2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, pibc);

        } else if(pibc == pibc2) {

            printf("As duas cartas tem o mesmo PIB per capita!!\n");
    
            } else {
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, pibc2);

        } 

    break;

    case 7:

        if(superpoder > superpoder2) {
        printf("A %s (%s) venceu! (%d)", carta, nomecidade, superpoder);

        } else if (superpoder2 < superpoder2){
        printf("A %s (%s) venceu! (%d)", carta2, nomecidade2, superpoder2);

        } else {
        printf("As duas cartas tem o mesmo valor!!\n");

        }

    break;

    default:

        printf("Opção inválida!!");
    
    break;
    }


    return 0;

}
