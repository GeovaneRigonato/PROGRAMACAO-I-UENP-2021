#include <stdio.h>
/*Implemente uma fun ̧c ̃ao menorElemento(...) que receba como parˆametro uma matriz de
ordem 3 X 4 e mostre qual  ́e o menor elemento da matriz. Os elementos da matriz podem
ser lidos via entrada padr ̃ao ou j ́a inicializados no momento da declara ̧c ̃ao da matriz.*/

void menorElemento(int matriz[3][4], int m, int n){
    int menor;
    menor = matriz[0][0];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j]< menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("O menor elemento eh: %d\n\n", menor);
}

int main (){
    int matriz[3][4] = {10,15,12,14,16,18,19,20,27,29,7,8};
    menorElemento(matriz,3,4);


    return 0;
}
