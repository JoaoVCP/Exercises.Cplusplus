#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); //colocar em pt-br
    int n1, n2, n3, n4, soma;
    printf("\nDigite o valor do primeiro número ");
    scanf("%i%*c",&n1);
    printf("\nDigite o valor do segundo número ");
    scanf("%i%*c",&n2);
    printf("\nDigite o valor do terceiro número ");
    scanf("%i%*c",&n3);
    printf("\nDigite o valor do quarto número ");
    scanf("%i%*c",&n4);
    soma = n1 + n2 + n3 + n4;
    printf("\nA soma dos números digitados é correspondente a %i",soma);
    getchar();
    return 0;
}
