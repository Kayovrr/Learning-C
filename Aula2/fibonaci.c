#include <stdio.h>

int fibonacci (int f)
{
    if( f == 0) return 0;
    else if ( f == 1) return 1;
    else return fibonacci(f-1) + fibonacci(f-2);
}

int main()
{
    int saida;
    printf("Qual a posição da sequéncia de fibonacci vc deseja ver?: ");
    scanf("%d",&saida);

    printf("O número na posição %d é %d",saida,fibonacci(saida));
    return 0;

}

// {Resumo} = Retorna um número na posição f usando a famosa formula fn = f(n-1) + f(n-2), usando uma lógica recusiva.