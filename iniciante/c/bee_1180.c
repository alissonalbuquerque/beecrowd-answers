
#include <stdio.h>

int min_value(int* vetor, size_t len) {
    
    int index = 0;

    if( len > 1 ) {
        for(int i = 1; i < len; i++) {
            if(vetor[index] > vetor[i]) { 
                index = i;
            }
        }
    } else {
        return index;
    }

    return index;
}

int main() {

    int n;
    scanf("%d", &n);

    int x[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("Menor valor: %d\n", x[min_value(x, n)]);
    printf("Posicao: %d\n", min_value(x, n));
    
    return 0;
}