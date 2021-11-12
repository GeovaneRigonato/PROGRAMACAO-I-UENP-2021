#include <stdio.h>

int main(){
int num = 1,den;
float soma;

for(den = 1;den <=105; den++){
		soma = soma + (num/den);
		num = num*2;
	}

printf("Soma => %.2f",soma);
        return 0;
}