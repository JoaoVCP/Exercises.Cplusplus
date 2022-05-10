#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, mediaClasse=0, mediaAluno, somaNota,somaClasse;
    int reprovados=0, aprovados=0, exame=0, i, n;

    printf("Quantos alunos são?");
    scanf("%i*c",&n);

    for(i=1; i <= n; i++){
        printf("\nDigite a primeira nota do aluno de 0 a 10: ");
        scanf("%f*c",&nota1);
        printf("\nDigite a segunda nota do aluno de 0 a 10: ");
        scanf("%f*c",&nota2);

        if(nota1 < 0 && nota2 < 0 || nota1 > 10 && nota2 > 10) {
            printf("\nVocê está digitando uma nota errada! Comece denovo");
            break;
        }

        somaNota = nota1+nota2;
        mediaAluno = somaNota/2;
        printf("\nVocê tirou a nota: %f",mediaAluno);

        if(mediaAluno >= 7) {
            printf("\nVocê está Aprovado!");
            aprovados += 1;
        }
        else if(mediaAluno > 3 && mediaAluno < 7) {
            printf("\nVocê está de exame!");
            exame += 1;
        }
        else {
            printf("\nVocê está reprovado!");
            reprovados += 1;
        }
        somaClasse = somaClasse + somaNota;
    }

    printf("\nA quantidade de alunos aprovados foram: %i\n",aprovados);
    printf("A quantidade de alunos de exame foram: %i\n",exame);
    printf("A quantidade de alunos reprovados foram: %i\n",reprovados);
    mediaClasse = somaClasse / (n*2);
    printf("A media da classe é: %f\n",mediaClasse);

    getchar();
    return 0;
}
