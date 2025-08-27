#include <stdio.h>

int main() {
    char EstadoA[50], EstadoB[50];
    char cidadeA[50], cidadeB[50];
    int CódigodacartaA, CódigodacartaB;
    int PopulaçãoA, PopulaçãoB;
    int NúmerosdePontosTurísticosA, NúmerosdePontosTurísticosB;    //não consigo colocar separado 
    float AéreaA, PIBA;     //aéra em km²
    float AéreaB, PIBB;

     // CARTA A
    printf("DIGITE O ESTADO A: \n");
    scanf("%s", EstadoA);

    printf("DIGITE A CIDADE: \n");
    scanf("%s", cidadeA);

    printf("DIGITE A ÁREA EM KM² DA CIDADE: \n");
    scanf(" %f", &AéreaA);
    
    printf("DIGITE A POPULAÇÃO: \n");
    scanf(" %f", &PopulaçãoA);
    
    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf(" %d", &CódigodacartaA);

    printf("DIGITE O PIB: \n");
    scanf(" %f", &PIBA);

    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS: \n");
    scanf(" %d", &NúmerosdePontosTurísticosA);

    // CARTA B
    printf("\nDIGITE O ESTADO B: \n");
    scanf("%s", EstadoB);

    printf("DIGITE A CIDADE: \n");
    scanf("%s", cidadeB);

    printf("DIGITE A ÁREA EM KM² DA CIDADE: \n");
    scanf(" %f", &AéreaB);
    
    printf("DIGITE A POPULAÇÃO: \n");
    scanf(" %f", &PopulaçãoB);
    
    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf(" %d", &CódigodacartaB);

    printf("DIGITE O PIB: \n");
    scanf(" %f", &PIBB);

    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS: \n");
    scanf(" %d", &NúmerosdePontosTurísticosB);

    // SAÍDA CARTA A
    printf("Estado: %s\n", EstadoA);
    printf("Cidade: %s\n", cidadeA);
    printf("Área: %.2f km²\n", AéreaA);
    printf("População: %.3f\n", PopulaçãoA);
    printf("Código da Carta: %d\n", CódigodacartaA);
    printf("PIB: %.2f\n", PIBA);
    printf("Pontos Turísticos: %d\n", NúmerosdePontosTurísticosA);

    // SAÍDA CARTA B
    printf("Estado: %s\n", EstadoB);
    printf("Cidade: %s\n", cidadeB);
    printf("Área: %.2f km²\n", AéreaB);
    printf("População: %.3f\n", PopulaçãoB);
    printf("Código da Carta: %d\n", CódigodacartaB);
    printf("PIB: %.2f\n", PIBB);
    printf("Pontos Turísticos: %d\n", NúmerosdePontosTurísticosB);

    return 0;
}