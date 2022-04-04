#include <stdio.h>

int main()
{
    float sal, result;
    printf("Digite o valor do primeiro número ");
    scanf("%f",&sal);

    result = sal*1.25;

    printf("O novo salario e %f", result);
    getchar();
    return 0;
}
