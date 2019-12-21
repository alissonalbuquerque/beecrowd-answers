
#include <stdio.h>
#include <stdlib.h>

#define PERIMETRO(A, B, C) (A + B + C)
#define AREA(A, B, C) (((A + B) / 2) * C)
#define CONDICAO(A, B, C) ( (A < B + C && A > abs(B - C)) && (B < A + C && B > abs(A - C)) && (C < A + B && C > abs(A - B)) )
#define TRUE 1

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    CONDICAO(a, b, c) == TRUE? printf("Perimetro = %.1lf\n", PERIMETRO(a, b, c)) : printf("Area = %.1lf\n", AREA(a, b, c));

    return 0;
}

/*
    ----------------------------
    Entrada:
        6.0 4.0 2.0
    Saida:
        Area = 10.0
    ----------------------------
    ----------------------------
    Entrada:    
        6.0 4.0 2.1
    Saida:
        Perimetro = 12.1
    ----------------------------
*/