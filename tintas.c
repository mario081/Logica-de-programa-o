#include <stdio.h>

int main() {
    
    float area, litros, valor, latas;
    
    printf("Digite a Aréa onde vai ser Pitada: ");
    scanf("%f", &area);
    
    litros = (area /3);
    
    latas = litros / 18;
    
    valor = latas * 80;
    
    printf("Voce vai usar %.1f latas de tintas \n", latas);
    printf("O valor Total da compra é %.2f reais", valor );

    return 0;
}