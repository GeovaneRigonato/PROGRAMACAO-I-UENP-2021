#include <stdio.h>
#include <locale.h>
#define TAM 10
/*Fa ̧ca um Programa que pe ̧ca as quatro notas de 10 alunos, calcule e armazene num vetor a
m ́edia de cada aluno, imprima o n ́umero de alunos com m ́edia maior ou igual a 7.0.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3,n4,media=0;
    float vetor[9];
    int count=0;
    for(int i=0; i<TAM; i++)
    {
        printf("Digite as nota do %dº aluno: ",i+1);
        for(int k=0; k<4; k++)
        {
            scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
            media = (n1+n2+n3+n4)/4;
            break;
        }
        vetor[i] = media;
        printf("\n");
        if(vetor[i]>=7){
            count++;
        }
    }
    printf("Número de alunos com média maior ou igual a 7.0: %d Alunos.\n\n",count);
    system("pause");
    return 0;

}
