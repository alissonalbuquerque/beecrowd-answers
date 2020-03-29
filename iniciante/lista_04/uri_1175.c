
#include <stdio.h>

int main() {

    int vetor[20];
    int temp;

    size_t len = sizeof(vetor) / sizeof(int);

    for(int i = 0; i < len; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < len/2; j++) {
        temp = vetor[j];
        vetor[j] = vetor[len-j-1];
        vetor[len-j-1] = temp;
    }

    for(int k = 0; k < len; k++) {
        printf("N[%d] = %d\n", k, vetor[k]);
    }

    return 0;
}
