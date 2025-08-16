#include <stdio.h>
#include <string.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);
    getchar();

    /*Testei várias vezes compilar, mas sempre dava erro nessa parte, pois ele pulava direto para
    a digitação da idade, ignorando o NOME. Pesquisando, verifiquei que o scanf da MATRICULA armazenava
    o ENTER e isso estava sendo lido primeiro do FGETS, na qual a solução que encontrei foi inserir
    getchar(); logo após a leitura da matrícula.
    */

    printf("Digite seu nome: ");
    /* Função fgets utilizada da vídeo aula como sugestão para ler um texto digitado que contenha 
    espaços, que é o caso do nome completo.
    formato = variável, tamanho, fluxo de entrada(stdin é padrão do teclado) */
    fgets(nome, 50, stdin);
    //Remove o '\n' do final, se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n\n\nDados do aluno cadastrado:\n\n");
    printf("Nome completo digitado: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matrícula: %d\n", matricula);
    printf("Altura: %.2f\n\n", altura);

    return 0;

}