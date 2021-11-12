#include <stdio.h>

int main() {
int totalAlunos,alunosAprovados,idade,sexo,numeroParticipacoes,countIdade = 0,countmasculino=0,countfeminino=0,countparticipacao =0;
float percentualAprovados,mediaIdadeAprovados,percentualMulheresAprovadas,percentualAlunos2_ouMaisparticipacoes;
printf("Total de vestibulandos: ");
scanf("%d",&totalAlunos);
printf("Vestibulandos aprovados: ");
scanf("%d",&alunosAprovados);

for(int i=0;i<alunosAprovados;i++){
printf("Idade: ");
scanf("%d",&idade);
countIdade +=idade;
if(idade == -1){
	break;
}
printf("Sexo: ");
scanf("%d",&sexo);
printf("Numero de participações: ");
scanf("%d",&numeroParticipacoes);
if(sexo == 0){
		countmasculino++;
}else if(sexo == 1){
		countfeminino++;
}
if(numeroParticipacoes >= 2){
	countparticipacao++;
}
}

percentualAprovados = (alunosAprovados*100)/totalAlunos;
mediaIdadeAprovados = countIdade / alunosAprovados;
percentualMulheresAprovadas = (countfeminino*100)/ alunosAprovados;
percentualAlunos2_ouMaisparticipacoes = (countparticipacao * 100)/totalAlunos;

printf("Percentual de alunos aprovados no vestibular: %.0f %%\n",percentualAprovados);
printf("Média de idade dos alunos aprovados no vestibular: %.2f\n",mediaIdadeAprovados);
printf("Percentual de mulheres aprovadas no vestibular: %.0f %%\n",percentualMulheresAprovadas);
printf("Percentual de aluns com 2 ou mais participações em vestibular no ano: %.0f %%\n",percentualAlunos2_ouMaisparticipacoes);
  return 0;
}