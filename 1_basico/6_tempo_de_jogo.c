#include<stdio.h>

int main(){
    int horaInicial,minutoInicial,horaFinal,minutoFinal, duracao,inicioMinutos,fimMinutos,duracaoMinutos,duracaoHoras,minutosDuracao;

    printf("Digite a hora inicial: \n");
    scanf("%d",&horaInicial);
    printf("Digite o minuto inicial: \n");
    scanf("%d",&minutoInicial);
    printf("Digite a hora final: \n");
    scanf("%d",&horaFinal);
    printf("Digite o minuto final: \n");
    scanf("%d",&minutoFinal);

    inicioMinutos=horaInicial*60+minutoInicial;

    fimMinutos=horaFinal*60+minutoFinal;

    if(fimMinutos>inicioMinutos){
        duracaoMinutos=fimMinutos-inicioMinutos;
    }else{
        duracaoMinutos=(24*60-inicioMinutos)+fimMinutos;
    }

    duracaoHoras=duracaoMinutos/60;

    minutosDuracao=duracaoMinutos%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoHoras,minutosDuracao);
    return 0;
}