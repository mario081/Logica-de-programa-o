#include <stdio.h>
#include <locale.h>

int main() {
    int vetor[10], i, loc, procurar = 0;
    printf ("Coloque 10 numeros \n");
    for (i=0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("digite o nunmero quer que procurar: ");
    scanf ("%d", &loc);
    for (i=0; i < 10; i++){
        if(vetor[i] == loc){
            printf("numero que foi localizado: %d", loc, i);
            procurar = 1;
            break;
        }
    }

    if(!procurar){
        printf("numero nao foi, encontrando %d", loc);
    }
    return 0;
}