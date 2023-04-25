
#include <stdio.h>

#define MIN(A, B) ( (A < B)? (A) : (B))
#define MAX(A, B) ( (A > B)? (A) : (B))

int main() {

    int a, b, min, max;
    scanf("%d %d", &a, &b);

    min = MIN(a, b);
    max = MAX(a, b);
    
    if(max % min == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
