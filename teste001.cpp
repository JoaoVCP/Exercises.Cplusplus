/*etapas para desenvolver um programa: análise, algoritmo e codificação
etapas para desenvolver um algoritmo: compreender completamente o problema a ser resolvido;
definir os dados de entrada; definir o processamento; definir os dados de saída*/

//Programa para somar 2 números

#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, soma;
    float num1;
    char sexo;
    printf("\nDigite número 1: "); //Referente ao Escreva o \n pula linha
    scanf("%d%*c",&n1); //%d máscara para numeros inteiros, %f máscara para float, char = %c Referente ao Leia
    printf("Digite número 2: "); //Referente ao Escreva
    scanf("%d%*c",&n2);
    soma = n1 + n2; //ver tabela de equivalência
    printf("O valor da soma é %d",soma);
    getchar(); //serve para aguardar um enter
    return 0;
}

//existem outras estruturas de repetição
//Control+shift+C adiciona comentário;
//após a máscara o %*c apaga o buffer do teclado, e o código do enter seja armazenado na variável é só para entrada de dados e não para saída

