
#include <stdio.h>

int main() {

    int km;
    double lt;

    scanf("%d", &km);
    scanf("%lf", &lt);

    printf("%.3lf km/l\n", (km / lt));

    return 0;
}

/*
    ----------------------------
    Entrada:
        500
        35.0
    Saida:
        14.286 km/l

    ----------------------------
    ----------------------------
    Entrada:    
        2254
        124.4
    Saida:	
        18.119 km/l
    ----------------------------
    ----------------------------
    Entrada:
        4554
        464.6
    Saida:	
        9.802 km/l
    ----------------------------
*/