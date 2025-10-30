#include <stdio.h>

int minha_fun(int x, int y) // < fun( variavel1, variavel2 )
{
    return x + y; // < Realiza a soma de duas variaveis 
}

int main() // < Define o ponto de entrada 
{
 int retorno = minha_fun(1,1); // < Atribui os valores para a função

 printf("%d",retorno); // < Saída

 return 0; // < Finaliza o programa
}

// {resumo} = O programa retorna a soma de dois interos somados em uma função.