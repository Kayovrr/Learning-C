#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num); // Lê um número do usuário

    int cont = 1;       // Contador começa em 1
    int soma = 0;       // Inicializa a soma

    // Enquanto cont for menor ou igual ao número digitado
    while (cont <= num) {
        soma += cont;   // Soma o valor do contador
        cont++;         // Incrementa o contador
    }

    printf("Contador: %d\n", cont - 1); // Subtrai 1 porque cont passa do limite
    printf("Soma: %d\n", soma);         // Mostra a soma de 1 até num
    
    return 0;
}

/*
{Resumo} = O programa lê um número inteiro e calcula a soma de todos os
números de 1 até esse número, mostrando também quantos números foram somados.
*/

