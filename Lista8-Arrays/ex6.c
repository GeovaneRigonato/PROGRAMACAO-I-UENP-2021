#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int vetor[100],existe=0,a,g;

    for(int i=0;i<100;i++){
        vetor[i] = rand() % 6+1;
        if(vetor[i]==0){g++;}
    }

printf("\n<<<<<<------------------------------------------------------------------------------------------------------------>>>>>>\n");
printf("........................................................JOGANDO DADO........................................................");
printf("\n<<<<<<------------------------------------------------------------------------------------------------------------>>>>>>\n");
    for(int i=0;i<100;i++){
        existe=1;
        a=vetor[i];
        for(int j=0;j<100;j++){
            if(a==vetor[j]&&i!=j&&a!=0){
                existe++;
                vetor[j]=0;
            }
        }
        if(a!=0){
            printf("O valor --> %d - apareceu --> %d vezes\n",vetor[i],existe);
        }
    }if(g>0){
            printf("O valor --> 0 - apareceu --> %d vezes\n",g);
        }
    return 0;
}
