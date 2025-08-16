#include <stdio.h> 
  
int main() { 
    // Declaração de variáveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: ");
    scanf("%d", &numero1);
    printf("Entre com o número 2: ");
    scanf("%d", &numero2);
    
    // Declaração dos operadores
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;  
    divisao = numero1 / numero2;

    // Exibição dos resultados 
    printf("Soma: %d\n", soma); 
    printf("Subtração: %d\n", subtracao); 
    printf("Multiplicação: %d\n", multiplicacao); 
    printf("Divisão: %d\n", divisao); 
    //printf("Novo valor de a (após += 2 e ++): %d\n", a); 
    //printf("Novo valor de b (após *= 3 e --): %d\n", b); 
  
    return 0; 
} 