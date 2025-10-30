#include <stdio.h>

int main()
{
    // Declara três variáveis para armazenar números reais
    float n1;
    float n2;
    float n3;

    // Lê três números digitados pelo usuário (separados por vírgula)
    scanf("%f,%f,%f", &n1, &n2, &n3);

    // Calcula a média aritmética dos três números
    float media = (n1 + n2 + n3) / 3;

    // Contador para verificar quantos números são maiores que a média
    int cont = 0;

    // Verifica se o primeiro número é maior que a média
    if (n1 > media) {
        cont += 1;
    }

    // Verifica se o segundo número é maior que a média
    if (n2 > media) {
        cont += 1;
    }

    // Verifica se o terceiro número é maior que a média
    if (n3 > media) {
        cont += 1;
    }

    // Exibe quantos números são maiores que a média
    printf("%d números são maiores que a média", cont);

    return 0;
}

/*
{Resumo} = O programa lê três números reais, calcula a média deles
e mostra quantos desses números são maiores que a média.
*/
