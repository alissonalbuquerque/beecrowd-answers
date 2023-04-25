
#include <stdio.h>

int main() {

    for(int i = 1; i <= 9; i+=2) {

        for(int j = 0; j < 3; j++) {

            printf("I=%d J=%d\n", i, 6+i-j);

        }

    }

    return 0;
}
