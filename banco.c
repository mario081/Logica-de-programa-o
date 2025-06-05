#include <stdio.h>

int main() {
    
    float saldo = 1000;
    int menu;
    float resultado;
    int sair = 0;

    while(!sair){

    printf("------ Mariobank ------\n");
    printf("1 Saldo\n");
    printf("2 Saque\n");
    printf("3 deposito\n");
    printf("4 transferencia\n");
    printf("5 Sair\n");

    printf("Opicao: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1: {

            printf("Seu Salto na conta e: %f", saldo);
            break;

        }
        case 2: {

            float saque;

            printf("Digite o valor que voce quer retirar: ");
            scanf("%f", &saque);

            if(saque > saldo){
                printf("Sue saldo e insuficiente");
                break;
            }else{
                
                resultado = (saldo - saque);
                
                printf("O valor retirado e %.2f seu saldo ficou de %.2f", saque , resultado);
                break;
            }

        }
        case 3: {

            float deposito;

            printf("Digite o valor de Deposito: ");
            scanf("%f", &deposito);

            if(deposito <= 0){
                printf("O valor do deposito nao pode ser menor ou igual a zero");
                break;
            }else{
                resultado = (saldo + deposito);

                printf("Seu saldo e de %.2f", resultado);
                break;
            }
        }
        case 4: {

            float transferencia;

            printf("Digite o valor de voce quer transferir: ");
            scanf("%f", &transferencia);

            if(transferencia <= 0){
                printf("O valor do deposito nao pode ser menor ou igual a zero");
                break;
            }else{
            resultado = (saldo - transferencia);

            printf("Voce transferiu %.2f", resultado);
            break;
            }
        }
        case 5: {
            printf("Voce saiu do banco MARIOBANK");
            sair = 1;
            break;

        }
        default:
            printf("Opção inválida. Tente novamente.\n");
    }
}

    return 0;
}