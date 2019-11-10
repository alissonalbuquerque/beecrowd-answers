
#include <stdio.h>
#include <math.h>

int main() {

    double volume, k = (4/3.0), pi = 3.14159, r;

    scanf("%lf", &r);

    volume = k * pi * pow(r,3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

/*
    ----------------------------
    Entrada:
        3
    Saida:
        VOLUME = 113.097
    ----------------------------
    ----------------------------
    Entrada:    
        15
    Saida:	
        VOLUME = 14137.155
    ----------------------------

    ----------------------------
    Entrada:
        1523
    Saida:
        VOLUME = 14797486501.627
    ----------------------------
*/