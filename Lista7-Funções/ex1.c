#include <stdio.h>

void calculaBrinquedos(int altura, int idade){
int count=0;
	if(altura >=170 && idade >=16){
		count = 3;
	}else if(altura >= 150){
		if(idade >= 12 && idade < 14){
			count = 1;
		}else if(idade >= 14){
			count = 2;
		}else if(altura >= 140 && idade >= 14){
		count = 1;
	}
	}
	printf("\nO indivíduo pode ir em %d brinquedo(s)\n",count);
}

int main() {
	int altura,idade;
	printf("Digite a altura e a idade do indivíduo: ");
	scanf("%d%d",&altura,&idade);
	calculaBrinquedos(altura,idade);
  return 0;
}