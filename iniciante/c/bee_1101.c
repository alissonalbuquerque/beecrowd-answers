
#include <stdio.h>

int main() {

    int m, n, sum = 0;
    
    while(scanf("%d %d", &m, &n)) {
        
        if( m > 0 && n > 0 ) {

            if(n > m) {
                int aux = m;
                m = n;
                n = aux;
            }

            for(int i = n; i <= m; i++) {
                printf("%d ", i);
                sum += i;
            }

            printf("Sum=%d\n", sum);
            sum = 0;

        } else {
            break;
        }

    }

    return 0;
}
