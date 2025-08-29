#include <stdio.h>
int main()
{   
    //À seguir todas as variáveis inicializadas e com seus devidos tipos referentes à primeira carta:
    
    char estado = 'a';                
    int populacao = 1;
    float area = 1.00;
    char codigo[10] = "abc";
    char cidade[30] = "fortaleza";
    float pib = 1.00;
    int pontos_turisticos = 1;
    
    //Todas as perguntas que serão feitas para que o usuário cadastre a primeira carta:
    
    printf("Jogo de Super Trunfo\n");
    printf("Digite o primeiro estado: "); //Será usado "printf" para pedir as informações ao usuário
    scanf("%c", &estado); //Será usado "scanf" para a entrada e o armazenamento dos dados

    printf("Informe o codigo da primeira carta: ");
    scanf("%s", codigo);

    printf("Escreva o nome da primeira cidade: ");
    scanf("%s", cidade);

    printf("Informe a populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("Informe a area da primeira cidade em km²: ");
    scanf("%f", &area);

    printf("Informe o PIB da primeira cidade: ");
    scanf("%f", &pib);

    printf("Informe o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);
    
    //Informações da primeira carta cadastrada pelo usuário:

printf("\nCarta 1:\n\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("Populacao: %d habitantes\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos Turisticos: %d\n", pontos_turisticos);

    //Variáveis da segunda carta que será cadastrada:

    char estado2[5] = "b";
    int populacao2 = 2;
    float area2 = 2.00;
    char codigo2[10] = "def";
    char cidade2[30] = "floripa";
    float pib2 = 2.00;
    int pontos_turisticos2 = 2;

    //Perguntas feitas para o usuário cadastrar a segunda carta:

    printf("\nDigite o segundo estado: ");
    scanf("%s", estado2);

    printf("Informe o codigo da segunda carta: ");
    scanf("%s", codigo2);

    printf("Escreva o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Informe a populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Informe a area da segunda cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
   
    //Informações da segunda carta cadastrada pelo usuário:

printf("\nCarta 2:\n\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Populacao: %d habitantes\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f \n", pib2);
printf("Pontos Turisticos: %d\n", pontos_turisticos2);

return 0;
}
