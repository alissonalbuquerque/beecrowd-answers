
#include <stdio.h>
#include <stdlib.h>

double* new_array(size_t size) {
    return calloc(size, sizeof(double));
}

void operation(double* vetor, int size) {
    for(int i = 1; i < size; i++) {
        vetor[i] = vetor[i-1] / 2.0;
    }
}

int main() {

    int size = 100;
    double* vetor = new_array(size);

    scanf("%lf", &vetor[0]);

    operation(vetor, size);

    for(int i = 0; i < size; i++) {
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;
}
