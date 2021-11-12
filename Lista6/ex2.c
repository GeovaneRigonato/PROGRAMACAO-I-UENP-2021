#include <stdio.h>
int main(){
int n,count=0,somaN=0,quant=0;
double media=0;


for(int i=0;i<1000;i++){
	scanf("%d",&n);
if(n>0){
if(n % 2 == 1){
	count++;
}quant++;
somaN = somaN + n;
media = somaN / quant;
	}else{
		break;
	}
}	
printf("Ocorrência de números ímpares => %d\n",count);
printf("Média => %.2lf",media);
return 0;
}