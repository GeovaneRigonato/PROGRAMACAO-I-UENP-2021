#include <stdio.h>

int main() {
int qtdAlunos,idade,countAltura=0,countPeso=0,countSobrepeso=0,countObesos=0;
float altura,peso,mediaAltura,IMC,percentualSobrepeso,percentual_alunos_menos_21_anos_obesos;
//IMC = peso/altura^2;
printf("Quantidade de alunos: ");
scanf("%d",&qtdAlunos);

for(int i=0;i<qtdAlunos;i++){
	printf("Idade: ");
	scanf("%d",&idade);
	printf("Altura: ");
	scanf("%f",&altura);
	countAltura+=altura;
	printf("Peso: ");
	scanf("%f",&peso);
	countPeso+= peso;

	IMC = peso/(altura*altura);
	if(IMC >=25 && IMC <= 29.9){
		countSobrepeso++;
		break;
	}else if(idade < 21 && IMC >=30){
		countObesos++;
	}
}
mediaAltura = countAltura / qtdAlunos;
percentualSobrepeso = (countSobrepeso * 100) / qtdAlunos;
percentual_alunos_menos_21_anos_obesos = (countObesos * 100) / qtdAlunos;

printf("Média de altura dos alunos: %.2f\n",mediaAltura);
printf("IMC dos alunos: %.2f\n", IMC);
printf("Percentual de alunos com sobrepeso: %.0f %%\n",percentualSobrepeso);
printf("Percentual de alunos menores de 21 anos caracterizados como obesos: %.0f %%\n",percentual_alunos_menos_21_anos_obesos);
  return 0;
}