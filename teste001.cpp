/*etapas para desenvolver um programa: an�lise, algoritmo e codifica��o
etapas para desenvolver um algoritmo: compreender completamente o problema a ser resolvido;
definir os dados de entrada; definir o processamento; definir os dados de sa�da*/

//Programa para somar 2 n�meros

#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, soma;
    float num1;
    char sexo;
    printf("\nDigite n�mero 1: "); //Referente ao Escreva o \n pula linha
    scanf("%d%*c",&n1); //%d m�scara para numeros inteiros, %f m�scara para float, char = %c Referente ao Leia
    printf("Digite n�mero 2: "); //Referente ao Escreva
    scanf("%d%*c",&n2);
    soma = n1 + n2; //ver tabela de equival�ncia
    printf("O valor da soma � %d",soma);
    getchar(); //serve para aguardar um enter
    return 0;
}

//existem outras estruturas de repeti��o
//Control+shift+C adiciona coment�rio;
//ap�s a m�scara o %*c apaga o buffer do teclado, e o c�digo do enter seja armazenado na vari�vel � s� para entrada de dados e n�o para sa�da

