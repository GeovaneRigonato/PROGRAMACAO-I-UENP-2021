#include <stdio.h>

int main(){
int num1,num2;
printf("Digite os dois numeros: ");
scanf("%d%d",&num1,&num2);
int i = num1;
for(i = num1 ;i <= num2; i++){
	if(i % 5 == 2 || i % 5 == 3){
		printf("%d ",i);
	}
	}
        return 0;
}