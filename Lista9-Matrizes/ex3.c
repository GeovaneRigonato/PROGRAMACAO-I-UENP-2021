#include <stdio.h>
/*Fa ̧ca um programa que leia uma matriz de inteiros de ordem 5 x 3. Em seguida, o programa
deve verificar quais os elementos da matriz que s ̃ao m ́ultiplos de 3 e armazenar esses
elementos em um vetor. Por fim, o programa deve exibir o vetor resultante com os elementos
m ́ultiplos de 3 presentes na matriz.*/
#define MAX 15

void leMatriz(int mat[5][3],int m, int n){
    printf("\n\nPor favor, preencha com os elementos!\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                printf("Mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void verificaMultiplo(int mat[5][3],int vet[MAX],int m, int n){
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(mat[i][j] % 3 == 0){
                vet[k] = mat[i][j];
                k++;
            }
        }
    }
    printf("\n\n");
    for(int i=0;i<k;i++){
        printf("vet[%d] = %d\n",i,vet[i]);
    }
}

int main (){

int mat[5][3];
int vet[MAX];

leMatriz(mat,5,3);
verificaMultiplo(mat,vet,5,3);
    return 0;
}
