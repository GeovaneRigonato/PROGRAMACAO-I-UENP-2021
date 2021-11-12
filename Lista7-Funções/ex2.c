#include <stdio.h>
#include <math.h>
void calculaRaizes(int a, int b, int c){
		int delta = (b*b)- (4 * a * c);
	if(delta <= 0){
		printf("Não existem raízes reais");
	}else if(a == 0){
		printf("Não é uma equação do segundo grau");
	}else{
	float X1 = ((b * -1) + sqrt(delta))/2*a;
	float X2 = ((b * -1) - sqrt(delta))/2*a;
	printf(" Raízes:\n X1=> %.2f \n X2=> %.2f",X1,X2);
	}
}
int main() {
	int a,b,c;
	printf("Digite o valor de a, b e c: ");
	scanf("%d%d%d",&a,&b,&c);
	calculaRaizes(a,b,c);

  return 0;
}