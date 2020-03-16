
#include <stdio.h>

int main() {

    int x, y, n;
    scanf("%d", &n);

    double z;
    while(n--) {
        scanf("%d %d", &x, &y);
        z = (double) x / (double) y;
        y == 0? printf("divisao impossivel\n") : printf("%.1lf\n", z);
    }

    return 0;
}
