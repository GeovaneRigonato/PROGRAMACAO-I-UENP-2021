/*Faça um algoritmo que leia vários números inteiros e positivos e calcule o produtório dos números
pares. O fim da leitura será indicado pelo número 0.*/

#include <stdio.h>
int main(){
  int n, soma = 0; // declara as variaveis a serem uilizadas
  do{
        printf(" Digite um inteiro positivo: "); // imprime as instruções para o usuário
        scanf("%d", &n); // recebe um valor e atribui a n
    if (n > -1){ // verifica se n é maior que -1
      if (n % 2 == 0){ // verifica se n / 2 tem resto 0, caso seja verdadeiro, n é par e a variavel soma recebe o que tem nela mais o valor de n
        soma += n; // soma recebe o que tem nela + o valor da variavel n
      }
    }else{// se n for manor que 0, o programa gera um erro e encerra o programa
      printf("\n ...Erro, o número digitado não é positivo, por favor reinicie o programa...\n"); // imprime o erro
      exit(0); // função para encerrar o programa
    }
  } while (n != 0); // o programa só fará tudo isso enquanto n for diferente de 0, caso contrário ele parará de receber do teclado
  printf("\n A soma dos números é: %d\n", soma); // imprime a soma dos números pares
  return 0;
}
