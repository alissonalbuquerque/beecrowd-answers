
#include <stdio.h>
#include <stdlib.h>

void print(int* v, int n) {
    
    if(n > 0) {

        for(int i = 0; i < n-1; i++) {
        printf("%d ", v[i]);
        }
        printf("%d\n", v[n-1]);

    }

}

int main() {

    int n;
    scanf("%d", &n);
    
    int* v = calloc(n, sizeof(int));

    if( n >= 2) {
        for(int i = 0; i < 2; i++) {
            v[i] = i;
        }
        for(int j = 2; j < n; j++) {
            v[j] = v[j-2] + v[j-1];
        }
    }

    print(v, n);

    return 0;
}
