#include <stdio.h>

int main()
{
    // Declara um vetor de 5 inteiros
    int num[5];

    // Variáveis para armazenar a soma e o produto dos números
    int soma = 0, produto = 1;

    // Lê 5 números digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // Calcula a soma e o produto dos números do vetor
    for (int i = 0; i < 5; i++) {
        soma += num[i];      // soma acumulada
        produto *= num[i];   // produto acumulado
    }

    // Exibe a soma e o produto
    printf("Soma: %d\nProduto: %d\n", soma, produto); 

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê 5 números inteiros, calcula a soma e o 
produto desses números e exibe os resultados.
*/
