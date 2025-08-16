/*

Atividade 3: Faça um Programa que peça a temperatura em graus Farenheit, 
transforme e mostre a temperatura em graus Celsius. Dica: C = (5 (F 32)/9)

*/

#include <stdio.h>

int main(){
    double faren, faren2, celcius;

    printf("Insira a temperatura em graus Farenheit: ");
    scanf("%lf", &faren);

    celcius = (5 * (faren - 32)) / 9;
    
    printf("A temperatura %.1f °F em graus Celcius é: %.1f°C \n\n\n", faren, celcius);
return 0;
}