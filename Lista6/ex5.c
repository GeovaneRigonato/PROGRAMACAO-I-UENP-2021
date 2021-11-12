#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int x,y;
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

system("pause");
return 0;
}
