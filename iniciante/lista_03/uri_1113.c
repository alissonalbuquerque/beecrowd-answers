
#include <stdio.h>

int main() {

    int x, y;

    while(scanf("%d %d", &x, &y)) {

        if(x != y) {
            x < y? puts("Crescente") : puts("Decrescente");
        } else {
            break;
        }

    }

    return 0;
}
