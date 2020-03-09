
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int aux = 1;
    for(int i = 0; i < n; i++) {
        
        for(int j = aux; j < aux+3; j++) {
            printf("%d ", j);
        }
        printf("PUM\n");
        aux += 4;

    }

    return 0;
}
