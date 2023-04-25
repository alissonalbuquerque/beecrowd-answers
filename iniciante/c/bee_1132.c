
#include <stdio.h>

int main() {

    int x, y, soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y) {
        int temp = y;
        y = x;
        x = temp;
    }

    for(int i = x; i <= y; i++) {
        if(i % 13 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
