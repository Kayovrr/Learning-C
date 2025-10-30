# include <stdio.h>

// Tipos de formatação 
// char %c, int %d, float %f, doble %lf, char[] %s, tipo %P

int main()
{
    int A;

    scanf("%d", &A);

    if(A % 2 == 0){
        printf("par\n");
    } else{
        printf("impar\n");
    }

    return 0;

}

// {Resumo} = O programa verifica de A é par ou impar. 