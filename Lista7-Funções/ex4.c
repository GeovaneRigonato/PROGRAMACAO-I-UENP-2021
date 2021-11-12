#include<stdio.h>
#include<locale.h>
void multiplica(int a, int b){
    int multiplicacao;
        for(int i=0;i<b;i++){
        multiplicacao +=a;
    }
    printf("%d",multiplicacao);
    }
int main(){
setlocale(LC_ALL, "Portuguese");
    int a,b;
    printf("Digite os dois números a serem multiplicados: ");
    scanf("%d%d",&a,&b);
    multiplica(a,b);

    return 0;

}
