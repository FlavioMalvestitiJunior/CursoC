#include <stdio.h>

int main()
{
    printf("***************************\n");
    printf("* Olá Vamos jogar um jogo *\n");
    printf("***************************\n");

    int numeroSecreto = 42;
    int chute;

    printf("qual é o numero secreto? ");
    scanf("%d", &chute);

    if (chute == numeroSecreto)
    {
        printf("parabéns você acertou!!\n");
    }
    else if (chute > numeroSecreto)
    {
        printf("que pena você Errou\n");
        printf("Seu numero é maior que o numero secreto\n");
    }
    else
    {
        printf("que pena você Errou\n");
        printf("Seu numero é menor que o numero secreto\n");
    }
}
