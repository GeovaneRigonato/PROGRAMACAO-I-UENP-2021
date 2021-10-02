#include <stdio.h>

int main()
{
    double soma = 0,i,j = -1;

		for(i=1;i<=50;i++){
			j = j+2;
			soma = soma + j/i;
		}
		 printf("\n Soma S => %.2lf\n",soma);
        return 0;
}