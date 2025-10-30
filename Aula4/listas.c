#include <stdio.h>

int main()
{
    // Declara um vetor de 10 inteiros
    int lista[10];

    // Usa um laço for para ler 10 números digitados pelo usuário
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &lista[i]); // Usa & para passar o endereço de memória
    }

    // Exibe os números digitados (opcional, só para conferência)
    printf("\nNúmeros digitados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê 10 números inteiros digitados pelo usuário,
armazenando-os em um vetor, e depois exibe todos os valores digitados.
*/
