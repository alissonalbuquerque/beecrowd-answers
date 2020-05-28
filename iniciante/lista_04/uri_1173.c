
#include <stdio.h>
#include <stdlib.h>

int* new_array(size_t size) {
    return calloc(size, sizeof(int));
}

void operation(int* vetor, int size) {
    for(int i = 1; i < size; i++) {
        vetor[i] = vetor[i-1] * 2;
    }
}

int main() {

    int size = 10;
    int* vetor = new_array(size);

    scanf("%d", &vetor[0]);

    operation(vetor, size);

    for(int i = 0; i < size; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
