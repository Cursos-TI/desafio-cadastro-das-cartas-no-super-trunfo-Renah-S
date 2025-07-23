#include <stdio.h>

int main() {
    int populacao;
    float area, PIB;
    char nome[20], codigo[5];
    
   /* printf("Cadastro das cartas(Super Trunfo)\n");
    
    //Nome do estado 1
    printf("Qual o nome do Estado?\n");
    scanf("%s", nome);

    //Código da Carta 1
    printf("Qual o Código da carta?\n");
    scanf("%s", codigo);
*/
    //População Carta 1
    printf("Qual a População do Estado?\n");
    scanf("%i", populacao);
/*
    //Área Carta 1
    printf("Qual a Área do Estado?\n");
    scanf("%f", area);

    //PIB Carta 1
    printf("Qual o PIB do Estado?\n");
    scanf("%f", PIB);

    //Pontos Turísticos Carta 1
    printf("Quantos pontos turísticos tem esse Estado?\n");
    scanf("%d", pontos);

    printf("As Carácteristicas da Carta 1 são:\n");
    printf("Nome: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %i\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos turísticos: %d", pontos);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
