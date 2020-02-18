
#include <stdio.h>

int main() {

    int n, x, y, sum = 0;
    scanf("%d", &n);

    while(n--) {

        scanf("%d %d", &x, &y);

        if(x > y) {
            int aux = y;
            y = x;
            x = aux;
        }

        x % 2 == 1? x+=2 : x++;
        for(int i = x; i < y; i+=2) {
            sum += i;
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
