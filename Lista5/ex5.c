#include <stdio.h>

int main(){
	int quant;
float larg,compr;
printf("Entre com a quantidade de terrenos: ");
scanf("%d",&quant);

for(int i = 0; i < quant;i++){
	printf("Digite a largura e o comprimento respectivamente: ");
	scanf("%f%f",&larg,&compr);
	float area = larg * compr;
	printf("Área => %.2f\n\n",area);
}
        return 0;
}