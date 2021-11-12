#include <stdio.h>
/*Faça um programa que leia uma matriz de ordem 3 x 5. Em seguida, o programa deve
calcular a soma dos elementos de cada coluna da matriz, armazenando os resultados em
um vetor. Por fim, o programa deve imprimir o vetor resultante.*/
void leMatriz(int mat[3][5],int m, int n){
    printf("\n\nPor favor, preencha com os elementos!\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                printf(" Mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}
void somaColuna(int mat[3][5],int m, int n){
    int vet[5]={0,0,0,0,0};
        for(int i=0;i<3;i++){
            vet[0] +=mat[i][0];
            vet[1] +=mat[i][1];
            vet[2] +=mat[i][2];
            vet[3] +=mat[i][3];
            vet[4] +=mat[i][4];
    }
    for (int i=0;i<5;i++){
        printf("\nSoma da Coluna %d: %d",i,vet[i]);
    }

}

int main (){

    int mat[3][5];

    leMatriz(mat,3,5);
    somaColuna(mat,3,5);

    return 0;
}
