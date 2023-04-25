
#include <stdio.h>
#include <math.h>

int main() {

    double volume, k = (4/3.0), pi = 3.14159, r;

    scanf("%lf", &r);

    volume = k * pi * pow(r,3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
