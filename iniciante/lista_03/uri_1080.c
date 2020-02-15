
#include <stdio.h>

int busca(int* vetor, size_t len) {

    int aux = 0, index = 0;

    for(int i = 0; i < len; i++) {

        if(vetor[i] > aux) {

            aux = vetor[i];
            index = i;

        }
    }

    return index;

}

int main() {

    int vetor[100];
    int index;
    size_t len = sizeof(vetor) / sizeof(int);;

    for(int i = 0; i < len; i++) {
        scanf("%d", &vetor[i]);
    }

    index = busca(vetor, len);


    printf("%d\n%d\n", vetor[index], index+1);

    return 0;
}
