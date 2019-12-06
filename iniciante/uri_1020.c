
#include <stdio.h>

int main() {

    int n;
    int ano = 0, mes = 0, dia = 0;

    scanf("%d", &n);

    while(n > 0) {

        if(n >= 365) {
            ano = n / 365;
            n %= 365;
        } else if(n >= 30) {
            mes = n / 30;
            n %= 30;
        } else {
            dia = n;
            n = 0;
        }
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);   

    return 0;
}

/*
    ----------------------------
    Entrada:
        400
    Saida:
        1 ano(s)
        1 mes(es)
        5 dia(s)
    ----------------------------
    ----------------------------
    Entrada:    
        800
    Saida:
        2 ano(s)
        2 mes(es)
        10 dia(s)
    ----------------------------
    ----------------------------
    Entrada:
        30
    Saida:	
        0 ano(s)
        1 mes(es)
        0 dia(s)
    ----------------------------
*/