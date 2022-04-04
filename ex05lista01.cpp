#include <stdio.h>

int main()
{
    float salario, nsalario, aumento;
    printf("Digite o salario do funcionario ");
    scanf("%f%*c",&salario);
    printf("Qual é o aumento que o funcionario aumentou ");
    scanf("%f%*c",&aumento);

    nsalario = (salario * (aumento/100)) + salario;

    printf("\nO novo salario e %f",nsalario);
    getchar();
    return 0;
}
