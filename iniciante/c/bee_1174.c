
#include <stdio.h>

int main() {

    double vetor[100];

    size_t len = sizeof(vetor) / sizeof(double);

    for(int i = 0; i < len; i++) {
        scanf("%lf", &vetor[i]);
    }

    for(int j = 0; j < len; j++) {
        if(vetor[j] <= 10) {
            printf("A[%d] = %.1f\n", j, vetor[j]);
        }
    }

    return 0;
}
