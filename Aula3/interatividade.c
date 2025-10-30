#include <stdio.h>

int main()
{
    // Declara uma variável inteira
    int n;

    // Lê um número digitado pelo usuário
    scanf("%d", &n);

    // Verifica se o número é múltiplo de 3
    if (n % 3 == 0) {
        printf("É múltiplo de 3\n");
    } 
    // Caso contrário, não é múltiplo de 3
    else {
        printf("Não é múltiplo de 3\n");
    }

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê um número inteiro digitado pelo usuário e 
verifica se ele é múltiplo de 3, exibindo o resultado na tela.
*/
