
#include <stdio.h>

int main() {

    int dia_inicial, hora_inicial, minuto_inicial, segundo_inicial;
    int dia_final, hora_final, minuto_final, segundo_final;
    int dia, hora, minuto, segundo;

    scanf("%*s %d", &dia_inicial);
    scanf("%d : %d : %d", &hora_inicial, &minuto_inicial, &segundo_inicial);

    scanf("%*s %d", &dia_final);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    dia = dia_final - dia_inicial;
    hora = hora_final - hora_inicial;
    minuto = minuto_final - minuto_inicial;
    segundo = segundo_final - segundo_inicial;

    if(hora < 0) {
        hora += 24;
        dia -= 1;
    }

    if(minuto < 0) {
        minuto += 60;
        hora -= 1;
    }

    if(segundo < 0) {
        segundo += 60;
        minuto -= 1;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);

    return 0;
}
