#include <stdio.h>
#include <locale.h>

int main() {
    int vetor[10], i;
    printf ("Coloque 10 numeros \n");
    for (i=0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i=9; i>= 0; i--){
            printf("%d", vetor[i]);

        }
    

    return 0;
}