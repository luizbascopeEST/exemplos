/*Você aplicará conceitos de modificadores de tipos de dados e operadores relacionais para desenvolver 
um sistema de gerenciamento de inventário. Você implementará funcionalidades que permitem comparações 
entre diferentes produtos, como quantidade em estoque e valor total, 
utilizando operadores relacionais sem estruturas de controle.
Além disso, aprenderá a manipular grandes números com precisão, usando modificadores de tipo como 
unsigned e long. Esses conhecimentos são fundamentais para desenvolver sistemas robustos e eficientes, 
capazes de lidar com dados variados e realizar cálculos complexos de forma precisa. */

#include <stdio.h>

int main(){
    // Declarando variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB; //comparação entre estoque e estoque mínimo

    // Exibir informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);
    
    // Comparação com valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //comparação dos valores dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (%.2f): %d\n", 
        (estoqueA*valorA), (estoqueB*valorB), 
        (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}