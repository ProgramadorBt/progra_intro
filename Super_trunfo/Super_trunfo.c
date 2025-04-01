#include <stdio.h>
int main (){ 
    int turistico1 = 10;
    int turistico2 = 24;
    int populacao1 = 733759;
    int populacao2 = 830018;
    float area, pib ;
    char  cidade [50];
    char estado [50];
    char codigo [50];


    float densidade1 =733.759 / 142.814;
    float densidade2 = 830.018 / 152.581;
    float capita1 = 733.759 / 23.6;
    float capita2 = 830.018 / 23.6;




    printf(" Desafio Super Trunfo \n");
    printf(" Carta 1 \n");
    printf ("Estado : Amapá %s \n", estado);
    printf("Cidade : Macapá %s\n", cidade);
    printf("Codigo da Carta : A1 %s \n",codigo);
    printf("Area km²: 142814 km² %.2f \n",area);
    printf("Pib: 23.6 Bilhões  %.2f \n",pib);
    printf("Numero de pontos turisticos:  %d \n",turistico1);
    printf("População:  %d \n",populacao1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("Pib per capita:  %.2f \n",capita1 );


printf("\n");



    printf("Carta 2 \n");
    printf("Estado : Acre %s\n",estado);
    printf("Cidade:Rio branco  %s\n",cidade);
    printf("Codigo da carta:A2 %s\n",codigo);
    printf("Area km²:152.581 km² %.2f \n", area);
    printf("Pib: 23.6 Bilhoes %.2f \n",pib);
    printf("Numero de pontos turisticos:  %d \n",turistico2);
    printf("População:  %d \n",populacao2);
    printf("Densidade populacional:  %.2f \n", densidade2);
    printf("Pib Per capita :  %.2f \n", capita2);

    return 0 ;
}