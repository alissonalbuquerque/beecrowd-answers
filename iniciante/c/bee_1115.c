
#include <stdio.h>

int main() {

    int x, y;

    while(scanf("%d %d", &x, &y)) {

        if(x != 0 && y != 0) {

            if(x > 0 && y > 0) {
                puts("primeiro");
            } else if(x < 0 && y > 0) {
                puts("segundo");
            } else if(x < 0 && y < 0) {
                puts("terceiro");
            } else {
                puts("quarto");
            }

        } else {
            break;
        }

    }

    return 0;
}
