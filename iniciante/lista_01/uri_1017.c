
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
