#include <stdio.h>

int main() {
    
    int num1, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    if(num1 <= 1){
        printf("Seu numero nao e primo");
    }else{
        for(i = 2; i < num1; i++){
            if(num1 % i == 0){
                printf("Seu numero nao e primo");
                break;
            }       
        }

        if(num1 == i){
            printf("Seu numero e primo");
        }
    }

    return 0;
}