#include <stdio.h>
/*Fa ̧ca um programa que leia uma matriz de ordem M x N, em que M x N s ̃ao dados pelo
usu ́ario, sendo 2 ≤ M ≤ 15 e 3 ≤ N ≤ 20. Em seguida, o programa deve calcular e
mostrar a soma dos n ́umeros pares e a soma dos n ́umeros  ́ımpares presentes na matriz.*/
#define MAX 15
void leMatriz(int mat[MAX][MAX],int m, int n){
    printf("\n\nPor favor, preencha com os elementos!\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                printf("Mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void somaMatriz(int mat[MAX][MAX], int m, int n){
    int somaImpar=0,somaPar=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] % 2 == 0){
                somaPar += mat[i][j];
            }else somaImpar += mat[i][j];
        }
    }

    printf("\n\n\t\t\t\t\tSoma dos elementos pares: %d",somaPar);
    printf("\n\t\t\t\t\tSoma dos elementos impares: %d\n\n",somaImpar);

}

int main (){

    int m, n;
    int mat[MAX][MAX];

    printf("\n\t\t\t\t\tO valor de linhas deve ser 2 <= m e <= 15 !\n");
    printf("\t\t\t\t\tO valor de colunas deve ser 3 <= n e <= 20 !\n\n");

    printf("Digite um valor para indicar o numero de linhas: ");
    scanf("%d",&m);
        if(m < 2 | m > 15){
            printf("\n\n\nO numero indicado não está correto. Por favor, reinicie o programa !\n\n\n\n");
            exit(0);
        }
    printf("Digite um valor para indicar o numero de colunas: ");
    scanf("%d",&n);
        if(n < 3 | n > 20){
                printf("\n\n\nO numero indicado não está correto. Por favor, reinicie o programa !\n\n\n\n");
                exit(0);
        }

    leMatriz(mat,m,n);
    somaMatriz(mat,m,n);
    return 0;
}
