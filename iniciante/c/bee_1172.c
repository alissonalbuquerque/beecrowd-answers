
#include <stdio.h>
#include <stdlib.h>

int* new_array(size_t size) {
    return calloc(size, sizeof(int));
}

void input(int* vetor, int len) {
    for(int i = 0; i < len; i++) {
        scanf("%d", &vetor[i]);
    }
}

void operation(int* vetor, int len) {
    for(int i = 0; i < len; i++) {
       if(vetor[i] <= 0) {
           vetor[i] = 1;
       }
    }
}

int main() {

    int size = 10;
    int* vetor = new_array(size);

    input(vetor, size);
    operation(vetor, size);

    for(int i = 0; i < size; i++) {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
