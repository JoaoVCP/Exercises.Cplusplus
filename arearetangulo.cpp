#include <stdio.h>
int main()
{

    float base, altura, area;
    //Mostra a mensagem antes da leitura da base
    printf("\nDigite a base do tri�ngulo\n");
    //Recebe a base
    scanf("%f%*c",&base);
    //Mostra a mensagem antes da leitura da altura
    printf("\nDigite a altura do tri�ngulo\n");
    //Recebe a altura
    scanf("%f%*c",&altura);
    //Calcula a �rea
    area = (base*altura)/2;
    //Mostra a �rea
    printf("\nA �rea do tri�ngulo � %4.2f",area);
    //Para o programa a espera de ENTER
    getchar();
    return 0;
}
