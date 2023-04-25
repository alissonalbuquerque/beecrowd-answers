
#include <stdio.h>

int main() {

    int num, num_saida, len = 7;
    int num_notas[7] = {0, 0, 0, 0, 0, 0, 0};
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &num);
    num_saida = num;
    
    while(num > 0) {

        if(num >= notas[0]) {
            num_notas[0] = num / notas[0];
            num %= notas[0];
        } else if(num >= notas[1]) {
            num_notas[1] = num / notas[1];
            num %= notas[1];
        } else if(num >= notas[2]) {
            num_notas[2] = num / notas[2];
            num %= notas[2];
        } else if(num >= notas[3]) {
            num_notas[3] = num / notas[3];
            num %= notas[3];
        } else if(num >= notas[4]) {
            num_notas[4] = num / notas[4];
            num %= notas[4];
        } else if(num >= notas[5]) {
            num_notas[5] = num / notas[5];
            num %= notas[5];
        } else {
            num_notas[6] = num;
            num = 0;
        }

    }

    printf("%d\n", num_saida);

    for(int i = 0; i < len; i++) {
        printf("%d nota(s) de R$ %d,00\n", num_notas[i], notas[i]);
    }

    return 0;
}
