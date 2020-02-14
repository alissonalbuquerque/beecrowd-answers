
#include <stdio.h>

#define PERCENTUAL(TIPO_COBAIA, TOTAL_COBAIAS) ( (float) (TIPO_COBAIA) ) / ( (float) (TOTAL_COBAIAS) ) * (100.0)

int main() {

    int n;
    char c;
    int aux, total;
    int cobaia[3] = {0, 0, 0};
    double percentual_cobaia[3] = {0, 0, 0};

    scanf("%d", &n);

    while(n--) {

        scanf("%d %c", &aux, &c);

        switch(c) {
            case 'C':
                cobaia[0] += aux;
                break;
            case 'R':
                cobaia[1] += aux;
                break;
            case 'S':
                cobaia[2] += aux;
                break;
            default:
                break;
        }
    }

    total = cobaia[0] + cobaia[1] + cobaia[2];
    percentual_cobaia[0] = PERCENTUAL(cobaia[0], total);
    percentual_cobaia[1] = PERCENTUAL(cobaia[1], total);
    percentual_cobaia[2] = PERCENTUAL(cobaia[2], total);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", cobaia[0], cobaia[1], cobaia[2]);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percentual_cobaia[0], percentual_cobaia[1], percentual_cobaia[2]);

    return 0;
}

/*
    ----------------------------
    Entrada:
        10
        10 C
        6 R
        15 S
        5 C
        14 R
        9 C
        6 R
        8 S
        5 C
        14 R
    Saida:
        Total: 92 cobaia
        Total de coelhos: 29
        Total de ratos: 40
        Total de sapos: 23
        Percentual de coelhos: 31.52 %
        Percentual de ratos: 43.48 %
        Percentual de sapos: 25.00 %
    ----------------------------
*/