#include <stdio.h>
/*Fa ̧ca um programa que leia uma matriz quadrada com valores inteiros com o tamanho
(MAX) dado pelo usu ́ario, sendo 2 ≤ MAX ≤ 100. O programa deve ler uma constante k e
multiplicar os elementos da diagonal secund ́aria da matriz com essa constante. Ao final, o
programa deve exibir a matriz resultante. Para isso, crie as seguintes fun ̧c ̃oes:
a. Fun ̧c ̃ao para preencher a matriz quadrada.
b. Fun ̧c ̃ao para multiplicar a constante k com os elementos da diagonal secund ́aria da
matriz.
c. Fun ̧c ̃ao para mostrar a matriz resultante.*/

#define MAX 100
#define k 3

void leMatriz(int mat[MAX][MAX],int m, int n){
    printf("\n\nPor favor, preencha com os elementos!\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                printf(" Mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void multiplicaMatriz(int mat[MAX][MAX],int m, int n){
    int multiplicacao=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if((i+j) == m-1){
            mat[i][j] = (mat[i][j] * k);
        }
        }
    }
}

void imprimeMatriz(int mat[MAX][MAX],int m, int n){
    printf("\t\t\t\t\t\t\t");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",mat[i][j]);
            if(j!= n-1){
            printf(" | ");
        }
        }
        printf("\n\t\t\t\t\t\t\t");
    }
}


int main (){
 int m, n;
    int mat[MAX][MAX];

    printf("\n\t\t\tO valor de linhas e colunas devem ser 2 <= linhas e colunas <= 100 !\n\n");

    printf("Digite um valor para indicar o numero de linhas e colunas: ");
    scanf("%d",&m);
        if(m < 2 | m > 100){
            printf("\n\n\nO numero indicado não está correto. Por favor, reinicie o programa !\n\n\n\n");
            exit(0);
        }
        n = m;
    leMatriz(mat,m,n);
    printf("\n\n\t\t\t\t\tMatriz antes da multiplicacao pela constante 'k'!\n\n");
    imprimeMatriz(mat,m,n);
    printf("\n\n\t\t\t\t\tMatriz depois da multiplicacao pela constante 'k'!\n\n");
    multiplicaMatriz(mat,m,n);
    imprimeMatriz(mat,m,n);

    return 0;
}
