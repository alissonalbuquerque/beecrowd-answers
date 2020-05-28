
#include <stdio.h>
#include <stdlib.h>

int* new_array(size_t size) {
    return calloc(size, sizeof(int));
}

void operation(int* vetor, int size, int t) {

    int aux = 0;

    for(int i = 0; i < size; i++) {

        if(aux < t) {
            vetor[i] = aux;
        } else {
            aux = 0;
            vetor[i] = aux;
        }

        aux++;

    }

}

int main() {

    int size = 1000, t = 0;
    int* vetor = new_array(size);

    scanf("%d", &t);
    operation(vetor, size, t);

    for(int i = 0; i < size; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
