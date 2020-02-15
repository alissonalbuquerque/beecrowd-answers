
#include <stdio.h>
#include <math.h>

#define DELTA(A, B, C) ((B * B) - 4 * (A) * (C))
#define X1(A, B, DELTA) ((-B + sqrt(DELTA)) / (2 * A))
#define X2(A, B, DELTA) ((-B - sqrt(DELTA)) / (2 * A))

int main() {

    double a, b, c;
    double delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = DELTA(a, b, c);

    if(a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        x1 = X1(a, b, delta);
        x2 = X2(a, b, delta);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
}
