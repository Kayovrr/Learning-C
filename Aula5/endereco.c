#include <stdio.h>

int main() {
    // Declara um vetor de 5 caracteres
    char num[5];

    // ATENÇÃO: os valores de num não foram inicializados, então aqui é lixo de memória kk
    
    printf("%d\n", num[0]); // Pode mostrar qualquer valor
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("%d\n", num[3]);

    return 0;
}

/*
{Resumo} = O programa declara um vetor de caracteres sem inicializar
e tenta imprimir seus valores como números inteiros. Os resultados
serão imprevisíveis, porque o vetor contém lixo de memória.
*/
