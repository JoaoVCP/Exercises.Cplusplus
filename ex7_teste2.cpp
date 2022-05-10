#include <stdio.h>

int main()
{
    int a, b, fibonacci, i, termos;

    a = 0;
    b = 1;

    printf("Digite a quantidade: ");
    scanf("%d*c",&termos);
    printf("%d\n",a);
    printf("%d\n",b);

    for(i = 0; i < termos; i++)
    {
        fibonacci = a + b;
        a = b;
        b = fibonacci;

        printf("%d\n",fibonacci);
    }

    getchar();
    return 0;
}
