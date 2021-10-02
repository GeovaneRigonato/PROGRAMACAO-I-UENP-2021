#include <stdio.h>

int main(){
int quant,dia;
float km,total;
printf("Digite a quantidade de clientes: ");
scanf("%d",&quant);
for(int i =0;i<quant;i++){
	printf("Digite a quilometragem e os dias: ");
	scanf("%f%d",&km,&dia);

		if(km <=100 && dia <2){
			total = 90;
		}else if(km<=100 && dia>1){
			total = (dia *90) + (km * 12);
		}else 
		total = (dia *90) + ((km-100) * 12);
		printf(" Total a pagar => R$ %.2f\n",total);
}
        return 0;
}