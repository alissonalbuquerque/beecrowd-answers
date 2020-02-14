
#include <stdio.h>

int main() {

    int n;
    double x, y, z, media;
    scanf("%d", &n);

    while(n--) {

        scanf("%lf %lf %lf", &x, &y, &z);

        media = (x*2 + y*3 + z*5) / (2+3+5);

        printf("%.1lf\n", media);

    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        3
        6.5 4.3 6.2
        5.1 4.2 8.1
        8.0 9.0 10.0
    Saida:
        5.7
        6.3
        9.3
    ----------------------------
*/