# include <stdio.h>
// %d é para inteiros, %f é para float
// Caso quira n casas decimais é só comocar %.nf
// Scanf é a mesma coisa q o imput. sintax: scanf("%d %f",&nome, &idade );. obs: defina a variavel antes 

int main() // Define o ponto de entrada do programa

{

    int A = 2; // < variavel inteira 

    scanf("%d",&A); // < Atribuição do tipo da variavel

    int Quadrado = A*A; // < Eleva a variavel (A) a base 2
    int Cubo = A*A*A;  // < Eleva a variavel (A) a base 3

    printf("%d\n", Quadrado); // < Saída da exponenciação de base 2
    printf("%d\n", Cubo);    // < Saída da exponenciação de base 3

    return 0; // < Fianliza o programa

    // {Resumo} = O programa define o valor de A como 2 é mostra ele ao quadrado é ao cubo.
}
