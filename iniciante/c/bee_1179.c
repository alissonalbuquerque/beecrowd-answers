
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* new_array(size_t size) {
    return calloc(size, sizeof(int));
}

void input(int* vetor, int cont) {
    for(int i = 0; i < cont; i++) {
        scanf("%d", &vetor[i]);
    }
}

void limpar_vetor(int* vetor, size_t size) {

    for(int i = 0; i < size; i++) {
        vetor[i] = 0;
    }

}

void imprimir_vetor(int* vetor, int size, char* nome_vetor) {

    for(int i = 0; i < size; i++) {
        printf("%s[%d] = %d\n", nome_vetor, i, vetor[i]);
    }

}

bool vetor_cheio(int i, int j) {

    if(i == j) {
        return true;
    } else {
        return false; 
    }

}


void output(int* vetor_entrada, int* vetor_impar, int* vetor_par, int size_entrada, int size) {

    size_t cont_impar = 0, cont_par = 0;

    for(int i = 0; i < size_entrada; i++) {

        if( vetor_entrada[i] % 2 == 0 ) {
            vetor_par[cont_par] = vetor_entrada[i];
            cont_par = cont_par + 1;
        } else {
            vetor_impar[cont_impar] = vetor_entrada[i];
            cont_impar = cont_impar + 1;
        }

        if(vetor_cheio(cont_impar, size)) {
            imprimir_vetor(vetor_impar, size, "impar");
            limpar_vetor(vetor_impar, size);
            cont_impar = 0;
        }

        if(vetor_cheio(cont_par, size)) {
            imprimir_vetor(vetor_par, size, "par");
            limpar_vetor(vetor_par, size);
            cont_par = 0;
        }

    }

    imprimir_vetor(vetor_impar, cont_impar, "impar");
    imprimir_vetor(vetor_par, cont_par, "par");

}


int main() {

    int size_entrada = 15, size = 5;

    int* vetor_entrada = new_array(size_entrada);
    int* vetor_par = new_array(size);
    int* vetor_impar = new_array(size);

    input(vetor_entrada, size_entrada);

    output(vetor_entrada, vetor_impar, vetor_par, size_entrada, size);

    return 0;
}
