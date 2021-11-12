#include <stdio.h>
#include <locale.h>
#define TAM 20

int main()
{
    setlocale(LC_ALL, "Portuguese");
int vetor[TAM-1];
int PAR[TAM-1];
int IMPAR[TAM-1],aux=0;
    for(int i=0;i<TAM;i++){
        printf("Digite o %dº indice: ",i+1);
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<TAM;i++){
            if(vetor[i]%2 == 0){
            PAR[i] = vetor[i];
        }else{
            PAR[i] = 0;
            }
                    if(vetor[i]%2 != 0){
            IMPAR[i] = vetor[i];
        }else{
            IMPAR[i] = 0;
            }
    }
    printf("\n\n");

    for(int i=0;i<TAM;i++){
        printf("Vetor[] => %d\n",vetor[i]); //imprime vetor[20]
    }printf("\n\n");
    for(int i =0;i<TAM;i++){
        if(PAR[i] != 0){
            printf("PAR[] => %d\n",PAR[i]);//imprime vetorPAR[]
        }
    }printf("\n\n");
        for(int i =0;i<TAM;i++){
        if(IMPAR[i] != 0){
            printf("IMPAR[] => %d\n",IMPAR[i]);//imprime vetorPAR[]
        }
    }

    system("pause");
    return 0;

}
