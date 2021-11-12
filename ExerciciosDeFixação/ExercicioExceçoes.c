#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b;
    for(int i=0;i<1;){
            printf("Digite o 1º valor: ");
            scanf("%d",&a);
        if(a < -2147483648 || a > 2147483647){
            printf("Número inválido!\n");
        }else break;
    }
    for(int i=0;i<1;){
            printf("Digite o 2º valor: ");
            scanf("%d",&b);
    if(b == 0 || b > 2147483647){
            printf("Número inválido!\n");
        }else break;
    }
        printf("%d",a/b);


    return 0;
}
