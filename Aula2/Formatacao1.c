# include <stdio.h>

int main()

{
    char nome[61]; // < nome[numero maximo de caracteres]
    int idade;
    float altura;
    
    printf("seu nome: ");
    scanf("%61s",nome);

    printf("sua idade:");
    scanf("%d",&idade);

    printf("Sua altura:");
    scanf("%f",&altura);

    printf("Meu nome eh %s, eu tenho %d anos é %.3fm de altura",nome,idade,altura);
    return 0;
}

// {Resumo} = O programa pede ao usuário Nome,Idade e Altura, e imprime no terminal. 

