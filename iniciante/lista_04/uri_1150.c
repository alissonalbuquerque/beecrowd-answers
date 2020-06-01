
#include <stdio.h>

int main() {

    int x, z;
    int aux = 0, out = 1;

    scanf("%d", &x);

    while( scanf("%d", &z) ) {

        if( z > x ) {

            aux = x;

            while( aux <= z ) {
                aux += x++;     
                out++;
            }

            break;
        }

    }

    printf("%d\n", out);

    return 0;
}
