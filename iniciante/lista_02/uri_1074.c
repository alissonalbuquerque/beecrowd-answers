
#include <stdio.h>

#define ODD      "ODD"
#define EVEN     "EVEN"
#define NONE     "NULL"
#define POSITIVE "POSITIVE"
#define NEGATIVE "NEGATIVE"
#define NUMBER(A) (A % 2 == 0? EVEN : ODD)
#define SIGNAL(A) (A > 0? POSITIVE : NEGATIVE)

int main() {

    int query, number;
    scanf("%d", &query);

    while(query--) {

        scanf("%d", &number);

        if(number == 0) {
            printf("%s\n", NONE);
        } else {
            printf("%s ", NUMBER(number));
            printf("%s\n", SIGNAL(number));
        }

    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        4
        -5
        0
        3
        -4
    Saida:
        ODD NEGATIVE
        NULL
        ODD POSITIVE
        EVEN NEGATIVE
    ----------------------------
*/