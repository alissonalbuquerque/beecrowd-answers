
#include <stdio.h>

int main() {

    int i = 1, j = 60;

    while(j >= 0) {

        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
        
    }
}

/*
    ----------------------------
    Entrada:
        
    Saida:
        I=1 J=60
        I=4 J=55
        I=7 J=50
        ...
        I=? J=0
    ----------------------------
*/