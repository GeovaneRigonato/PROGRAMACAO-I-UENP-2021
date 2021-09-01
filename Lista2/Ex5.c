/*Nos parques de divers ̃ao, alguns brinquedos tem idade e altura m ́ınimas para poder andar
neles. Suponha que um determinado parque possui 3 brinquedos com as seguintes limita ̧c ̃oes:
• Barca Viking: 1,5m de altura e 12 anos
• Elevator of Death: 1,4m de altura e 14 anos
• Final Killer: 1,7m de altura ou 16 anos
Dada a altura (em cm) e a idade de uma pessoa, fa ̧ca um programa que identifique quantos
brinquedos ela pode andar.*/

#include <stdio.h>
int main(){
float altura; // declara a variavel
int idade; // declara a variavel
int cont = 0; // declara a variavel

        scanf("%f%d", &altura, &idade); //recebe os valores e atribui as devidas variaveis

    if(altura >= 150 && idade >= 12){ // verifica se a pessoa pode ir na Barca Viking
    cont++; // se satisfeito, incrementa 1 brinquedo que a pessoa pode ir
    }
        if(altura >=140 && idade >= 14){ // verifica se a pessoa pode ir no Elevator of Death
        cont +=1;// se satisfeito, incrementa 1 brinquedo que a pessoa pode ir
        }
            if(altura >= 170 && idade >=16){ // verifica se a pessoa pode ir no Final Killer
            cont +=1;// se satisfeito, incrementa 1 brinquedo que a pessoa pode ir
            }

        printf("A pessoa pode ir em %d brinquedo(s)", cont); // Imprime quantos brinquedos a pessoa pode ir
return 0;
}
