#include<stdio.h>
void calculaPagamento(int n){
    int dias;
    float km,totalPagar;

        for (int i=0;i<n;i++){
        printf("Digite os dias: ");
        scanf("%d",&dias);
        printf("Digite os quilometros: ");
        scanf("%f",&km);

        if(dias <=1 && km <= 100){
            totalPagar = 90;
        }else if(dias >=1 && km>100){
            if(((km-(100*dias)) * 12) >0){
                totalPagar = (90 * dias) + ((km-(100*dias)) * 12);
            }else totalPagar = 90*dias;
        }

        printf("Total a pagar: R$ %.2f\n",totalPagar);
    }
}
int main(){
    int n;
    printf("Digite a quantidade de clientes: ");
    scanf("%d",&n);
calculaPagamento(n);

    return 0;

}
