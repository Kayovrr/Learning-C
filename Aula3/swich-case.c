/*
sintax;

switc(variavel){
    case costante1;
        printf("o");
        break;
    case constante2;
        printf("u");
        break;
    case constante 3;
        printf("z")
        break;
    default 
}
*/

#include <stdio.h>

int main()
{
    // Declara uma variável inteira para representar o dia da semana
    int dia;

    // Lê um número inteiro digitado pelo usuário
    scanf("%d", &dia);

    // Usa o comando switch para verificar o valor de 'dia'
    switch (dia) {
        case 1:
            printf("Domingo");
            break; // Encerra o caso se for verdadeiro

        case 2:
            printf("Segunda");
            break;

        case 3:
            printf("Terça");
            break;

        case 4:
            printf("Quarta");
            break;

        case 5:
            printf("Quinta");
            break;

        case 6:
            printf("Sexta");
            break;

        case 7:
            printf("Sábado");
            break;

        // Caso o valor digitado não seja de 1 a 7
        default:
            printf("Dia inválido");
            break;
    }

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa lê um número inteiro de 1 a 7 e, 
usando a estrutura switch, mostra o dia da semana correspondente. 
Se o número não estiver nesse intervalo, exibe "Dia inválido".
*/
