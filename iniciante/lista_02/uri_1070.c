
#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    x % 2 == 0? (x++) : (x+=2);

    for(int i = 0; i < 6; i++) {

        printf("%d\n", x);
        x = x + 2;

    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        8
    Saida:
        9
        11
        13
        15
        17
        19
    ----------------------------
*/