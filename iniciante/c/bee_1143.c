
#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));

    }

    return 0;
}
