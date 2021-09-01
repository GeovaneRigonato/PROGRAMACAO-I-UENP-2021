/*O departamento e trˆansito instalou um radar no caminho de sua casa para a faculdade,
limitando a velocidade dos carros em uma determinada via. A velocidade pode ser alterada
diariamente. Por exemplo, nos feriados a velocidade m ́axima pode ser de 80km/h. J ́a
durante a semana, pode ser de no m ́aximo 60km/h. Para isso, as placas digitais informam
aos motoristas qual  ́e a velocidade m ́axima naquele momento. A tabela de penaliza ̧c ̃oes
para quem ultrapassar o limite  ́e:
• at ́e 20% superior ao permitido – multa de R$ 130,16 e 4 pontos na carteira
• maior que 20% e at ́e 50% acima do permitido – multa de R$ 195,23 e 5 pontos na
carteira
• acima de 50%: multa de R$ 880,41; 7 pontos na carteira, apreens ̃ao da carteira e
suspens ̃ao do direito de dirigir
Fa ̧ca um programa que recebe como entrada a velocidade m ́axima da via e a velocidade do
ve ́ıculo. Em seguida, calcule o valor da multa e o n ́umero de pontos na carteira, mostrando
o resultado na tela.*/

#include <stdio.h>

int main(){
int velVia,velVeiculo; // declara as variaveis
scanf("%d%d", &velVia, &velVeiculo); // recebe os valores e atribui as devidas variaveis

if(velVeiculo > velVia && velVeiculo <= velVia + velVia * 0.2){// > velocidade da via e  <= 20%
printf("Multa de R$ 130,16 e 4 pontos na carteira");
}else if(velVeiculo > velVia + (velVia * 0.2) && velVeiculo <= velVia + (velVia * 0.5)){ // > 20% e <= 50%
    printf("Multa de R$ 195,23 e 5 pontos na carteira");
}else if(velVeiculo > velVia + (velVia * 0.5)){
printf("Multa de R$ 880,41; 7 pontos na carteira e suspensão do direito de dirigir"); // >50%
}else // <= velocidade da via 20%
    return 0;
}
