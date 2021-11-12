#include <stdio.h>
int main(){
	int x,y;
	printf("Digite o valor de x e y respectivamente: ");
	scanf("%d%d",&x,&y);

	if(x % y == 1){
		int soma = x + y + 1;
		printf("%d",soma);
	}else if(x % y == 2){
		if (x % 2 == 0 && y % 2 == 0){
			printf("X e Y são pares");
		}else if(x % 2 == 1 && y % 2 == 1){
			printf("X e Y são ímpares");
		}else if(x % 2 == 0 && y % 2 == 1){
			printf("X é par e Y é ímpar");
		}else if(x % 2 == 1 && y % 2 == 0){
			printf("X é ímpar e Y é par");
		}
	}else if(x % y == 3){
		float mult = (x+y) * x;
		printf("Multiplicação => %.2f",mult);
	}else if(x % y == 4){
		if(x != 0){
		float div = (x+y)/x;
		printf("Divisão => %.2f",div);
		}
	}else {
		float quadX = x*x;
		float quadY = y*y;
		printf("quadrado de X => %.2f",quadX);
		printf("quadrado de Y => %.2f",quadY);
	}return 0;
}