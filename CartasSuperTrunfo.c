#include <stdio.h>

int main() {
    int populacao, pontos;
    float area, PIB;
    char cidade[20], estado[20], codigo[5];
    
    printf("Cadastro das cartas(Super Trunfo)\n");
    
    //Nome do estado 1
    printf("Qual o nome do Estado?\n");
    scanf("%s", estado);

    //Código da Carta 1
    printf("Qual o Código da carta?\n");
    scanf("%s", codigo);

    //Nome da Cidade 1
    printf("Qual o nome da Cidade?\n");
    scanf("%s", cidade);

    //População Carta 1
    printf("Qual a População da Cidade?\n");
    scanf("%d", &populacao);

    //Área Carta 1
    printf("Qual a Área da Cidade em Km²?\n");
    scanf("%f", &area);

    //PIB Carta 1
    printf("Qual o PIB da Cidade em Bilhoes?\n");
    scanf("%f", &PIB);

    //Pontos Turísticos Carta 1
    printf("Quantos pontos turísticos tem essa Cidade?\n");
    scanf("%d", &pontos);

    printf("As Carácteristicas da Carta 1 são:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: R$%.2f Bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);
    //Fim da Carta 1

    printf("Seguindo agora para a Carta 2\n");

    //Nome do estado 2
    printf("Qual o nome do Estado?\n");
    scanf("%s", estado);

    //Código da Carta 2
    printf("Qual o Código da carta?\n");
    scanf("%s", codigo);

    //Nome da Cidade 2
    printf("Qual o nome da Cidade?\n");
    scanf("%s", cidade);

    //População Carta 2
    printf("Qual a População da Cidade?\n");
    scanf("%d", &populacao);

    //Área Carta 2
    printf("Qual a Área da Cidade em Km²?\n");
    scanf("%f", &area);

    //PIB Carta 2
    printf("Qual o PIB da Cidade em Bilhões?\n");
    scanf("%f", &PIB);

    //Pontos Turísticos Carta 2
    printf("Quantos pontos turísticos tem essa Cidade?\n");
    scanf("%d", &pontos);

    printf("As Carácteristicas da Carta 2 são:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: R$%.2f Bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);
    //Fim da Carta 2

    return 0;
}
