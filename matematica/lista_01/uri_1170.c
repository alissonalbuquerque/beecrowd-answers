
#include <stdio.h>

int main() {

    int n, dias = 0; 
    double q;
    scanf("%d", &n);

    while(n--) {

        scanf("%lf", &q);

        while(q > 1) {
            q = q / 2;
            dias++;
        }

        printf("%d dias\n", dias);
        dias = 0;

    }

    return 0;
}
