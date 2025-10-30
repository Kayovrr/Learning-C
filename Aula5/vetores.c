#include <stdio.h>

int main() {
    // Declara um vetor de 5 inteiros
    int num[5];

    // Lê 5 números digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // Faz uma pequena divisoria 
    printf("=\n");

    // Imprime cada número do vetor, um por linha
    for (int i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê 5 números inteiros digitados pelo usuário, 
armazenando-os em um vetor, e em seguida imprime cada número em uma linha.
*/
