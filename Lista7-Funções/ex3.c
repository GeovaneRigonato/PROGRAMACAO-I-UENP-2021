#include<stdio.h>
#include<locale.h>
void verificaPrimo(int num){
    int n = num;
    int count = 0;
    while(n>1){
        if(num%n == 0)
            count ++;
            n--;
    }
    if(count > 1){
        printf("O n�mero %d n�o � primo.", num);
    } else printf("O n�mero %d � primo.", num);
}
int main(){
setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    verificaPrimo(num);



    return 0;

}
