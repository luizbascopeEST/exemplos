#include <stdio.h> 
  
int main() { 
    // Declaração de variáveis
    int numero1 = 10, numero2 = 2, resultado; 
    /* 
    printf("Entre com o número 1: ");
    scanf("%d", &numero1);
    printf("Entre com o número 2: ");
    scanf("%d", &numero2);
    */
    
    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    resultado *= numero2;
    printf("Resultado: %d\n", resultado);    

    resultado /= numero2;
    printf("Resultado: %d\n", resultado);

    resultado++;
    printf("Resultado: %d\n", resultado);

    //printf("Novo valor de a (após += 2 e ++): %d\n", a); 
    //printf("Novo valor de b (após *= 3 e --): %d\n", b); 
  
    return 0; 
} 