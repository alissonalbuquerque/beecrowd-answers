
#include <stdio.h>

int main() {

    int hh_inicial, mm_inicial, hh_final, mm_final;
    int tempo_inicial, tempo_final;
    int tempo_duracao, hh_duracao, mm_duracao;
    const short hora = 60, dia = 24;

    scanf("%d %d %d %d", &hh_inicial, &mm_inicial, &hh_final, &mm_final);

    tempo_inicial = hh_inicial * hora + mm_inicial;
    tempo_final = hh_final * hora + mm_final;

    if( tempo_inicial > tempo_final ) {
        tempo_duracao = tempo_final - tempo_inicial + dia * hora;
    } else if ( tempo_inicial < tempo_final ) {
        tempo_duracao = tempo_final - tempo_inicial;
    } else {
        tempo_duracao = dia * hora;
    }

    if(tempo_duracao >= 60) {
        hh_duracao = tempo_duracao / hora;
        mm_duracao = tempo_duracao - hh_duracao * hora;
    } else {
        hh_duracao = 0;
        mm_duracao = tempo_duracao;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hh_duracao, mm_duracao);

    return 0;
}

/*
    ----------------------------
    Entrada:
        7 8 9 10
    Saida:
        O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
    ----------------------------
    ----------------------------
    Entrada:
        7 7 7 7
    Saida:
        O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
    ----------------------------
    ----------------------------
    Entrada:
        7 10 8 9
    Saida:
        O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
    ----------------------------
*/