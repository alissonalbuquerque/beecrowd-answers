
#include <stdio.h>

int main() {

    double a, b, media;
    double p1 = 3.5, p2 = 7.5;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = (a * p1 + b * p2) / (p1 + p2);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
