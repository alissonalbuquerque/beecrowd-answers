
#include <stdio.h>

int main() {   

    int n_porcao[5];
    int tamanho_porcao[5] = {300, 1500, 600, 1000, 150};

    int total = 225;

    size_t len = sizeof(n_porcao) / sizeof(int);

    for(int i = 0; i < len; i++) {
        scanf("%d", &n_porcao[i]);
    }

    for(int j = 0; j < len; j++) {
        total += n_porcao[j] * tamanho_porcao[j];
    }

    printf("%d\n", total);

    return 0;
}
