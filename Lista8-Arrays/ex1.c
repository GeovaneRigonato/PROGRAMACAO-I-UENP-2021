#include <stdio.h>
#include <locale.h>

//Faca um Programa que leia um vetor de 5 n ́umeros inteiros e mostre-os.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[4];

    for(int i=0; i<5; i++)
    {
        printf("Digite o valor do %dº indice: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;
}
