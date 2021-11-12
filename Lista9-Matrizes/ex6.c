#include <stdio.h>
/*Fa ̧ca um programa que leia uma matriz de ordem 5 x 5, calcule e mostre a m ́edia dos
elementos da diagonal principal.*/

void leMatriz(int mat[5][5],int m, int n){
    printf("\n\nPor favor, preencha com os elementos!\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                printf(" Mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}
void mediaColuna(int mat[5][5],int m, int n){
    float vet[5]={0,0,0,0,0};
        for(int i=0;i<5;i++){
            vet[0] +=mat[i][0];
            vet[1] +=mat[i][1];
            vet[2] +=mat[i][2];
            vet[3] +=mat[i][3];
            vet[4] +=mat[i][4];
    }
    for (int i=0;i<5;i++){
        vet[i] /= 5;
    }
    for (int i=0;i<5;i++){
        printf("\nMédia dos elementos da coluna %d: %.2f",i,vet[i]);
    }
    }
int main (){
int mat[5][5];

leMatriz(mat,5,5);
mediaColuna(mat,5,5);


    return 0;
}
