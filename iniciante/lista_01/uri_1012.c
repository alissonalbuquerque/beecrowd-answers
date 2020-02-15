
#include <stdio.h>
#include <math.h>

double triangulo(double a, double c) {
    return (a * c) / 2.0;
}

double circulo(double c) {
    double pi = 3.14159;
    return pi * pow(c, 2);
}

double trapezio(double a, double b, double c) {
    return ((a + b) * c) / 2;
}

double quadrado(double b) {
    return pow(b, 2);
}

double retangulo(double a, double b) {
    return a * b;
}

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo(a, c), circulo(c), trapezio(a, b, c), quadrado(b), retangulo(a, b));

    return 0;
}
