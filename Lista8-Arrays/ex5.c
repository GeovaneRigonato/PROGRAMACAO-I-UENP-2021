#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int temperatura[12];
    float mediaAnual=0;

    for(int i=0;i<12;i++){
        printf("Digite a temperatura do mês %d: ",i+1);
        scanf("%d",&temperatura[i]);
        mediaAnual += temperatura[i];
        }

    mediaAnual /= 12;
    printf("\nTemperaturas maiores que a média anual: \n");
        if(temperatura[0] > mediaAnual){
            printf("%dºC - Janeiro\n",temperatura[0]);
        }if(temperatura[1] > mediaAnual){
                    printf("%dºC - Fevereiro\n",temperatura[1]);
        }if(temperatura[2] > mediaAnual){
                    printf("%dºC - Março\n",temperatura[2]);
        }if(temperatura[3] > mediaAnual){
                    printf("%dºC - Abril\n",temperatura[3]);
        }if(temperatura[4] > mediaAnual){
                    printf("%dºC - Maio\n",temperatura[4]);
        }if(temperatura[5] > mediaAnual){
                    printf("%dºC - Junho\n",temperatura[5]);
        }if(temperatura[6] > mediaAnual){
                    printf("%dºC - Julho\n",temperatura[6]);
        }if(temperatura[7] > mediaAnual){
                    printf("%dºC - Agosto\n",temperatura[7]);
        }if(temperatura[8] > mediaAnual){
                    printf("%dºC - Setembro\n",temperatura[8]);
        }if(temperatura[9] > mediaAnual){
                    printf("%dºC - Outubro\n",temperatura[9]);
        }if(temperatura[10] > mediaAnual){
                    printf("%dºC - Novembro\n",temperatura[10]);
        }if(temperatura[11] > mediaAnual){
                    printf("%dºC - Dezembro\n",temperatura[11]);
        }

    return 0;
}
