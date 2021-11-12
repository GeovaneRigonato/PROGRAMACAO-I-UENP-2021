#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int perguntas[4],count=0;
    printf("A seguir, 5 perguntas devem ser respondidas:\n1-SIM\n0-NÃO\n");
    printf("Telefonou para a vítima?");
    scanf("%d",&perguntas[0]);
        printf("Esteve no local do crime?");
    scanf("%d",&perguntas[1]);
        printf("Mora perto da vítima?");
    scanf("%d",&perguntas[2]);
        printf("Devia para a vítima?");
    scanf("%d",&perguntas[3]);
        printf("Já trabalhou com a vítima?");
    scanf("%d",&perguntas[4]);

    for(int i=0;i<5;i++){
        if(perguntas[i] == 1){
            count++;
        }
    }
    if(count < 2){
        printf("\nInocente");
    }else if(count == 2){
        printf("\nSuspeita");
    }else if(count == 3 || count == 4){
        printf("\nCúmplice");
    }else if(count == 5){
        printf("\nAssassino");
    }
    printf("\n\n");


    system("pause");
    return 0;

}
