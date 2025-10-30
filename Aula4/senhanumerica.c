#include <stdio.h>

int main()
{
    // Define a senha correta
    int senha = 23412;

    // Variável para armazenar a tentativa do usuário
    int usuario;

    // Laço do...while garante que o usuário seja solicitado pelo menos uma vez
    do {
        printf("Digite a senha: ");
        scanf("%d", &usuario);
    } while (usuario != senha); // Repete enquanto a senha estiver incorreta

    // Mensagem após digitar a senha correta
    printf("Programa finalizado\n");

    // Encerra o programa
    return 0;
}

/*
{Resumo} = O programa solicita ao usuário que digite uma senha e só
termina quando a senha digitada estiver correta, usando um laço do...while.
*/
