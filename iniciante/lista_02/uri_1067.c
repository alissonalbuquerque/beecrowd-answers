
#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    for(int i = 1; i <= x; i+=2) {

        printf("%d\n", i);

    }


    return 0;
}

/*
    ----------------------------
    Entrada:
        8
    Saida:
        1
        3
        5
        7
    ----------------------------
*/