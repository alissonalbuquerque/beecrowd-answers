
#include <stdio.h>

int main() {

    for(int i = 1; i <= 9; i+=2) {

        for(int j = 0; j < 3; j++) {

            printf("I=%d J=%d\n", i, 6+i-j);

        }

    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        
    Saida:
        I=1 J=7
        I=1 J=6
        I=1 J=5
        I=3 J=9
        I=3 J=8
        I=3 J=7
        ...
        I=9 J=15
        I=9 J=14
        I=9 J=13
    ----------------------------
*/