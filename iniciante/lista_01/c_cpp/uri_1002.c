
#include <stdio.h>
#include <math.h>

int main() {

    const double pi = 3.14159;
    double area, raio;

    scanf("%lf", &raio);

    printf("A=%.4f\n", area = pi * pow(raio, 2));

    return 0;
}
