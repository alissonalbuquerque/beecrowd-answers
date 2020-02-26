
#include <stdio.h>

int main() {

    int e, d; 
    scanf("%d %d", &e, &d);

    if( e > d ) {
        puts("Eu odeio a professora!");
    } else if( e + 3 <= d && d < 24) {
        puts("Muito bem! Apresenta antes do Natal!");
    } else {
        puts("Parece o trabalho do meu filho!");
        e + 2 <= 23? puts("TCC Apresentado!") : puts("Fail! Entao eh nataaaaal!");
    }

    return 0;
}
