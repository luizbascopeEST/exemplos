#include <stdio.h> 
/*
Agora você aplicará os conceitos estudados no nível intermediário criando um programa em C que calcula a média
de três notas inseridas pelo usuário. Utilizaremos variáveis para armazenar as notas, 
operadores matemáticos para somar e calcular a média, e operadores de atribuição para atualizar valores.

As funções printf e scanf serão usadas para interagir com o usuário, permitindo a entrada das notas e a 
exibição da média final. Esta prática reforçará seu entendimento sobre variáveis, tipos de dados e 
funções de entrada e saída, preparando-o para resolver problemas mais complexos.
*/

int main(){
    int nota, nota2, nota3;
    float media;

    printf("------------------------- CALCULO DE MÉDIA FINAL ESCOLAR, DE 0 A 10 --------------------------------");
    printf("\n\n\nDigite a primeira nota: ");
    scanf("%d", &nota);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    media = (float)(nota+nota2+nota3)/3;
    printf("A sua média é: %.2f\n\n", media);

    return 0;
}