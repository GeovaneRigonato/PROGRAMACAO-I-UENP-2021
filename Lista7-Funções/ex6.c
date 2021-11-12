#include<stdio.h>
void calculaArea(int n){
float comp,larg,area;

for(int i=0;i<n;i++){
    printf("Digite a largura do terreno: ");
    scanf("%f",&larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%f",&comp);

    area = larg*comp;
    printf("Area: %.2f mts\n",area);
}
}
int main(){
int n;

printf("Digite a quantidade de terrenos: ");
scanf("%d",&n);
calculaArea(n);


    return 0;

}
