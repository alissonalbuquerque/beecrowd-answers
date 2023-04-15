
#include <stdio.h>

int main() {

    int km;
    double lt;

    scanf("%d", &km);
    scanf("%lf", &lt);

    printf("%.3lf km/l\n", (km / lt));

    return 0;
}
