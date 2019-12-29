
#include <stdio.h>
#include <math.h>

int main() {

    int n, exp = 2;

    scanf("%d", &n);

    if(n % 2 == 1) {
        n = n - 1;
    }

    for(int i = 2; i <= n; i+=2) {
        printf("%d^%d = %.0lf\n", i, exp, pow(i, exp));
    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        6
    Saida:
        2^2 = 4
        4^2 = 16
        6^2 = 36
    ----------------------------
*/