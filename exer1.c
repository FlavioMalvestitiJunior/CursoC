#include <stdio.h>

int main()
{
    double x;
    double y;

    printf("Digite o Valor de x: ");
    scanf("%le",&x);
    printf("Digite o Valor de y: ");
    scanf("%le",&y);
    double result = x*y;
    printf("valor de x*y: %f",result);
}
