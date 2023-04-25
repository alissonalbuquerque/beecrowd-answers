
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
