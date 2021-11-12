
#include<stdio.h>
#include<locale.h>

void multiploDeCinco(int x,int y){
    printf("Digite os valores inicial e final: ");
scanf("%d%d",&x,&y);

for(int i=x;i<=y;i++){
    if(i%5 == 0){
        printf("%d",i);
        if(i != y){
            printf(" | ");
        }
    }

}
printf("\n\n");
}
int main(){
setlocale(LC_ALL, "Portuguese");
int x,y;
multiploDeCinco(x,y);

system("pause");
return 0;
}
