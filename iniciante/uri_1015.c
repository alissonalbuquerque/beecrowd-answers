
#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
} p1, p2;

int main() {

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    double distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("%.4lf\n", distancia);

    return 0;
}

/*
    ----------------------------
    Entrada:
        1.0 7.0
        5.0 9.0
    Saida:
        4.4721
    ----------------------------
    ----------------------------
    Entrada:    
        -2.5 0.4
        12.1 7.3
    Saida:	
        16.1484
    ----------------------------
    ----------------------------
    Entrada:
        2.5 -0.4
        -12.2 7.0
    Saida:
        16.4575
    ----------------------------
*/