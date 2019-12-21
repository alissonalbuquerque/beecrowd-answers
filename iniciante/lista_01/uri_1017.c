
#include <stdio.h>

int main() {

    const double km_l = 12.0;
    int dist, tempo_h, km_h;
    double litros_gastos;

    scanf("%d", &tempo_h);
    scanf("%d", &km_h);

    dist = km_h * tempo_h;
    litros_gastos = dist / km_l;

    printf("%.3lf\n", litros_gastos);

    return 0;
}

/*
    ----------------------------
    Entrada:
        10
        85
    Saida:
        70.833
    ----------------------------
    ----------------------------
    Entrada:    
        2
        92
    Saida:	
        15.333
    ----------------------------
    ----------------------------
    Entrada:
        22
        67
    Saida:	
        122.833
    ----------------------------
*/