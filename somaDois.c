#include <stdio.h>

int main(){

    int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;

    printf("A soma dos números %i e %i é: %i \n\n", num1, num2, soma);
    return 0;
}