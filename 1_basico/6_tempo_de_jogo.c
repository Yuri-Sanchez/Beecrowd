#include <stdio.h>
#include <locale.h>

int minutos_totais_inicio(int hora_inicio,int minuto_inicio){
    return hora_inicio * 60 + minuto_inicio;
}

int minutos_totais_final(int hora_fim,int minuto_fim){
    return hora_fim * 60 + minuto_fim;
}

int calculo_hora(int hora){
    return hora / 60;
}

int calculo_minuto(int minuto){
    return minuto % 60;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int hora_minuto_inicio, hora_minuto_final, duracao;
    int hora, minuto;

    printf("Hora inicial: \n");
    scanf("%d", &hora_inicial );
    printf("Minuto inicial: \n");
    scanf("%d", &minuto_inicial);
    printf("Hora final: \n");
    scanf("%d", &hora_final);
    printf("Minuto final: \n");
    scanf("%d", &minuto_final);

    hora_minuto_inicio = minutos_totais_inicio(hora_inicial, minuto_inicial);
    hora_minuto_final = minutos_totais_final(hora_final, minuto_final);

    if(hora_minuto_final > hora_minuto_inicio){
        duracao = hora_minuto_final - hora_minuto_inicio;
    }else{
        duracao = (24 * 60 - hora_minuto_inicio) + hora_minuto_final;
    }

    hora = calculo_hora(duracao);
    minuto = calculo_minuto(duracao);

    printf("O jogo durou %d hora(s) e %d minuto(s)\n", hora, minuto);

    return 0;
}