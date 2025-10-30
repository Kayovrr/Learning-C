#include<stdio.h>

int main()
{   // inicia as variáveis, num é soma.
    int num;
    scanf("%d",&num);
    int soma = 0;
    // Define i = num, e subitrai i até ser 0, somando os número de uma forma acumulativa no processo.
    for (int i = num; i >= 1;i--){ 
        soma += i;
    }
 
    printf("%d",soma);
    return 0;

}