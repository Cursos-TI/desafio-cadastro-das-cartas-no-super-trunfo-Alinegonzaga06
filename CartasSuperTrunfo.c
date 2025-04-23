    #include <stdio.h> // Biblioteca usada para entrada e saída de dados

    
    int main() {
    // Incluindo as variáveis da Carta 1
    char Estado, Codigo[4], Nomedacidade[20]; // Declara três variáveis do tipo char: uma para um caractere (Estado) e duas para strings (Codigo[3] e Nomedacidade[20])
    int Populacao;  // Declara uma variável do tipo int: População
    float Area, PIB;  // Declara duas variáveis do tipo float: Area e PIB que são utilizadas para números com casas decimais
    int Pontosturisticos; // Declara uma variável do tipo int: Pontos turísticos
  
    // Incluindo as variáveis da Carta 2
    char estado, codigo[4], nomedacidade[20]; 
    int populacao;
    float area, pib;
    int pontosturisticos;

    // Começamos a pedir as informações da primeira carta
    printf("Carta 1\n"); //Identifica a carta

    // Abaixo, solicitamos informações para o usuário digitar os dados no teclado
    printf("Escolha uma letra de A a H para representar o estado: \n"); 
    scanf(" %c", &Estado); // Lê um caractere (letra) do teclado

    printf("Digite o código da carta (ex: A01, B02...): \n");
    scanf("%s", &Codigo); // Lê o código (sem espaços)

    printf("Digite o nome de uma cidade (Apenas um nome, sem espaços. Ex: Florianópolis): \n"); // Solicitamos apenas o nome sem espaço, pois scanf pode ler errado ou parar antes do esperado. Assim sucessivamente
    scanf("%s", &Nomedacidade); // Lê o nome da cidade (sem espaços)

    printf("Digite o número de habitantes dessa cidade (Não utilize ponto e nem vírgula): \n"); // Sem pontos ou vírgulas, pois causam erro na leitura
    scanf("%d", &Populacao); // Lê a quantidade de habitantes

    printf("Digite a área da cidade (Não utilize virgula, somente ponto): \n");
    scanf("%f", &Area); // Lê o valor da área (em km²)

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB); // Lê o valor do PIB

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontosturisticos); // Lê quantos pontos turísticos existem na cidade

    // Agora repetimos o mesmo processo para a segunda carta
    printf("\nCarta 2\n"); 

    printf("Escolha uma letra de A a H para representar o estado: \n");
    scanf(" %c", &estado); 

    printf("Digite o código da carta (ex: A01, B02...): \n");
    scanf("%s", &codigo);

    printf("Digite o nome de uma cidade (Apenas um nome, sem espaços. Ex: Florianópolis): \n");
    scanf("%s", &nomedacidade);

    printf("Digite o número de habitantes dessa cidade (Não utilize ponto e nem vírgula): \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (Não utilize virgula, somente ponto): \n"); 
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    // Depois de preencher os dados, avisamos que o cadastro foi concluído
    printf("\nCADASTRO DE CARTAS CONCLUÍDO\n");

    // Um espaço visual para separar as informações
    printf("\n                                                                     \n"); 
    
     // Aqui mostramos na tela todas as informações que foram digitadas para a primeira carta
    printf("Carta 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nomedacidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area); // Mostra com 2 casas decimais
    printf("PIB: %.2f bilhões \n", PIB); // Mostra com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", Pontosturisticos);

    printf("\n                                                                     \n");

    // Agora mostramos na tela os dados da segunda carta
    printf("Carta 2\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões \n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

    return 0; // indica ao sistema que o programa foi executado com sucesso

}