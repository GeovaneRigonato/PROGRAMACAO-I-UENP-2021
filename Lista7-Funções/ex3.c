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
        printf("O número %d não é primo.", num);
    } else printf("O número %d é primo.", num);
}
int main(){
setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    verificaPrimo(num);



    return 0;

}
