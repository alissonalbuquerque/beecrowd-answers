
#include <stdio.h>

void troca(int* vetor, int p1, int p2) {

    int aux = vetor[p1];
    vetor[p1] = vetor[p2];
    vetor[p2] = aux;

}

int busca(int* vetor, size_t len) {

    int aux = 0;

    for(int i = 0; i < len; i++) {

        if(vetor[i] == 1) {
            aux = i;
            break;
        }

    }

    return aux;
}

int main() {

    int copo[3] = {0, 0, 0};
    char c;
    int n, movimento, indice;

    scanf("%d", &n);
    scanf(" %c", &c);

    switch(c) {

        case 'A':
            copo[0] = 1;
            break;
        case 'B':
            copo[1] = 1;
            break;
        case 'C':
            copo[2] = 1;
            break;
        default:
            break;

    }

    while(n--) {

        scanf("%d", &movimento);

        switch(movimento) {

            case 1:
                troca(copo, 0, 1);
                break;
            case 2:
                troca(copo, 1, 2);
                break;
            case 3:
                troca(copo, 2, 0);
                break;
            default:
                break;

        }
    }

    indice = busca(copo, sizeof(copo) / sizeof(int));
    switch(indice) {
        case 0:
            c = 'A';
            break;
        case 1:
            c = 'B';
            break;
        case 2:
            c = 'C';
            break;
        default:
            break;
    }

    putchar(c);
    putchar('\n');

    return 0;
}
