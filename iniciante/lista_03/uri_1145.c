
#include <stdio.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    int j = 1;
    for(int i = 1; i <= y; i++) {

        if(j != x) {
            printf("%d ", i);
            j++;
        } else {
            printf("%d\n", i);
            j = 1;
        }

    }

    return 0;
}
