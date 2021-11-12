#include <stdio.h>

int main() {
	int sexo=0,countfeminino=0,countmasculino=0,qtdPessoas;
	float salario=0,mediaSalarioPop,mediaSalarioMulheres,percentualMulheres,countSalario,countSalarioMulheres,maiorSalario;

printf("Digite a quantidade de pessoas: ");
scanf("%d",&qtdPessoas);
for(int i=0;i<qtdPessoas;i++){
	printf("Sexo: ");
	scanf("%d",&sexo);
	printf("Salario: ");
	scanf("%f",&salario);

	if(i ==0){
		maiorSalario = salario;
	}else if(salario > maiorSalario){
		maiorSalario = salario;
	}

	countSalario += salario;
	mediaSalarioPop = countSalario/qtdPessoas;
if(sexo == 0){
		countmasculino++;
}else if(sexo == 1){
countSalarioMulheres +=salario;
		countfeminino++;
}

mediaSalarioMulheres = countSalarioMulheres / countfeminino;
percentualMulheres = (countfeminino * 100)/qtdPessoas;

}

printf("\n\nMédia salarial da população: R$ %.2f\n",mediaSalarioPop);
printf("Maior salário encontrado: R$ %.2f\n",maiorSalario);
printf("Média salarial entre mulheres: R$ %.2f\n",mediaSalarioMulheres);
printf("Percentual de melheres na população: %.0f %%",percentualMulheres);
	

  return 0;
}