
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

/*
    ----------------------------
    Entrada:
        3.0 4.0 5.2
    Saida:
        TRIANGULO: 7.800
        CIRCULO: 84.949
        TRAPEZIO: 18.200
        QUADRADO: 16.000
        RETANGULO: 12.000

    ----------------------------
    ----------------------------
    Entrada:    
        12.7 10.4 15.2
    Saida:	
        TRIANGULO: 96.520
        CIRCULO: 725.833
        TRAPEZIO: 175.560
        QUADRADO: 108.160
        RETANGULO: 132.080

    ----------------------------
*/