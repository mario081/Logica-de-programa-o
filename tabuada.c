#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int num;

    printf("Digite um numero para Tabuada: ");
    scanf("%d", &num);

    printf("Seu numero %d\n ", num);
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, i*num);
    }

    return 0;
}