#include <stdio.h>

int main()
{
    // Declara uma variável inteira
    int num;

    // Lê um número digitado pelo usuário
    scanf("%d", &num);

    // Verifica se o número é divisível por 2
    if (num % 2 == 0) {

        // Se for divisível por 2, verifica se é positivo
        if (num > 0) {
            printf("%d é divisível por 2 e positivo", num);
        }
        // Caso contrário, é negativo
        else {
            printf("%d é divisível por 2 e negativo", num);
        }
    }
    // Caso não seja divisível por 2
    else {
        // Verifica se é positivo
        if (num > 0) {
            printf("%d não é divisível por 2 e é positivo", num);
        }
        // Caso contrário, é negativo
        else {
            printf("%d não é divisível por 2 e é negativo", num);
        }     
    }

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê um número inteiro e verifica se ele é 
divisível por 2 e se é positivo ou negativo, exibindo o resultado correspondente.
*/
