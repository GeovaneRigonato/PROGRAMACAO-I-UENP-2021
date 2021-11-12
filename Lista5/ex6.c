#include <stdio.h>

int main(){
	int quant;
float litros,comb;
printf("Entre com a quantidade de postos(máx 30): ");
scanf("%d",&quant);
if(quant <=30){
for(int i = 0; i < quant;i++){
	printf("Digite quantos litros esse posto gasta: ");
	scanf("%f",&litros);
	if(litros <= 50000){
		comb = 3.26;	
		
	}else 	comb = 3.51;
	printf(" O valor do combustível será: %.2f\n\n ",comb);
}}
        return 0;
}