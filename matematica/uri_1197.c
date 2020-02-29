
#include <stdio.h>

int main() {

    int v, t, vel;
    while( scanf("%d %d", &v, &t) == 2 ) {

        vel = v * t * 2;
        printf("%d\n", vel);

    }

    return 0;
}
