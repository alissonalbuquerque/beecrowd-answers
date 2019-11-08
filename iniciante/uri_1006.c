
#include <stdio.h>

int main() {

    double const p1 = 2, p2 = 3, p3 = 5;
    double a, b, c, media;

    scanf("%lf %lf %lf", &a, &b, &c);

    media = (a * p1 + b * p2 + c * p3) / (p1 + p2+ p3);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}

/*
    ---------------------
    Entrada:
        5.0
        6.0
        7.0
    Saida:
        MEDIA = 6.3
    ---------------------
    ---------------------
    Entrada:    
        5.0
        10.0
        10.0
    Saida:
        MEDIA = 9.0
    ---------------------

    ---------------------
    Entrada:
        10.0
        10.0
        5.0
    Saida:
        MEDIA = 7.5
    ---------------------
*/