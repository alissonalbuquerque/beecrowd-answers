
#include <stdio.h>

int main() {

    int x, y, t = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y) {
        t = y;
        y = x;
        x = t;
    }

    for(int i = x++; x < y; x++) {

        if((x % 5 == -2 || x % 5 == 2) || (x % 5 == -3 || x % 5 == 3)) {
            printf("%d\n", x);
        }

    }

    return 0;
}
