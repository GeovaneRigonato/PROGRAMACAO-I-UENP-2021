
#include<stdio.h>
#include<locale.h>

void fibanacci(int n){
    int f1=0,f2=1,f3;
    if(n >= 0 && n <= 1){
        if(n==0){
            printf("0 | 1");
        }else printf("1");

        for(int i=1;i<=30;i++){
       f3 = f2 + f1;
       printf(" | %d",f3);
       f1 = f2;
       f2 = f3;
       }
    }else system("pause");
}
int main(){
setlocale(LC_ALL, "Portuguese");

    int n;
    printf(" Digite o 1� termo da sequ�ncia de Fibonacci: ");
    scanf("%d",&n);
    fibanacci(n);

return 0;
}
