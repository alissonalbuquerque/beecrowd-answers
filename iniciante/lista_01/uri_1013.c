
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, maiorAB;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    maiorAB >= c? printf("%d eh o maior\n", maiorAB) : printf("%d eh o maior\n", c);

    return 0;
}

/*
    ----------------------------
    Entrada:
        7 14 106
    Saida:
        106 eh o maior

    ----------------------------
    ----------------------------
    Entrada:    
        217 14 6
    Saida:	
        217 eh o maior
        
    ----------------------------
*/