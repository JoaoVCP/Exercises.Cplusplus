//Fa�a um programa que calcule e mostre a �rea de um c�rculo
//Sabe-se que a �rea = pi * R 2

#include <stdio.h>
#include <math.h>
int main()
{
    float area, raio;
    //Mostra mensagem antes da leitura do raio
    printf("\nDigite o raio: ");
    //recebe o raio
    scanf("%f%*c",&raio);
    //CAlcula a �rea
    area = 3.1415 * pow(raio,2);
    //Mostra a �rea
    printf("\nA �rea �: %4.3f",area);
    //Para o programa a espera de um ENTER
    getchar();
    return 0;
}
