#include <stdio.h>

int main()
{
    // Declara duas variáveis inteiras
    int n1;
    int n2;

    // Lê o primeiro número digitado pelo usuário
    scanf("%d", &n1);

    // Lê o segundo número digitado pelo usuário
    scanf("%d", &n2);

    // Verifica se o primeiro número é maior que o segundo
    if (n1 > n2) {
        printf("%d é maior\n", n1);
    }
    // Caso o segundo seja maior que o primeiro
    else if (n2 > n1) {
        printf("%d é maior\n", n2);
    }
    // Caso contrário, significa que são iguais
    else {
        printf("Eles são iguais\n");
    }

    // Indica que o programa terminou corretamente
    return 0;
}

/*
{Resumo} = O programa lê dois números inteiros digitados pelo usuário e, 
usando estruturas condicionais (if e else), determina qual número é maior 
ou se ambos são iguais.
*/
