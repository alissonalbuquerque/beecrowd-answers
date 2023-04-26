
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int candidatos[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &candidatos[i]);
    }

    for(int j = 0; j < n; j++) {
        if(candidatos[0] < candidatos[j]) {
            puts("N");
            return 0;
        }
    }

    puts("S");

    return 0;
}
