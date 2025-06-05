#include <stdio.h>

int main() {
    
    float peso, excedeu, multa;

    printf("Digite o peso do peixe: ");
    scanf("%f", &peso);

    if(peso > 50){
        excedeu = peso - 50;
        multa = excedeu * 4;

        printf("A sua multa e de: %.2f", multa);
    }else{
        printf("Seu peso esta dentro da lei");
    }


    return 0;
}