#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b;
    for(int i=0;i<1;){
            printf("Digite o 1� valor: ");
            scanf("%d",&a);
        if(a < -2147483648 || a > 2147483647){
            printf("N�mero inv�lido!\n");
        }else break;
    }
    for(int i=0;i<1;){
            printf("Digite o 2� valor: ");
            scanf("%d",&b);
    if(b == 0 || b > 2147483647){
            printf("N�mero inv�lido!\n");
        }else break;
    }
        printf("%d",a/b);


    return 0;
}
