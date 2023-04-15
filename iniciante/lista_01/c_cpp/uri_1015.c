
#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
} p1, p2;

int main() {

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    double distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
