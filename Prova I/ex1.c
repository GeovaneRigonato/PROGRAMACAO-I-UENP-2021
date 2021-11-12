#include <stdio.h>

int main() {
	int qtdAlunos,matricula,maiorNota,menorNota;
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,nota,somaNota,CR,maiorCR=0,mediaAritmetica;
printf("Quantidade de Alunos: ");
scanf("%d",&qtdAlunos);

	for(int i=0;i<qtdAlunos;i++){
		printf("Matricula: ");
		scanf("%d",&matricula);
		if (matricula <1 || matricula >1000){
			break;
		}
		int i=1;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n1 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n2 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n3 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n4 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n5 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n6 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n7 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n8 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n9 = nota;
		i++;
		printf("Nota obtida na %dº disciplina: ",i);
		scanf("%f",&nota);
		if(nota > maiorNota){
			maiorNota = nota;
		}else if(nota < menorNota){
			menorNota = nota;
		}
		n10 = nota;


float somaTodasNotas = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
CR = somaTodasNotas / 10;

if(i==1){
	maiorCR = CR;
}else if(CR > maiorCR){
	maiorCR = CR;
}
mediaAritmetica = ((somaTodasNotas-menorNota)-maiorNota)/8;
	printf("\nMatricula do Aluno: %d\n",matricula);
	printf("Notas obtidas: %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f | %.2f\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);
	printf("Coeficiente de Rendimento (CR): %.2f\n",CR);
printf("Media atitmetica das notas obtidas, ecluindo se a menor e a maior nota: %.2f\n",mediaAritmetica);

	}
		printf("O melhor CR dos alunos do curso: %.2f\n",maiorCR);

  return 0;
}